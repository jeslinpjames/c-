#include<iostream>

using namespace std;

int main()

{

        int a,n,e=0,o=0;

        cout<<"Enter the Number of Elements in the List:";

        cin>>n;

        cout<<"Enter the Numbers:";

        for(int i=0;i<n;i++)

        {

                cin>>a;

                if(a%2==0)

                        e++;

                else

                        o++;

        }

        cout<<"The Number of Even Numbers:"<<e<<"\n";

        cout<<"The Number of Odd Numbers:"<<o<<"\n";

        return(0);

}

