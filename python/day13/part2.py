#!/usr/bin/env python3
import part1
import functools


def solve_part2(pairs):
    packets = [[2], [6]]
    for (p1, p2) in pairs:
        packets += [p1, p2]
    packets.sort(key=functools.cmp_to_key(lambda a, b: part1.compare(a, b)))
    return (1 + packets.index([2])) * (1 + packets.index([6]))


if __name__ == "__main__":
    parsed = part1.parse("data.txt")
    print('Part 2 :', solve_part2(parsed))
