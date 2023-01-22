#include "../day21/part1.h"
#include "../day21/part2.h"

using namespace std;
using namespace Day21;


int main(int argc, char* argv[]) {

    const string inputFilePath = argc > 1 ? argv[1] : "../day21/data.txt";

    // instanciate monkeys with "Long long" values
    const auto parsedPart1 = parse<long long>(inputFilePath);
    cout << "Part 1 : " << Part1::solve(parsedPart1) << endl;

    // instanciate monkeys with complex values
    // all monkeys have integer values, except "humn" monkey that will have value i
    // this way, we can separate the value of "humn" monkey from all other monkeys in the calculation
    const auto parsedPart2 = parse<complex<long double>>(inputFilePath);
    cout << "Part 2 : " << Part2::solve(parsedPart2) << endl;

    return 0;
}
