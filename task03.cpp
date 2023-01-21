#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the required number: ";
    cin>>num;
    int count=0;
    while(num>0)
    {
        num=num/10;
        count=count+1;
    }
    cout<<count;
}
