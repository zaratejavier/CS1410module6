#include <iostream>
using namespace std;
const int SIZE = 3;
int main()
{
    //define an array of 3integers
    int age[SIZE];
    //declare and initialize an array of three members
    int age2[SIZE]= {99,21,33};
    //Take input
    for(int i =0; i < SIZE; i++)
    {
        cout<<"Enter your age: ";
        cin>>age[i];
    }
    for(int i =0; i < SIZE; i++)
    {
        cout<<"\nage of "<<i<<" is "<<age[i];
        cout<<"\nage2 "<<i<<" is "<<age2[i];
    }

    cout<<"Done"<<endl;

    return 0;
}