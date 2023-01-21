#include<iostream>
using namespace std;
float calculatemoney(float,float);
int main()
{
    float inhertance,years,even,odd,total;
    cout<<"Enter the amount of money recieved: ";
    cin>>inhertance;
    cout<<"Enter year until which he has to live: ";
    cin>>years;
    total=calculatemoney(inhertance,years);
    if(inhertance>=total)
    {
        cout<<"Yes, he will have enough money and will have "<<inhertance-total<<"$ left";
    }
    else{
        cout<<"No, he won't have enough money he will need "<<total-inhertance<<"$ more";
    }

        
}
float calculatemoney(float inhertance,float years)
{
    float amount_used,total=0;
    float count=18;
    for(int x=1800;x<=years;x=x+1)
    {
        if(x%2!=0){
          count=count+1;
          amount_used=12000.00+50*(count);
          total=total+amount_used;
        }
        else{
           total=total+12000.00;
        }
    }
    return total;
}