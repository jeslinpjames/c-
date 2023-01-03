#include<iostream>

using namespace std;

int main()

{

        int a,f=0;

        cout<<"Enter the Number:";

        cin>>a;

        for(int i=2;i<a/2;i++)

        {

                if(a%i==0)

                        f++;

        }

        if(f!=0)

                cout<<"The Number is Not Prime"<<"\n";

        else

                cout<<"The Number is Prime"<<"\n";

        return(0);

}

