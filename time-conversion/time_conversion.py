#!/bin/python3

import math
import os
import random
import re
import sys


def timeConversion(s):
    hour, fmt, middle = int(s[:2]), s[-2:], s[2:-2]
    if fmt == 'PM' and hour != 12:
        hour += 12
    elif fmt == 'AM' and hour == 12:
        hour = 0
    return f'{hour:02d}{middle}'


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    s = input()

    result = timeConversion(s)

    fptr.write(result + '\n')
    fptr.close()
