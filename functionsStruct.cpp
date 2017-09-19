// File: functionsStruct
// Created by Hugo Valle on 9/14/2017 for CS1410.
// Copyright (c) 2017 WSU

//


#include <iostream>

using namespace std;
// Task: Create a function that displays the
//  x and y coordinate of a point.

// Constants & Structures
struct Point
{
    float x;    //x value
    float y;    //y value
};

// Prototypes
/* The prototype must be defined after the stucts */
void DisplayPoint(struct Point p);

// Main Program Program
int main(void) {

    Point first = {2, 8};
    DisplayPoint(first);
    return 0;

}

// Function Definitions

void DisplayPoint(struct Point p)
{
    cout<<"x = "<<p.x <<endl;
    cout<<"y = "<<p.y <<endl;
}