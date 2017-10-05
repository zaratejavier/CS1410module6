// File: arraychar.cpp
// Created by Javier Zarate on 10/5/17 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>

using namespace std;

// Constants, struct, classes
const int MAX = 80;

// Prototypes


// Main Program Program

int main(void)
{
    char st[MAX];
    //cout<<"Enter your first name: ";
    //cin>> st;
    //cout<<"Hello "<<st<<endl;
    //let the compiler calculate the space
    //string constants
    char hi[]="Hello Weber State University Students";
    cout<<hi<<endl;
    //to support embedded blanks, use cin.get() function
    cout<<"Enter your full name: ";
    cin.get(st,MAX);
    cout<<"Hello "<<st<<endl;


    return 0;


}

// Function Definitions