//Daniel Farone
//CSCI 3110-001
//Project #6
//Due: 04/14/22
// Header file for the Rectangle Class Modified for Project 6
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using std::ostream;

class Rectangle
{
  public:

    Rectangle(int l = 0, int w = 0)					// default constructor 
		{ length = l; width = w; area = length * width; }

    void setLength(int l)							// length mutator (setter) - updates area member
		{ length = l; area = length * width; }

    void setWidth(int w)							// width mutator (setter) - updates area member
		{ width = w; area = length * width; }

	int getLength() const							// lengthgth accessor (getter)
		{ return length; }

	int getWidth() const							// width accessor (getter)
		{ return width; }

	int getArea() const								// area accessor (getter)
		{ return area; }

	friend ostream& operator << (ostream& os, const Rectangle & rect)   // outputs a Rectangle object
	{
		int spacer = 0;
    if (rect.length < 10) 
      spacer += 1;
    if (rect.width < 10)
      spacer += 1;
    if (rect.area < 10)
      spacer += 1;
		os << "[L:" << rect.length << " W:" << rect.width << " A:" << rect.area << "]";
    for(int i = 0; i < spacer; i++) 
      os << " ";
		return os;
	}


	// implement overloads below
	bool operator<(const Rectangle &) const;

	bool operator<=(const Rectangle &) const;

	bool operator>(const Rectangle &) const;

	bool operator>=(const Rectangle &) const;

	bool operator==(const Rectangle &) const;

	bool operator!=(const Rectangle &) const;

  private:
	int length;									// length data member

	int width;									// width data member

	int area;									// area data member

};

#endif
