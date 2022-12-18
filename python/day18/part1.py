#!/usr/bin/env python3


def parse(input_path):
    with open(input_path, 'r') as f:
        return [ tuple(map(int, line.split(','))) for line in f.readlines()]


def get_adj(point):
    x, y, z = point
    return [(x+1, y, z), (x-1, y, z), (x, y+1, z), (x, y-1, z), (x, y, z+1), (x, y, z-1)]


def solve_part1(lava_drops):
    world = set(lava_drops)
    count = 0
    for lava_drop in lava_drops:
        for adj in get_adj(lava_drop):
            if adj not in world:
                count += 1
    return count


if __name__ == "__main__":
    parsed = parse("data.txt")
    print('Part 1 :', solve_part1(parsed))
