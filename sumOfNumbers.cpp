// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Nov. 3, 2023
// This program gets a number from the user and will use a
// while loop to calculate the total sum from 0 to the inputted number.

#include <iostream>
#include <string>

int main() {

    // introduce program to user
    std::cout << "This program gets a number from the user and will ";
    std::cout << "calculate the total sum from 0 to the inputted number.\n";

    // declare variables
    int userNumInt;
    float userFloat;
    int sum = 0;
    int counter = 0;
    std::string userNumStr;

    // get user input
    std::cout << "Please enter a positive integer: ";
    std::cin >> userNumStr;

    // try converting string input to integer
    try {
        userNumInt = std::stoi(userNumStr);

        // cast user input string to a float
        userFloat = std::stof(userNumStr);

        if (userNumInt != userFloat) {
            // tell user they cannot enter a decimal
            std::cout << "" << userFloat << " is not a positive integer\n";


        // check if user input is a negative
        } else if (userNumInt <= 0) {

            // tell user if they inputted negative number
            std::cout << "" << userNumInt << " is an invalid input ";
            std::cout << "it must be a positive integer\n ";
        } else {

            // loop following code while counter is less than or equal to user input
            while (counter <= userNumInt) {

                // add counter to sum to create new sum
                sum = sum + counter;

                // add 1 to the counter each time
                counter = counter + 1;

                // display amount of times program loops
                std::cout << "Tracing " << counter;
                std::cout << " times through the loop.\n";
            }

            // tell user the total sum
            std::cout << "The sum of the numbers from 0-";
            std::cout << userNumInt << " is " << sum << "\n";

            // catch invalid inputs
        }
    } catch (std::invalid_argument) {
        std::cout << "" << userNumStr << " is not a positive integer.\n";
    }
}
