// File: multiDarray.cpp
// Created by Javier Zarate on 10/3/17 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;

// Constants, struct, classes
const int ROWS = 3;
const int COL = 3;


// Prototypes
void AgeInput(int iage[ROWS][COL]);
//void AgeInput(int iage[][COL]);




// Main Program Program

int main(void)
{
    int age[ROWS][COL];
    int age2 [ROWS][COL]= {{1, 2, 3},
                           { 21, 22, 23},
                           {31, 32, 33}};
    AgeInput(age);

    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j<COL; j++)
        {
            cout << "Enter your age ";
            cin >> age[i][j];
        }
        cout<<endl;
    }
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j<COL; j++)
        {
            cout << "\tAGE IS "<<age[i][j];
            cout << "\tAGE2 IS "<<age2[i][j];

        }
        cout<<endl;
    }
    return 0;

}

// Function Definitions
void AgeInput(int iage[ROWS][COL])
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j<COL; j++)
        {
            cout << "Enter your age ";
            cin >> age[i][j];
        }
        cout<<endl;
    }
}
