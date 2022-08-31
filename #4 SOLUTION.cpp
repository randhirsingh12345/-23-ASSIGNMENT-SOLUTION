//Write a C++ program to calculate the area of a circle
#include<iostream>
using namespace std;
int main()
{
    int r;
    float area;
    cout<< "Enter redius of circle : ";
    cin>>r;
    area=3.14*r*r;
    cout<< "Area of circle is "<<area;
    return 0;
}
