#include "../day01/part1.h"
#include "../day01/part2.h"

using namespace std;
using namespace Day01;


int main(int argc, char* argv[]) {

    const string inputFilePath = argc > 1 ? argv[1] : "../day01/data.txt";
    const auto parsed = parse(inputFilePath);
    cout << "Part 1 : " << Part1::solve(parsed) << endl;
    cout << "Part 2 : " << Part2::solve(parsed) << endl;

    return 0;
}

