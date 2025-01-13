#!/bin/python3

import math
import os
import random
import re
import sys


def staircase(n):
    for i in range(1, n + 1):
        spaces = ' ' * int(n - i)
        sharps = '#' * int(i)
        print(spaces + sharps)


if __name__ == '__main__':
    n = int(input().strip())
    staircase(n)
