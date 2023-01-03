#include<iostream>

using namespace std;

int main()

{

        int n,s=0;

        cout<<"Enter the Number:";

        cin>>n;

        while(n!=0)

        {

                int r=n%10;

                s=s*10+r;

                n=(n-r)/10;

        }

        cout<<"The Reversed Number="<<s<<"\n";

        return(0);

}



