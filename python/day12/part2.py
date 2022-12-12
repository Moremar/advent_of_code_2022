#!/usr/bin/env python3
import part1


def solve_part2(grid, _, end):
    shortest = None
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 0:
                distance = part1.solve_part1(grid, (i, j), end)
                if shortest is None or (distance is not None and distance < shortest):
                    shortest = distance
    return shortest


if __name__ == "__main__":
    parsed = part1.parse("data.txt")
    print('Part 1 :', solve_part2(*parsed))
