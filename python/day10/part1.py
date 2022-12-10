#!/usr/bin/env python3


def parse(input_path):
    with open(input_path, 'r') as f:
        return [(line[0:4], int(line[5:]) if len(line) > 5 else 0) for line in f.readlines()]


def solve_part1(instructions):
    res = cycle = 0
    regX = 1
    for (op, val) in instructions:
        duration = 1 if op == "noop" else 2
        for i in range(duration):
            cycle += 1
            res += (cycle * regX) if (cycle % 40 == 20) else 0
            regX += 0 if i < duration-1 else val
    return res


if __name__ == "__main__":
    parsed = parse("data.txt")
    print('Part 1 :', solve_part1(parsed))