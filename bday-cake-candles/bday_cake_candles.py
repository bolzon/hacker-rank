#!/bin/python3


def birthdayCakeCandles(candles):
    tallest = 1
    pivot = candles[0]
    for h in candles[1:]:
        if h == pivot:
            tallest += 1
        elif h > pivot:
            pivot = h
            tallest = 1
    return tallest


if __name__ == '__main__':
    input()
    print(birthdayCakeCandles(list(map(int, input().split()))))
