// File: arrayAsClassMember.cpp
// Created by Javier Zarate on 10/3/17 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
using namespace std;

// Constants, struct, classes
const int MAX = 10;

class Stack
{ private:
    int st[MAX];  //Stack: array of integers
    int top;      //number of top of stack
public:
    Stack()      //constructor
    {
        top = -1;
    }
    void push (int var)     // put member on the stack
    {
        st[++top]= var;
    }
    int pop()              // take number of stack
    {
        return st[top--];
    }

};

// Prototypes


// Main Program Program

int main(void)
{
    Stack s1;

    s1.push(11);
    s1.push(44);
    cout<<" 1 "<<s1.pop() << endl;  //44
    cout<<" 2 "<<s1.pop() << endl;  //11


    return 0;

}

// Function Definitions