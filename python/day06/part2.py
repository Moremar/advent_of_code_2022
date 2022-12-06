#!/usr/bin/env python3
import part1

if __name__ == "__main__":
    parsed = part1.parse("data.txt")
    print('Part 2 :', part1.solve(parsed, 14))