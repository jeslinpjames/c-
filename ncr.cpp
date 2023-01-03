#include<iostream>

using namespace std;

class cl

{

        int main()

        {

                int n,r;

                cout<<"Enter the Values of n and r:";

                cin>>n;

                cin>>r;

                cl f1;

                int a=f1.fact(n);

                int b=f1.fact(r);

                int c=f1.fact(n-r);

                int s=a/(b*c);

                cout<<"Value of nCr="<<s;

                return(0);

        }

        public: int fact(int n)

        {

                int f=1;

                while(n>0)

                {

                        f=f*n;

                        n=n-1;

                }

                return (f);

        }

