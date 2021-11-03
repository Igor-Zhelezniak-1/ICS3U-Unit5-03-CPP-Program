// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This is program

#include <iostream>
#include <string>

int MarkCalculator(std::string number) {
    int mark;
    if (number == "R") {
        mark = 25;
    } else if (number == "1-") {
        mark = 51;
    } else if (number == "1") {
        mark = 54;
    } else if (number == "1+") {
        mark = 58;
    } else if (number == "2-") {
        mark = 61;
    } else if (number == "2") {
        mark = 65;
    } else if (number == "2+") {
        mark = 68;
    } else if (number == "3-") {
        mark = 71;
    } else if (number == "3") {
        mark = 75;
    } else if (number == "3+") {
        mark = 78;
    } else if (number == "4-") {
        mark = 83;
    } else if (number == "4") {
        mark = 90;
    } else if (number == "4+") {
        mark = 98;
    } else {
        mark = -1;
    }
    return mark;
}


int main() {
    std::string numberFromUser;
    int calculatedMark;

    // input
    std::cout << "Enter the level you want converted to a percentage: ";
    std::cin >> numberFromUser;

    calculatedMark = MarkCalculator(numberFromUser);
    if (calculatedMark == -1) {
        std::cout << "-1. Invalid input" << std::endl;
    } else {
        std::cout << "Level " << numberFromUser
        << " has a middle percentage of " << calculatedMark << "%" << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
