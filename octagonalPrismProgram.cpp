// Copyright (c) 2022 Katie G All rights reserved.
//
// Created by: Katie G
// Date: October 3rd, 2022
// This program calculates the surface area
// and volume of a right regular octagonal prism
// and displays the result back to the user,
// rounded to 2 decimal places, and formats
// the result in the user's choice of units.
#include <iostream>
#include <iomanip>
#include <cmath>

// this function calculates the surface area and
// volume of a right regular octagonal prism with
// user input, rounding and custom unit selection.
int main() {
    // defining variables of base edge, units, height,
    // surface area, and volume.
    float baseEdge, height, surfaceArea, unitsFloat, volume;
    // casting the float variable units to a string.
    std::string units = std::to_string(unitsFloat);

    // introduction text that explains what the program does.
    std::cout << "This program will calculate the surface area ";
    std::cout << "and the volume of a right regular octagonal prism!\n";
    std::cout << "Simply input your base edge value, height value ";
    std::cout << "and preferred units, and the program will ";
    std::cout << "do the rest!\n";
    std::cout << "Rejoice.\n";
    std::cout << "" << std::endl;

    // getting user input for height, baseEdge and units.
    std::cout << "What is the height of your right regular octagonal prism?: ";
    std::cin >> height;
    std::cout << "What is the base edge";
    std::cout << "of your right regular octagonal prism?: ";
    std::cin >> baseEdge;
    std::cout << "What is the units you'd like to calculate in?: ";
    std::cin >> units;

    // doing the calculations to determine the volume and
    // surface area of the right regular octagonal prims with
    // the values the user inputted.
    surfaceArea = 8 * baseEdge * height + 4 * (1 + sqrt(2)) * pow(baseEdge, 2);
    volume = 2 * (1 + sqrt(2)) * pow(baseEdge, 2) * height;

    // displaying the results of the surface area
    // and volume calculations  back to the user,
    // with their choice of units, and with
    // the answer rounded to 2 decimal places.
    std::cout << "\n";
    std::cout << "This program has calculated the surface area and volume ";
    std::cout << "of the right regular octagonal prism with the dimensions ";
    std::cout << "you supplied, in the units you supplied.\n";
    std::cout << "Surface Area = ";
    std::cout << std::fixed << std::setprecision(2) << std::setfill('0')
    << surfaceArea << units << "^2\n";
    std::cout << "Volume = ";
    std::cout << std::fixed << std::setprecision(2) << std::setfill('0')
    << volume << units << "^3\n";
}
