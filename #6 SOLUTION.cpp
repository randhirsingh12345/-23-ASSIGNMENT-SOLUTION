//Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three number (a,b and c) : ";
    float avg;
    cin>>a>>b>>c;
    avg=(a+b+c)/3;
    cout<<"Average of three number is : "<<avg;
    return 0;
}
