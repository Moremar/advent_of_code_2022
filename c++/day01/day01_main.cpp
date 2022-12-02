
#include "../day01/day01_part1.h"
#include "../day01/day01_part2.h"

#include <iostream>

using namespace std;
using namespace Day01;


int main(int argc, char* argv[]) {

    const string inputFilePath = argc > 1 ? argv[1] : "../day01/data.txt";
    const auto parsed = parse(inputFilePath);
    cout << "Part 1 : " << Part1::solve(parsed) << endl;
    cout << "Part 2 : " << Part2::solve(parsed) << endl;

    return 0;
}

