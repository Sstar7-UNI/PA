#include<iostream>
#include<vector>
#include<ctime>
#include <chrono>
#include"functii.h"

using namespace std;

int main()
{
    int n,*a;
    cout<<"Introdu nr de numere: ";
    cin>>n;
    a=new int[n];
    cout<<"Introdu numerele: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    auto start = std::chrono::high_resolution_clock::now();
    srand(time(0));
    BatcherSort(a,0,n,0);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    cout<<"Secventa sortata este: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<'\n';
    delete[] a;
    std::cout << "Timpul de executie: " << duration.count() << " milisecunde" << std::endl;
    return 0;
}

//5 milisec, tot 5, 6 milisec