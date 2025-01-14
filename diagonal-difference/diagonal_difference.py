#!/bin/python3


def diagonalDifference(arr: list[list[int]]) -> int:
    n = len(arr)
    d1 = d2 = 0
    for i in range(n):
        d1 += arr[i][i]
        d2 += arr[n-1][i]
        n -= 1
    return abs(d1 - d2)


if __name__ == '__main__':
    n = int(input().strip())
    arr = [list(map(int, input().split())) for _ in range(n)]
    print(diagonalDifference(arr))
