#include<iostream>
using namespace std;
int main()
{
     int a,b,c,r1,r2,d,k=0;
     cout<<"Enter the values of a b and c:";
     cin>>a;
     cin>>b;
     cin>>c;
     if(a!=0)
     {
          d=(b*b)-(4*a*c);
          if(d>0)
          {
              r1=(b*-1)+sqrt(d)/(2*a);
              r2=(b*-1)-sqrt(d)/(2*a);
              k=1;
          }
          else if(d==0)
          {
              r1=(b*-1)/(2*a);
              r2=r1;
              k=1;
          }
          else if(d<0)
          real =(b*-1)/(2*a);
          imaginary=(sqrt(d))/(2*a);
          cout<<real<<"+"<<imaginary<<"i"<<"\n";
          cout<<real<<"-"<<imaginary<<"i"<<"\n";
          k=0;
          if(k==1)
          cout<<r1<<" and "<<r2<<" are the roots to the equation";
          else 
          cout<<"Invalid Input ";
     }

}
 
        
          
              
     
