// Copyright (c) 2026 Emmanuella Taiwo All rights reserved
// Created by: Emmanuella Taiwo
// Date: 9th Oct,2026
// This program asks the user
// to guess a number between 0 and 9,
// and checks if the guess is correct or not

#include <iostream>
#include <random>

int main() {
    // declare variables
    int someRandomNumber;
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0, 9]
    someRandomNumber = idist(rgen);

    // get the number from the user
    std::cout << "Enter a number between 0 and 9: ";
    int number;
    std::cin >> number;

    // check if the number is within the valid range
    if (number < 0 || number > 9) {
        std::cout << "Invalid input. Please enter a number between 0 and 9."
                  << std::endl;
    } else if (number == someRandomNumber) {
        // check if the number is correct
        std::cout << "you are correct! " << std::endl;
    } else {
        std::cout << "you are wrong. Try again!" << std::endl;
    }
    return 0;
}
