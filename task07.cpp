#include<iostream>
using namespace std;
float percentage(float);
void printpercentage(float);
int main()
{
    float no;
    cout<<"Enter the desired number: ";
    cin>>no;    
    float number=0;
    for(int x=0;x<no;x++)
    {
        cout<<x;
        cout<<"Enter a number: ";
        cin>>number;
        percentage(number);
    }
    printpercentage(no);
}
float p1=0.00,p2=0.00,p3=0.00,p4=0.00,p5=0.00;
float a=0,b=0,c=0,d=0,e=0;
float percentage(float number)
{
        if(number<200)
        a++;
        if(number>=200 && number<400)
        {
            b++;
        }
        if(number>=400 && number<600)
        {
            c++;
        }
        if(number>=600 && number<800)
        {
            d++;
        }
        if(number>=800 && number<=1000)
        {
            e++;
        }
        return 0;
    }    
void printpercentage(float no)
{
    if(a>0.00)
    {
        p1=(a/(no))*100.00;
    }    
    if(b>0.00)
    {
        p2=(b/no)*100.00;
    }
    if(c>0.00)
    {
        p3=(c/no)*100.00;
    }
    if(d>0.00)
    {
        p4=(d/no)*100.00;
    }
    if(e>0.00)
    {
        p5=(e/no)*100.00;
    }
    cout<<"P1 :"<<p1<<endl;
    cout<<"P2: "<<p2<<endl;
    cout<<"P3: "<<p3<<endl;
    cout<<"P4: "<<p4<<endl;
    cout<<"P5: "<<p5<<endl;
}
