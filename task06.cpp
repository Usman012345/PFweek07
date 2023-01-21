#include<iostream>
using namespace std;
int greatest_common_divisor(int,int);
int least_common_divisor(int,int,int);
int main()
{
        int num1,num2,least_divisor,greatest_divisor;
        cout<<"Enter the first number: ";
        cin>>num1;
        cout<<"Enter the second number: ";
        cin>>num2;
        greatest_divisor=greatest_common_divisor(num1,num2);
        least_divisor=least_common_divisor(num1,num2,greatest_divisor);
        cout<<"greatest_common_divisor is = "<<greatest_divisor <<" and least common divisor = "<<least_divisor;



}
int greatest_common_divisor(int num1,int num2)
{     
if(num1<num2)
{       int x=num1;
        int y,z;
        for(;num2>0;x--)
        {
              y=num1%num1;
              z=num2%num1;
              if(y==0 && z==0)
              return x;  
        }
}
else
{
        int x=num2;
        int y,z;
        for(;num1>0;x--)
        {
              y=num1%num2;
              z=num2%num2;
              if(y==0 && z==0)
              return x;  
        }
}

}
 

int least_common_divisor(int num1,int num2,int greatest_divisor)
{
        int divisor=(num1*num2)/greatest_divisor;
        return divisor;
}

