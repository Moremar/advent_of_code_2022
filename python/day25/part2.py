#!/usr/bin/env python3
from part1 import parse, find_path


def solve_part2(parsed):
    max_i, max_j = parsed
    start, target = (-1, 0), (max_i+1, max_j)
    time_to_target = find_path(0, start, target, max_i, max_j)
    time_back_to_start = find_path(time_to_target, target, start, max_i, max_j)
    return find_path(time_back_to_start, start, target, max_i, max_j)


if __name__ == "__main__":
    parsed = parse("data.txt")
    print('Part 2 :', solve_part2(parsed))
