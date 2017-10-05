// File: string1.cpp
// Created by Javier Zarate on 10/5/17 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include <string>   //c++ string class
using namespace std;

// Constants, struct, classes


// Prototypes


// Main Program Program

int main(void)
{
    string s1;  //define a string
    string s2 = "Waldo Weber";  //define and initialize string
    string s3("Waldo Weber University");  //define and initialize string

    s1 = s3;    //assingment
    cout<<"S1 "<<s1<<endl;

    s1 += s2;   //concatenation
    cout<<"2) S1 "<<s1<<endl;
    cout<<"S2 "<<s2<<endl;
    cout<<"S3 "<<s3<<endl;

    //swap values
    s1.swap(s2);
    cout<<"3) S1 "<<s1<<endl;
    cout<<"S2 "<<s2<<endl;
    cout<<"S3 "<<s3<<endl;


    return 0;

}

// Function Definitions