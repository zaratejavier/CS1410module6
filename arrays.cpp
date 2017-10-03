#include <iostream>
using namespace std;
const int SIZE = 3;
int main()
{
    //define an array of 3integers
    int age[SIZE];
    //Take input
    for(int i =0; i < SIZE; i++)
    {
        cout<<"Enter your age: ";
        cin>>age[i];
    }
    for(int i =0; i < SIZE; i++)
    {
        cout<<"\nage of "<<i<<" is "<<age[i];
    }
    cout<<"Done"<<endl;

    return 0;
}