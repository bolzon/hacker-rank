#!/bin/python3


if __name__ == '__main__':
    arr = sorted(map(int, input().split()))
    total_sum = sum(arr)
    print(f'{total_sum - arr[-1]} {total_sum - arr[0]}')
