#include<iostream>

using namespace std;
int fact(int n)
{
        int f=1;
        while(n>0)
        {
                f=f*n;
                n=n-1;
        }
        return (f);
}
int main()
{
        int n,r,s;
        cout<<"Enter the Values of n and r:";
        cin>>n;
        cin>>r;
        if(n==0)
                s=0;
        if(n>=r)
        {
                int a=fact(n);
                int b=fact(r);
                int c=fact(n-r);
                s=a/(b*c);
                cout<<"Value of nCr="<<s;
         }
        else cout<<"Invalid Input";
        return(0);
}


