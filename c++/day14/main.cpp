#include "../day14/part1.h"
#include "../day14/part2.h"

using namespace std;
using namespace Day14;


int main(int argc, char* argv[]) {

    const string inputFilePath = argc > 1 ? argv[1] : "../day14/data.txt";
    const auto parsed = parse(inputFilePath);
    cout << "Part 1 : " << Part1::solve(parsed) << endl;
    cout << "Part 2 : " << Part2::solve(parsed) << endl;

    return 0;
}
