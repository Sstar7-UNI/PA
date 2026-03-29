#include<iostream>
#include<vector>
#include<ctime>
#include<chrono>
#include"functii.h"

using namespace std;

int main()
{
    int n,*a;
    cout<<"Introdu nr de numere: ";
    cin>>n;
    srand(time(0));
    a=new int[n];
    genereazaCrescator(a,n);
    auto start1=std::chrono::high_resolution_clock::now();
    BatcherSort(a,0,n,0);
    auto end1=std::chrono::high_resolution_clock::now();
    auto duration1=std::chrono::duration_cast<std::chrono::milliseconds>(end1 - start1);
    cout<<"Timpul de executie elemente sortate crescator: "<<duration1.count()<<" milisecunde\n";
    genereazaDescrescator(a,n);
    auto start2=std::chrono::high_resolution_clock::now();
    BatcherSort(a,0,n,0);
    auto end2=std::chrono::high_resolution_clock::now();
    auto duration2=std::chrono::duration_cast<std::chrono::milliseconds>(end2 - start2);
    cout<<"Timpul de executie elemente sortate descrescator: "<<duration2.count()<<" milisecunde\n";
    genereazaAleator(a,n);
    auto start3=std::chrono::high_resolution_clock::now();
    BatcherSort(a,0,n,0);
    auto end3=std::chrono::high_resolution_clock::now();
    auto duration3=std::chrono::duration_cast<std::chrono::milliseconds>(end3 - start3);
    cout<<"Timpul de executie elemente aleatorii: "<<duration3.count()<<" milisecunde\n";
    delete[] a;
    return 0;
}

/*
Introdu nr de numere: 16384
Timpul de executie elemente sortate crescator: 6 milisecunde
Timpul de executie elemente sortate descrescator: 6 milisecunde
Timpul de executie elemente aleatorii: 5 milisecunde
*/