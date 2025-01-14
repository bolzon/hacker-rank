#!/bin/python3


if __name__ == '__main__':
    arr = sorted(map(int, input().split()))
    print(sum(arr[:-1]), sum(arr[1:]))
