#!/usr/bin/env python3
from part1 import parse, best_geode_number


def solve_part2(blueprints, time):
    return best_geode_number(blueprints[0], time) \
           * best_geode_number(blueprints[1], time) \
           * best_geode_number(blueprints[2], time)


if __name__ == "__main__":
    parsed = parse("data.txt")
    print('Part 2 :', solve_part2(parsed, 32))
