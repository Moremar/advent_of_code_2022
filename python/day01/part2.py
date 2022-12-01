#!/usr/bin/env python3

import part1


def solve_part2(arr):
    return sum(sorted(arr)[-3:])


if __name__ == "__main__":
    parsed = part1.parse("data.txt")
    print('Part 2 :', solve_part2(parsed))
