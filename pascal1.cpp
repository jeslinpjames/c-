#include<iostream>

using namespace std;

int fact(int n)

{

        int f=1;

        while(n>0)

        {

                f=f*n;

                n=n-1;

        }

        return (f);

}

int ncr(int n, int r)

{

        if(n==0)

                return 0;

        int a=fact(n);

        int b=fact(r);

        int c=fact(n-r);

        int s=a/(b*c);

        return(s);

}

int main()

{

        int l;

        cout<<"Enter the number of rows:" ;

        cin>>l;
        int z = l;

        for(int i =0;i<l;i++)

        {

                for(int k=z;k>0;k--)
                  cout<<" ";
                
                for(int j=0;j<=i;j++)

                {

                        int s= ncr(i,j);

                        cout<<s<<" ";

                }

                cout<<"\n";
                z=z-1;

        }

}
