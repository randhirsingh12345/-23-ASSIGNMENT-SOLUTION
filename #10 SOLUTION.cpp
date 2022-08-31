//Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;
int main()
{
    int a[10],i,sum=0;
    cout<<"Enter the array element : ";
    for(i=0;i<10;i++)
        cin>>a[i];
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    cout <<"Sum of array element are : ";
    cout << sum;
    return 0;
}
