
#include "../day01/day01_part1.h"
#include "../day01/day01_part2.h"

#include <iostream>

using namespace std;


int main(int argc, char* argv[]) {

    const string inputFilePath = argc > 1 ? argv[1] : "../day01/data.txt";
    const auto parsed = Day01::parse(inputFilePath);
    cout << "Part 1 : " << Day01::Part1::solve(parsed) << endl;
    cout << "Part 2 : " << Day01::Part2::solve(parsed) << endl;

    return 0;
}

