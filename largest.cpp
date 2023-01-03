#include<iostream>

using namespace std;

int main()

{

        int n,l,a;

        cout<<"Enter the Number of Elements of the List:";

        cin>>n;

        cout<<"Enter the Elements";

        cin>>l;

        for(int i=1;i<n;i++)

        {

                cin>>a;

                if (a>l)

                        l=a;

        }

        cout<<"The Largest Number in the List is :"<<l<<"\n";

        return(0);

}

