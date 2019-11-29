// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jaeyoon (Jay) Lee
// Created on: Nov 2019
// This program rounds a number by the user to the digit the user wants

#include <iostream>
#include <cmath>


void Rounding(float &decimal, int digit) {
    decimal = decimal * pow(10, digit);
    decimal = decimal + 0.5;
    decimal = int(decimal);
    decimal = decimal / pow(10, digit);
}

main() {
    // this function rounds a number by the user to the digit the user wants

    float decimal;
    int digit;

    // input
    std::cout << "Enter a number with decimals: ";
    std::cin >> decimal;
    std::cout << "Where do you want to round off (integer): ";
    std::cin >> digit;
    Rounding(decimal, digit);
    // output
    std::cout << "The rounded number is " << decimal;
}
