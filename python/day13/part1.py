#!/usr/bin/env python3

def parse(input_path):
    with open(input_path, 'r') as f:
        return [(eval(e) for e in pair.split('\n')) for pair in f.read().split('\n\n')]


def compare(left, right):
    if type(left) == type(right) == int:
        return -1 if left < right else 1 if left > right else 0
    elif type(left) == type(right) == list:
        for i in range(len(left)):
            if len(right) <= i:
                return 1
            order = compare(left[i], right[i])
            if order != 0:
                return order
        return -1 if len(right) > len(left) else 0
    elif type(left) == int and type(right) == list:
        return compare([left], right)
    elif type(left) == list and type(right) == int:
        return compare(left, [right])
    assert False


def solve_part1(pairs):
    return sum([i+1 for (i, pair) in enumerate(pairs) if compare(*pair) < 0])


if __name__ == "__main__":
    parsed = parse("data.txt")
    print('Part 1 :', solve_part1(parsed))
