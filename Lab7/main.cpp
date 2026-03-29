#include<iostream>
#include<climits>

using namespace std;

int rucsac2(int n,int M,int w[],int p[])
{
    if(n==0||M==0)return 0;
    if(M<0)return INT_MIN;
    return max(rucsac2(n-1,M,w,p),p[n-1]+rucsac2(n-1,M-w[n-1],w,p));
}

int main()
{
    int w[]={3,5,6};
    int p[]={10,30,20};
    int n=3,M=10;
    cout<<"Profit maxim: "<<rucsac2(n,M,w,p)<<'\n';
    return 0;
}