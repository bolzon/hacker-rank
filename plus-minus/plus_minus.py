#!/bin/python3


def plusMinus(arr: list[int]) -> None:
    array_length = 0
    negative_ratio = 0
    zero_ratio = 0
    positive_ratio = 0

    for n in arr:
        array_length += 1
        if n == 0:
            zero_ratio += 1
        elif n > 0:
            positive_ratio += 1
        else:
            negative_ratio += 1
            
    print(f'{positive_ratio / array_length:06f}')
    print(f'{negative_ratio / array_length:06f}')
    print(f'{zero_ratio / array_length:06f}')


if __name__ == '__main__':
    n = int(input().strip())
    arr = list(map(int, input().rstrip().split()))
    plusMinus(arr)
