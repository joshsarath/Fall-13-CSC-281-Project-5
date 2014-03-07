//
//  rectangle.cpp
//  project 5
//
//  Created by Josh Sarath on 10/13/13.
//
//

#include "rectangle.h"

rectangle::rectangle(float width, float height)
{
    float length_1, length_2;
    length_1 = width;
    length_2 = height;
}

float getArea(float length_1, float length_2)
{
    int area;
    area = length_1*length_2;
    return area;
}


square::square(float width)
{
    float length_1, length_2;
    length_1 = width;
    length_2 = width;
}


cube::cube(float width)
{
    float length_1, length_2, length_3;
    length_1 = width;
    length_2 = width;
    length_3 = width;
}

float getVolume(float width)
{
    int volume, area;
    area = getArea(width, width);
    volume= area*width;
    return volume;
}