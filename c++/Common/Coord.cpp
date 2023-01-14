#include "Coord.h"
#include <cmath>       // abs

using namespace std;


// initialize static members
const Coord Coord::WEST  = { -1,  0 };
const Coord Coord::EAST  = {  1,  0 };
const Coord Coord::NORTH = {  0, -1 };
const Coord Coord::SOUTH = {  0,  1 };


Coord Coord::operator+(const Coord& o) const {
    return { x + o.x, y  + o.y };
}

Coord& Coord::operator+=(const Coord& o) {
    x += o.x;
    y += o.y;
    return *this;
}

bool Coord::operator<(const Coord& o) const {
    return x < o.x || (x == o.x && y < o.y);
}

int Coord::manhattan(const Coord& c1, const Coord& c2) {
    return abs(c1.x - c2.x) + abs(c1.y - c2.y);
}
