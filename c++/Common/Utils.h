
#pragma once
#include <algorithm>   // std::max_element
#include <cassert>
#include <deque>
#include <fstream>     // std::ifstream
#include <iostream>    // std::cout
#include <map>
#include <numeric>     // std::reduce, std::iota
#include <regex>
#include <set>
#include <string>
#include <utility>     // std::pair
#include <vector>

using std::string;
using std::vector;

struct Coord {
    Coord(int x, int y): x(x), y(y) {}
    Coord operator+(const Coord& o) const;
    bool operator<(const Coord& o) const;
    int x, y;
};

/**
 * Return the lines of a file
 */
vector<string> getFileLines(const string& filePath);

/**
 * Trim a string
 */
string trim(const string& str, const string& chars = "\t\n\v\f\r ");

/**
 * Split a string on a delimiter
 */
vector<string> split(const string &s, const string &delim);

/**
 * Return true if the string contains the substring
 */
bool contains(const string& s, const string& sub);
