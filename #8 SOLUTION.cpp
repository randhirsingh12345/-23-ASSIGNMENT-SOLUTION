//Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two number : ";
    cin>>a>>b;
    cout<<"Before swaping the number are \n" ;
    cout<<"a= ";
    cout<<a<<endl;
    cout<<"b= ";
    cout<<b<<endl;
    cout<<"After swaping the number are \n" ;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a= ";
    cout<<a<<endl;
    cout<<"b= ";
    cout<<b<<endl;
    return 0;

}
