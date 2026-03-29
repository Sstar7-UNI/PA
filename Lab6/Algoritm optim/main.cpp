#include<iostream>
#include"functii.h"

using namespace std;

int main()
{
    int n=3;
    double M=3;
    double w[]={2.0,1.0,2.5},p[]={2.0,4.0,5.0},x[3];
    rucsac1(w,p,n,M,x);
    double profitTotal=0;
    double greutateTotala=0;
    for(int i=0;i<n;i++)
    {
        profitTotal+=x[i]*p[i];
        greutateTotala+=x[i]*w[i];
    }
    cout<<"\nGreutate totala= "<<greutateTotala<<'\n';
    cout<<"Profit total= "<<profitTotal<<'\n';
    cout<<"Procentul din fiecare cantitate:\n";
    for(int i=0;i<3;i++)
        cout<<x[i]<<" ";
    cout<<'\n';
    return 0;
}