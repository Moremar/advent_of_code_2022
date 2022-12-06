
def solve(sequence, length):
    for i in range(length, len(sequence)):
        if len(set(sequence[i-length:i])) == length:
            return i


def parse(input_path):
    with open(input_path, 'r') as f:
        return f.read()


if __name__ == "__main__":
    parsed = parse("data.txt")
    print('Part 1 :', solve(parsed, 4))
