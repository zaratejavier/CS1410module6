// File: funcArray.cpp
// Created by Javier Zarate on 10/3/17 for CS1410.
// Copyright (c) 2017 WSU
//

#include <iostream>
using namespace std;
const int SIZE = 3;

//Prototypes

//Arrays aer passed by reference
void AgeInput(int iage[SIZE]);
void ShowAge(int iage[SIZE]);

//void AgeInput(int age[]); // another notation

int main()
{
    //define an array of 3integers
    int age[SIZE];
    //Take input
    AgeInput(age);
    ShowAge(age);
    for (int i = 0; i < SIZE; i++) {
        cout << "\nage of " << i << " is " << age[i];
        cout << "\nage2 " << i << " is " << age2[i];
    }

    cout << "Done" << endl;

    return 0;
}

//Function definitions
void AgeInput(int iage[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter your age: ";
        cin >> iage[i];
    }
    return;
}
void ShowAge(int iage[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "\nage "<< i << " is "<<iage[i];

    }
}

