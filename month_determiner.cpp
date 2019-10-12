// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: oct 2019
// This program determines the corresponding month to a number

#include <iostream>


int main() {
    // variables
    int month_number;

    // input
    std::cout << "What is your number: " << std::endl;
    std::cin >> month_number;

    // process
    switch (month_number) {
        // output
    case 1:
        std::cout << "January" << std::endl;
        break;
    case 2:
        std::cout << "February" << std::endl;
        break;
    case 3:
        std::cout << "March" << std::endl;
        break;
    case 4:
        std::cout << "April" << std::endl;
        break;
    case 5:
        std::cout << "May" << std::endl;
        break;
    case 6:
        std::cout << "June" << std::endl;
        break;
    case 7:
        std::cout << "July" << std::endl;
        break;
    case 8:
        std::cout << "August" << std::endl;
        break;
    case 9:
        std::cout << "September" << std::endl;
        break;
    case 10:
        std::cout << "October" << std::endl;
        break;
    case 11:
        std::cout << "November" << std::endl;
        break;
    case 12:
        std::cout << "December" << std::endl;
        break;
    default:
        std::cout << "Invalid Number" << std::endl;
    }
}
