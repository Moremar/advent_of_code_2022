#!/usr/bin/env python3

def parse(input_path):
    res = []
    curr = 0
    with open(input_path, 'r') as f:
        for line in f.readlines():
            if len(line.strip()) == 0:
                res.append(curr)
                curr = 0
            else:
                curr += int(line)
    return res


def solve_part1(arr):
    return max(arr)


if __name__ == "__main__":
    parsed = parse("data.txt")
    print('Part 1 :', solve_part1(parsed))
