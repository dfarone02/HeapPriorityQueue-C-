//Daniel Farone
//CSCI 3110-001
//Project #6
//Due: 04/14/22
//This file defines the functions for the Rectangle class that were given prototypes
//in the "Rectangle.h" file but were not defined
#include "rectangle.h"

bool Rectangle::operator<(const Rectangle &rhs) const
{
    return area < rhs.area;
}

bool Rectangle::operator<=(const Rectangle &rhs) const
{
    return area <= rhs.area;
}

bool Rectangle::operator>(const Rectangle &rhs) const
{
    return area > rhs.area;
}

bool Rectangle::operator>=(const Rectangle &rhs) const
{
    return area >= rhs.area;
}

bool Rectangle::operator==(const Rectangle &rhs) const
{
    return area == rhs.area;
}

bool Rectangle::operator!=(const Rectangle &rhs) const
{
    return area != rhs.area;
}
