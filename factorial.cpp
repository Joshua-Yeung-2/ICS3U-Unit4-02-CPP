// copyright (c) 2020 Joshua Yeung All rights reserved

// Created by: Joshua Yeung
// Created on October 2021
// This program is to test the do while loop

#include <iostream>
#include <string>

int main() {
    // This function is to test do while loop
    int loopCounter = 1;
    int sumNumber = 1;
    std::string userInputStr;
    int userInput;

    // input
    std::cout << "Enter a positive integer here: ";
    std::cin >> userInputStr;
    std::cout << "" << std::endl;

    try {
        userInput = std::stoi(userInputStr);
        do {
            sumNumber = sumNumber * loopCounter;
            std::cout << "The factorial of all positive number " <<
            userInput << " is " << sumNumber << std::endl;
            loopCounter = loopCounter + 1;
        } while (loopCounter <= userInput);
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer" << std::endl;
    }

    std::cout << "\nDone" << std::endl;
}
