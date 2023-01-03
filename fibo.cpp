#include<iostream>

using namespace std;

int main()

{

        int a=0,b=1,c=0,l;

        cout<<"Enter the Limit:";

        cin>>l;

        if(l<=0)

                cout<<"Invalid Input";

        if (l>0)

                cout<<a<<" ";

        if(l>1)

                cout<<b<<" ";

        for(int i=2;i<l;i++)

        {

                c=a+b;

                cout<<c<<" ";

                a=b;b=c;

        }

        return(0);

}

