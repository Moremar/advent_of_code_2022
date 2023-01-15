#include "../day15/part1.h"
#include "../day15/part2.h"

using namespace std;
using namespace Day15;


int main(int argc, char* argv[]) {

    const string inputFilePath = argc > 1 ? argv[1] : "../day15/data.txt";
    const auto parsed = parse(inputFilePath);

    // for the sample input (sample.txt)
//    const int targetY = 10;
//    const int maxBound = 20;

    // for actual input (data.txt)
    const int targetY = 2'000'000;
    const int maxBound = 4'000'000;

    cout << "Part 1 : " << Part1::solve(parsed, targetY) << endl;
    cout << "Part 2 : " << Part2::solve(parsed, maxBound) << endl;

    return 0;
}
