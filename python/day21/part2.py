#!/usr/bin/env python3
import part1


def solve_part2(tree):
    first = part1.compute(tree.left)
    second = part1.compute(tree.right)
    return (first.real - second.real) / (second.imag - first.imag)


if __name__ == "__main__":
    parsed = part1.parse("data.txt", True)
    print('Part 2 :', solve_part2(parsed))
