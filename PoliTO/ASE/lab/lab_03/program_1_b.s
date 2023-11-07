; ******** MIPS64 *********
; int m=1 /* 64  bit */
; double k,p
; for (i = 0; i < 64; i++){
;   if (i is even) {
;       p= v1[i] * ((double)( m<< i)) /*logic shift */
;       m = (int)p
;   } else { /*  i is odd */ 
;       p= v1[i] / ((double)m* i))
;       k =  ((float)((int)v4[i]/ 2^i)
;   }
; 
;   v5[i] = ((p * v2[i]) + v3[i])+v4[i];
;   v6[i] = v5[i]/(k+v1[i]);
;   v7[i] = v6[i]*(v2[i]+v3[i]);
; }

.data

; We have 4 vectors of 64 doubles each
; assuming v1 and v4 do not contain 0 values
; v5, v6, v7 are empty vectors of the same size

v1: .double 1.1, 2.1, 3.1, 4.1, 5.1, 6.1, 7.1, 8.1
.double 9.1, 10.1, 11.1, 12.1, 13.1, 14.1, 15.1, 16.1
.double 17.1, 18.1, 19.1, 20.1, 21.1, 22.1, 23.1, 24.1
.double 25.1, 26.1, 27.1, 28.1, 29.1, 30.1, 31.1, 32.1
.double 33.1, 34.1, 35.1, 36.1, 37.1, 38.1, 39.1, 40.1
.double 41.1, 42.1, 43.1, 44.1, 45.1, 46.1, 47.1, 48.1
.double 49.1, 50.1, 51.1, 52.1, 53.1, 54.1, 55.1, 56.1
.double 57.1, 58.1, 59.1, 60.1, 61.1, 62.1, 63.1, 64.1
v2: .double 1.1, 2.1, 3.1, 4.1, 5.1, 6.1, 7.1, 8.1
.double 9.1, 10.1, 11.1, 12.1, 13.1, 14.1, 15.1, 16.1
.double 17.1, 18.1, 19.1, 20.1, 21.1, 22.1, 23.1, 24.1
.double 25.1, 26.1, 27.1, 28.1, 29.1, 30.1, 31.1, 32.1
.double 33.1, 34.1, 35.1, 36.1, 37.1, 38.1, 39.1, 40.1
.double 41.1, 42.1, 43.1, 44.1, 45.1, 46.1, 47.1, 48.1
.double 49.1, 50.1, 51.1, 52.1, 53.1, 54.1, 55.1, 56.1
.double 57.1, 58.1, 59.1, 60.1, 61.1, 62.1, 63.1, 64.1
v3: .double 1.1, 2.1, 3.1, 4.1, 5.1, 6.1, 7.1, 8.1
.double 9.1, 10.1, 11.1, 12.1, 13.1, 14.1, 15.1, 16.1
.double 17.1, 18.1, 19.1, 20.1, 21.1, 22.1, 23.1, 24.1
.double 25.1, 26.1, 27.1, 28.1, 29.1, 30.1, 31.1, 32.1
.double 33.1, 34.1, 35.1, 36.1, 37.1, 38.1, 39.1, 40.1
.double 41.1, 42.1, 43.1, 44.1, 45.1, 46.1, 47.1, 48.1
.double 49.1, 50.1, 51.1, 52.1, 53.1, 54.1, 55.1, 56.1
.double 57.1, 58.1, 59.1, 60.1, 61.1, 62.1, 63.1, 64.1
v4: .double 1.1, 2.1, 3.1, 4.1, 5.1, 6.1, 7.1, 8.1
.double 9.1, 10.1, 11.1, 12.1, 13.1, 14.1, 15.1, 16.1
.double 17.1, 18.1, 19.1, 20.1, 21.1, 22.1, 23.1, 24.1
.double 25.1, 26.1, 27.1, 28.1, 29.1, 30.1, 31.1, 32.1
.double 33.1, 34.1, 35.1, 36.1, 37.1, 38.1, 39.1, 40.1
.double 41.1, 42.1, 43.1, 44.1, 45.1, 46.1, 47.1, 48.1
.double 49.1, 50.1, 51.1, 52.1, 53.1, 54.1, 55.1, 56.1
.double 57.1, 58.1, 59.1, 60.1, 61.1, 62.1, 63.1, 64.1

v5: .space 512
v6: .space 512
v7: .space 512

m: .word 1
k: .double 0.0
p: .double 0.0

.text

main:

    daddi   R11,    R0,         512                     ; loads index i in R11
    daddi   R17,    R0,         64                      ; loads index i/8 in R17
    daddi   R21,    R0,         1                       ; loads 1 in R21, constant for 2 powers
loop:
    daddi   R11,    R11,        -8                      ; i--
    daddi   R17,    R17,        -1                      ; (i/8)--

; loads the value of vx[i] in Fx

    l.d     F1,     v1(R11)
    l.d     F2,     v2(R11)
    l.d     F3,     v3(R11)
    l.d     F4,     v4(R11)

if:
    l.d     F13,    p(R0)                               ; loads p regardless
    ld      R12,    m(R0)                               ; loads m regardless

    andi    R18,    R17,        1
    bnez    R18,    else

then:                                                   ; i is even

    dsllv   R12,    R12,        R11                     ; R12 = m << i, we would need to divide it if we dsll instead

    mtc1    R12,    F13                                 ; move m << i to F13
    cvt.d.l F13,    F13                                 ; cast m << i to double
    mul.d   F13,    F13,        F1                      ; p = v1[i] * R12

    cvt.l.d F13,    F13                                 ; cast p to int
    mfc1    R12,    F13                                 ; move (int)p to R12
    sd      R12,    m(R0)                               ; store m

    j       fi

else:                                                   ; i is odd

    dmul    R19,    R12,        R11                     ; R12 = m * i
    cvt.l.d F22,    F4                                  ; cast v4[i] to int
    mfc1    R12,    F22                                 ; move (int)v4[i] to R12
    dsllv   R13,    R21,        R11                     ; R13 = 2^i
    ddiv    R12,    R12,        R13                     ; LO = v4[i] / 2^i

    mtc1    R19,    F14                                 ; move m * i to F14
    cvt.d.l F14,    F14                                 ; cast m * i to double
    cvt.d.l F15,    F15                                 ; cast k to double
    mtc1    R12,    F15                                 ; move R12 to F15
    s.d     F15,    k(R0)                               ; store k
    div.d   F13,    F1,         F14                     ; p = v1[i] / (m * i)
    s.d     F13,    p(R0)                               ; store p

fi:

    mul.d   F12,    F1,         F2                      ; F12 = v1[i]*v2[i]
    add.d   F20,    F4,         F1                      ; F20 = v4[i] + v1[i]
    add.d   F21,    F2,         F3                      ; F21 = v2[i] + v3[i]

    add.d   F12,    F12,        F3                      ; F12 = F12 + v3[i]
    add.d   F12,    F12,        F4                      ; F12 = F12 + v4[i]
    s.d     F12,    v5(R11)                             ; v5[i] = F12

    l.d     F5,     v5(R11)
    div.d   F20,    F5,         F20                     ; F20 = v5[i]/F20

    s.d     F20,    v6(R11)                             ; v6[i] = F12
    l.d     F6,     v6(R11)

    mul.d   F21,    F6,         F21                     ; F21 = v6[i]*F21
    s.d     F21,    v7(R11)                             ; v7[i] = F21

    bnez    R11,    loop                                ; if i != 0, repeat

end:
    nop
    halt    


; ------------------------------------------------------------------------------
; --- Expected result ----------------------------------------------------------
; ------------------------------------------------------------------------------
; v5: 3.410000 8.610000 15.810000 25.010000 36.210000 49.410000 64.610000 81.810000
; 101.010000 122.210000 145.410000 170.610000 197.810000 227.010000 258.210000 291.410000
; 326.610000 363.810000 403.010000 444.210000 487.410000 532.610000 579.810000 629.010000
; 680.210000 733.410000 788.610000 845.810000 905.010000 966.210000 1029.410000 1094.610000
; 1161.810000 1231.010000 1302.210000 1375.410000 1450.610000 1527.810000 1607.010000 1688.210000
; 1771.410000 1856.610000 1943.810000 2033.010000 2124.210000 2217.410000 2312.610000 2409.810000
; 2509.010000 2610.210000 2713.410000 2818.610000 2925.810000 3035.010000 3146.210000 3259.410000
; 3374.610000 3491.810000 3611.010000 3732.210000 3855.410000 3980.610000 4107.810000 4237.010000
; v6: 1.550000 2.050000 2.550000 3.050000 3.550000 4.050000 4.550000 5.050000
; 5.550000 6.050000 6.550000 7.050000 7.550000 8.050000 8.550000 9.050000
; 9.550000 10.050000 10.550000 11.050000 11.550000 12.050000 12.550000 13.050000
; 13.550000 14.050000 14.550000 15.050000 15.550000 16.050000 16.550000 17.050000
; 17.550000 18.050000 18.550000 19.050000 19.550000 20.050000 20.550000 21.050000
; 21.550000 22.050000 22.550000 23.050000 23.550000 24.050000 24.550000 25.050000
; 25.550000 26.050000 26.550000 27.050000 27.550000 28.050000 28.550000 29.050000
; 29.550000 30.050000 30.550000 31.050000 31.550000 32.050000 32.550000 33.050000
; v7: 3.410000 8.610000 15.810000 25.010000 36.210000 49.410000 64.610000 81.810000
; 101.010000 122.210000 145.410000 170.610000 197.810000 227.010000 258.210000 291.410000
; 326.610000 363.810000 403.010000 444.210000 487.410000 532.610000 579.810000 629.010000
; 680.210000 733.410000 788.610000 845.810000 905.010000 966.210000 1029.410000 1094.610000
; 1161.810000 1231.010000 1302.210000 1375.410000 1450.610000 1527.810000 1607.010000 1688.210000
; 1771.410000 1856.610000 1943.810000 2033.010000 2124.210000 2217.410000 2312.610000 2409.810000
; 2509.010000 2610.210000 2713.410000 2818.610000 2925.810000 3035.010000 3146.210000 3259.410000
; 3374.610000 3491.810000 3611.010000 3732.210000 3855.410000 3980.610000 4107.810000 4237.010000