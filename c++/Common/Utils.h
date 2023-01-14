
#pragma once

#include "Coord.h"

#include <algorithm>   // std::max_element
#include <array>
#include <cassert>
#include <cmath>       // abs
#include <compare>     // <=> operator
#include <deque>
#include <fstream>     // std::ifstream
#include <iostream>    // std::cout
#include <map>
#include <numeric>     // std::reduce, std::iota
#include <regex>
#include <set>
#include <sstream>     // ostringstream
#include <string>
#include <utility>     // std::pair
#include <vector>

using std::string;
using std::vector;


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
