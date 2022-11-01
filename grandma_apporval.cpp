// Copyright (c) 2022 Lucas LeBlanc All rights reserved

// Created by: Lucas LeBlanc
// Created on: Oct 2022
// This program is tells a user if they are well suited for my grandchild

#include <iostream>

int main() {
    // This function determines if the user is a good fit for my grandchild

    int user_age;
    std::string user_age_string;

    // Input
    std::cout << "Enter your age: ";
    std::cin >> user_age_string;
    std::cout << "" << std::endl;

    // Process and Output
    try {
        user_age = std::stoi(user_age_string);

        if (user_age > 40) {
            std::cout << "You are too old for my grandchild." << std::endl;
        } else if (user_age < 25) {
            std::cout << "You are too young for my grandchild." << std::endl;
        } else {
            std::cout << "You are right for my grandchild."
                      << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid input." << std::endl;
    }

    std::cout << ("\nDone.") << std::endl;
}
