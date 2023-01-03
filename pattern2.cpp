#include<iostream>

using namespace std;

int main()

{

        int l,a;

        cout<<"Enter the Number of Rows:";

        cin>>l;

        a=l*2;

        for(int i=0;i<=l;i++)

        {

                for(int j=a;j>0;j--)

                        cout<<" ";

                for(int k=0;k<(i*2)-1;k++)

                        cout<<"* ";

                a=a-2;

                cout<<"\n";

        }

}

