// Copyright (c) 2022 Peter Sobowale All rights reserved.
//
// Created by: Peter Sobowale
// Date: Oct 2, 2022
// This program shows how local and global variables work
#include <cmath>
#include <iostream>

// global variable
int variableX = 250;

void localVariables() {
    // this shows what happens with local variables

    int variableX = 10;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: " << variableX << " + "
    << variableY << " = " << variableZ;
}

void globalVariables() {
    // this shows what happens with global variables
    ++variableX;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "\nGlobal variableX, variableY, variableZ: "
    << variableX << " + " << variableY << " = " << variableZ;
}

int main() {
    localVariables();
    globalVariables();
}
