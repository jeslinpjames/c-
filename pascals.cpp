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


        int a=fact(n);
        int b=fact(r);
        int c=fact(n-r);
        int s=a/(b*c);

        return(s);
}
int main()
{
        int l;
        cout<<"Enter the number of rows:”;
        k
