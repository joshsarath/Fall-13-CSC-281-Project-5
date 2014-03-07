//
//  main.cpp
//  project 5
//
//  Created by Josh Sarath on 10/12/13.
//
//
#include <iostream>
#include "rectangle.h"
using namespace std;

float rect();
//float sq();
//float cu();


int main()
{
    string shape;
    float a;
    cout << "What shape do you want to use? 'Rectangle', 'Square', or 'Cube'?"<<endl;//has the user decide which shape
    cin>> shape;
    if (shape == "Rectangle")
    {
        a = rect();
        cout<<a;
    }
    if (shape == "Square")
        //sq();
    if (shape == "Cube")
        //cu();
    
    return 0;
}

float rect()
{
    float height, width, area;
    cout<<"Enter the height and width"<<endl;
    cin>>height>>width;
    rectangle rect(height, width);
    area = rect.getArea(height, width);
    return area;
}