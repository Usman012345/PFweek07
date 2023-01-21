#include<iostream>
using namespace std;
int main()
{
        int number,digit;
        cout<<"Enter the number: ";
        cin>>number;
        cout<<"Enter the digit: ";
        cin>>digit;
        int x=0,y;
        while(number>0)
        {
            y=number%10;
            number=number/10;
            if(y==digit)
            {
                x=x+1;
            }

        }
        cout<<x;
}
