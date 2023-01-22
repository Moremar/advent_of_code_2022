#include "../day20/part1.h"
#include "../day20/part2.h"

using namespace std;
using namespace Day20;


int main(int argc, char* argv[]) {

    const string inputFilePath = argc > 1 ? argv[1] : "../day20/data.txt";

    auto parsed = parse(inputFilePath);
    cout << "Part 1 : " << Part1::solve(parsed) << endl;

    // the parsed list of node is modified by part 1 so create a new one for part 2
    parsed = parse(inputFilePath);
    cout << "Part 2 : " << Part2::solve(parsed) << endl;

    return 0;
}
