// Copyright (c) 2020 Rohnin Barrette All rights reserved.
//
// Created by: Rohnin Barrette
// Created on: Sep 2021
// This program factorial of an inputted positive integer

#include <iostream>

int main() {
    // This program factorial of an inputted positive integer int
    // positive_number;
    int loop_counter = 1;
    int product = 1;  // max size factorial is 12
    int max_factorial = 12;
    std::string positive_string;

    // input
    std::cout << "" << std::endl;
    std::cout << "Enter a POSITIVE integer: ";
    std::cin >> positive_string;
    std::cout << "" << std::endl;

    // process and output
    try {
        positive_number = std::stoi(positive_string);
        if (positive_number > 0) {
            if (positive_number > max_factorial) {
                std::cout << "Input is too big, enter a smaller number."
                    << std::endl;
            } else {
                do {
                    product = product * loop_counter;
                    loop_counter = loop_counter + 1;
                }   while (loop_counter <= positive_number);
                std::cout << positive_number << "! =" << product << std::endl;
            }
        } else {
            std::cout << "That is not a positive integer";
        }
    } catch (std::invalid_argument) {
        std::cout << positive_string << " Is not a valid input";
        std::cout << "" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
