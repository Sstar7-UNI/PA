#include<iostream>
#include"functii.h"

void sortare(Obiect o[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)  
            if(o[i].r<o[j].r)
            {
                Obiect aux=o[i];
                o[i]=o[j];
                o[j]=aux;
            }
}

void rucsac1(double w[],double p[],int n,double M,double x[])
{
    double c=0;
    for(int i=0;i<n;i++)
        x[i]=0;
    Obiect *o=new Obiect[n];
    for(int i=0;i<n;i++)
    {
        o[i].w=w[i];
        o[i].p=p[i];
        o[i].r=o[i].p/o[i].w;
        o[i].index=i;
    }
    sortare(o,n);
    for(int i=0;i<n&&c<M;i++)
        if(c+o[i].w<=M)
        {
            c+=o[i].w;
            x[o[i].index]=1;
        }
        else
        {
            x[o[i].index]=(M-c)/o[i].w;
            c=M;
        }
}