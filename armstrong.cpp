#include<iostream>

#include<cmath>

using namespace std;

int main()

{

        int n,s=0,a,b=0;

        cout<<"Enter The Number:";

        cin>>n;

        a=n;

        while(a>0)

        {

                int r=a%10;

                b++;

                a=(a-r)/10;

        }

        a=n;

        while(a>0)

        {

                int r=a%10;

                int k=pow(r,b);

                s=s+k;

                a=(a-r)/10;

        }

        if(s==n)

                cout<<"The Number is Armstrong"<<"\n";

        else

                cout<<"The Number is not Armstrong"<<"\n";

        return(0);

}

