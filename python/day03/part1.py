#!/usr/bin/env python3
import string


def parse(input_path):
    with open(input_path, 'r') as f:
        return [line.strip() for line in f.readlines()]


def priority(c):
    return (string.ascii_lowercase + string.ascii_uppercase).index(c) + 1


def solve_part1(bags):
    res = 0
    for bag in bags:
        for item_type in bag[:int(len(bag)/2)]:
            if item_type in bag[int(len(bag)/2):]:
                res += priority(item_type)
                break
    return res


if __name__ == "__main__":
    parsed = parse("data.txt")
    print('Part 1 :', solve_part1(parsed))
