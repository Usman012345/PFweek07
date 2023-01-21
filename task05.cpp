#include<iostream>
using namespace std;
int sum1(int);
int main()
{
        int sum,number;
        cout<<"Enter the number: ";
        cin>>number;
        sum=sum1(number);
        cout<<sum;
}
int sum1(int number)
{
       int sum=0,y;
        while(number>0)
        {
            y=number%10;
            number=number/10;
            sum=sum+y;

        }
        return sum;
}
