#include<iostream>
using namespace std;
int main()
{
    int year,k=0;
    cout<<"Enter the Year:";
    cin>>year;
    if(year%400==0)
        k=1;
    else if(year%100==0)
        k=0;
    else if(k%4==0)
        k=1;
    if(k==1)
        cout<<"The year is a Leap Year."<<"\n";
        else 
            cout<<"The year is not a Leap Year."<<"\n";
}
    

