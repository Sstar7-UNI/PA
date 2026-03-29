#include<iostream>
#include<cstdlib>
#include<ctime>
#include"functii.h"

using namespace std;

void compara_si_schimba(int &x,int &y,int s)
{
    if(s==0&&x>y)swap(x,y);
    else if(s==1&&x<y)swap(x,y);
}

void BatcherSort(int *a,int i,int d,int s)
{
    if(d==2)compara_si_schimba(a[i],a[i+1],s);
    else
    {
        BatcherSort(a,i,d/2,0);
        BatcherSort(a,i+d/2,d/2,1);
        sortare_secventa_bitona(a,i,d,s);
    }
}

void sortare_secventa_bitona(int *a,int i,int d,int s)
{
    if(d==2)compara_si_schimba(a[i],a[i + 1],s);
    else
    {
        for(int j=0;j<d/2;j++)compara_si_schimba(a[i+j],a[i+j+d/2],s);
        sortare_secventa_bitona(a,i,d/2,s);
        sortare_secventa_bitona(a,i+d/2,d/2,s);
    }
}

void genereazaCrescator(int *a,int n)
{
    for(int i=0;i<n;i++)
        a[i]=i+1;
}

void genereazaDescrescator(int *a,int n)
{
    for(int i=0;i<n;i++)
        a[i]=n-i;
}

void genereazaAleator(int *a,int n)
{
    for(int i=0;i<n;i++)
        a[i]=rand()%n;
}

