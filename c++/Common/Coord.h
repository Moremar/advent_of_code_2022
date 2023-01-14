#pragma once

/**
 * Coordinates class for a 2D point
 */
struct Coord {

    // constructor
    Coord(int x, int y): x(x), y(y) {}

    // operator overload
    Coord operator+(const Coord& o) const;
    Coord& operator+=(const Coord& o);
    bool operator<(const Coord& o) const;

    // manhattan distance between 2 coordinates
    static int manhattan(const Coord& c1, const Coord& c2);

    // member variables
    int x, y;

    // unit vectors
    static const Coord WEST, EAST, NORTH, SOUTH;
};
