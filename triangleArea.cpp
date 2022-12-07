// Copyright (c) 2022 Kyanh Pham
//
// Created by: Kyanh Pham
// Created on: Nov 2022
// This program finds the area of a triangle

#include <iostream>


float calculateAreaTriangle(int base, int height) {
    // This function finds the volume of the cylinder
    float area;


    if (base <= 0 || height <= 0) {
        area = -1;
        return area;
    } else {
        area = (base * height) / 2;
        return area;
    }
}

int main() {
    // This function gets the base and height from the user
    std::string base_from_user;
    std::string height_from_user;
    int base;
    int height;
    float area;

    // Input
    std::cout << "Enter the base length of the triangle (cm): ";
    std::cin >> base_from_user;
    std::cout << "" << std::endl;
    std::cout << "Enter the height of the triangle (cm): ";
    std::cin >> height_from_user;
    std::cout << "" << std::endl;

    try {
        base = std::stoi(base_from_user);
        height = std::stoi(height_from_user);
        // Call function
        area = calculateAreaTriangle(base, height);
        std::cout << "The area of a triangle with a base length of "
                  << base << " cm and the height of " << height << " cm is "
                  << area << " cm³.";
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
