LEFT = 0
UP = 1
DOWN = 2
RIGHT = 3

actions = [LEFT, UP, DOWN, RIGHT]

OPENSQUARE = 0
STARTING = 1
TRAP = 6
WALL = 7
PLAYER = 8
ENDING = 9

unicode_dic = ["\u25a1", "\u0391", 2, 3, 4, 5, "\u203b", "\u25a0", "\u263a", "\u03a9"]
unicode_dic_alt1 = [
    "\u25a1",
    "\u0391",
    2,
    3,
    4,
    5,
    "\u25a0",
    "\u2551",
    "\u263a",
    "\u03a9",
]


def translate_to_unicode(x):
    return unicode_dic[x]
