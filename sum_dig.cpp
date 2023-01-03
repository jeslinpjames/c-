#include<iostream>

using namespace std;

int main()

{

        int n,s=0;

        cout<<"Enter the Number:";

        cin>>n;

        if(n<0)

                n=n*-1;

        while(n>0)

        {

                int r=n%10;

                s=s+r;

                n=(n-r)/10;

        }

        cout<<"The Sum of Digits="<<s<<"\n";

        return(0); 
 
}

