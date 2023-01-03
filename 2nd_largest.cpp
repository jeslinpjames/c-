#include<iostream>

using namespace std;

int main()

{

        int n,l=0,l1=0,a;

        cout<<"Enter the Number of Elements in the List:";

        cin>>n;

        cout<<"Enter the Elements:";

        for(int i=0;i<n;i++)

        {

                cin>>a;

                if (a>l)

                {

                        l1=l;

                        l=a;

                }

                if((a>l1)&&(a<l))

                l1=a;

        }

        cout<<"The Second Largest Number="<<l1<<"\n";

        return(0);

}

