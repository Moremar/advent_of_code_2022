#!/usr/bin/env python3
import part1
import collections


def solve_part2(stacks, moves):
    for (nb, src, dest) in moves:
        tmp = collections.deque()
        for _ in range(nb):
            tmp.append(stacks[src-1].pop())
        for _ in range(nb):
            stacks[dest-1].append(tmp.pop())
    return ''.join([stack.pop() for stack in stacks])


if __name__ == "__main__":
    parsed = part1.parse("data.txt")
    print('Part 2 :', solve_part2(*parsed))
