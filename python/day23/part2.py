#!/usr/bin/env python3
from part1 import parse, play_round, get_cycle


def solve_part2(elves):
    cycle = get_cycle()

    round_id, stable = 0, False
    while not stable:
        elves, stable = play_round(round_id, elves, cycle)
        round_id = round_id + 1

    return round_id


if __name__ == "__main__":
    parsed = parse("data.txt")
    print('Part 2 :', solve_part2(parsed))
