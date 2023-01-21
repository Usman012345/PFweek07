#include<iostream>
using namespace std;
int main()
{
    int num1,num2,length;
    cout<<"Enter the required length: ";
    cin>> length;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<num1 <<" , "<<num2<<" , ";
    for(int x=0;x<=length-2;x++)
    {
        int sum=0;
        sum=num1+num2;
         
        cout<<sum<<" , ";
        num1=num2;
        num2=sum;
    }
}
