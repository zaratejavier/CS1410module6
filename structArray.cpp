// File: structArray.cpp
// Created by Javier Zarate on 10/3/17 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;

// Constants, struct, classes
struct Part
{
    int modelNumber;
    int partNumber;
    float cost;
};

const int SIZE = 4;


// Prototypes
void PartInput(struct Part pi[SIZE]);

// Main Program Program

int main()
{
    Part p[SIZE];
    PartInput(p);   //take part input
    return 0;

}

// Function Definitions
void PartInput(struct Part pi[SIZE])
{
    for( int i = 0; i < SIZE; i++)
    {
        cout<<"Enter Model Number: ";
        cin>>pi[i].modelNumber;

        cout<<"Enter Part Number: ";
        cin>>pi[i].partNumber;

        cout<<"Enter Part Cost: ";
        cin>>pi[i].cost;
        cout<<endl;

    }
}