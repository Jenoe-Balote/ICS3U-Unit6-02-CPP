// Copyright (c) Jenoe Balote All rights reserved
//
// Created by: Jenoe Balote
// Created on: June 2021
// This program determines the largets of 10 numbers

#include <iostream>
#include <random>
#include <array>


template<size_t N>
int DetermineLargest(std::array<int, N> numbers) {
    // This function determines the largest number

    int largest;

    for (
        int loopCounter = 0;
        loopCounter < numbers.size();
        loopCounter++
    ) {
        if (loopCounter == 0) {
            largest = numbers[loopCounter];
        } else {
            if (numbers[loopCounter] > largest) {
                largest = numbers[loopCounter];
            }
        }
    }

    return largest;
}


main() {

    // Declaring variables
    std::array<int, 10> numbers;
    int generatedNumber;
    int largest;

    // process and output
    std::cout << "Generating numbers..." << std::endl;
    std::cout << "" << std::endl;
    for (
        int loopCounter = 0;
        loopCounter < numbers.size();
        loopCounter++
    ) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());  // mersenne_twister
        std::uniform_int_distribution<int> idist(1, 100);
        generatedNumber = idist(rgen);
        numbers[loopCounter] = generatedNumber;
    }
    for (
        int loopCounter = 0;
        loopCounter < numbers.size();
        loopCounter++
    ) {
        std::cout << "Random number " << loopCounter + 1 << " is "
        << numbers[loopCounter] << "." << std::endl;
    }
    // call function(s)
    largest = DetermineLargest(numbers);
    std::cout << "\nThe largest number is " << largest << "."
    << std::endl;
    std::cout << "\nDone" << std::endl;
}
