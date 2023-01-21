#include<iostream>
using namespace std;
void table(int);
int main()
{
    int number;
    cout<<"Enter the required number: ";
    cin>> number;
    table(number);

}
void table(int number)
{
    for(int count=1;count<=10;count++)
    {
        cout<< number<<" * "<< count <<" = " <<number*count<<endl;
    }
}
