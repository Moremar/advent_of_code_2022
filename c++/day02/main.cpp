
#include "../day02/part1.h"
#include "../day02/part2.h"

#include <iostream>

using namespace std;
using namespace Day02;


int main(int argc, char* argv[]) {

    const string inputFilePath = argc > 1 ? argv[1] : "../day02/data.txt";
    
    int part1 = solve(Part1::parse(inputFilePath));
    cout << "Part 1 : " << part1 << endl;

   int part2 = solve(Part2::parse(inputFilePath));
   cout << "Part 2 : " << part2 << endl;

    return 0;
}

