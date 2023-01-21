#include<iostream>
using namespace std;
float calculatemoney(int,float,int);
int main()
{
    int odd,even,age=0,toys;
    float money,sold,price;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter the price for which the toys were sold: ";
    cin>>sold;
    cout<<"Enter price of washing machine: ";
    cin>>price;
    if((age)%2==0)
    {
        even=(age)/2;
        odd=(age)/2;
    }
    else
    {
        even=(age)/2;
        odd=(age)/2+1;
    }
    toys=odd;
    money=calculatemoney(even,sold,toys);
    if(money>=price)
    {
        cout<<"yes the money is enough we will have "<<money-price <<"$ remaining";
    }
    else{
        cout<<"The money is not enough we need "<<price-money<<"$";
    }


}
float calculatemoney(int even,float sold,int toys)
{

    float money=0;
    int total=0;
    for(int x=1;x<=even;x++)
    {
        money=(x*10);
        total=total+money;    }
    total=total+(sold*toys)-even;
    return total;
}
