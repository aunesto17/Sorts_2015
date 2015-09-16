//
//  sorts.cpp
//  Sorts_2015
//
//  Created by Alexander Arturo Baylon Ibanez on 8/09/15.
//  Copyright (c) 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

#include "sorts.h"

vector<int> crear_vector_random(int n) {
    auto sem  = random_device()();
    auto gen  = mt19937(sem);
    auto dist = uniform_int_distribution<int>();
    auto v    = vector<int>(n);
    generate(begin(v), end(v), bind(dist, gen));
    return v;
}


void bubbleSort(vector<int> vec, int tam)
{
    for(int i = 0; i<tam-1; i++)
    {
        for(int j = 1 ; j<tam-i; j++ )
        {
            if(vec[j]< vec[j-1])
                swap(vec[j],vec[j-1]);
        }
    }
}

////

void selectSort(vector<int> vec, int tam)
{
    for(int i=0,min,j;i<tam-1;i++)
    {
        min = i;
        for(j=i+1;j<tam;j++)
        {
            if(vec[j]<vec[min])
                min = j;
        }
        swap(vec[i],vec[min]);
    }
}

////

void insertSort(vector<int> vec, tipo tam)
{
    for(int i=1;i<tam;i++)
        for(int j=i;j>0 && vec[j]< vec[j-1]; j--)
            swap(vec[j],vec[j-1]);
}

////

void mergeHelp(vector<int> vec, tipo left, tipo mid, tipo right)
{
    int tempArray[right-left+1];
    int pos=0,lpos = left,rpos = mid + 1;
    while(lpos <= mid && rpos <= right)
    {
        if(vec[lpos] < vec[rpos])
            tempArray[pos++] = vec[lpos++];
        else
            tempArray[pos++] = vec[rpos++];
    }
    while(lpos <= mid)  tempArray[pos++] = vec[lpos++];
    while(rpos <= right)tempArray[pos++] = vec[rpos++];
    for(int iter = 0;iter < pos; iter++)
        vec[iter+left] = tempArray[iter];
    return;
}

void mergeSort(vector<int> vec, tipo left, tipo right)
{
    int mid = (left+right)/2;
    if(left<right)
    {
        mergeSort(vec,left,mid);
        mergeSort(vec,mid+1,right);
        mergeHelp(vec,left,mid,right);
    }
}

////

void quickSort(vector<int> vec,tipo i,tipo f)
{
    if(i<f){
        int m=i-1;
        for(int e=i;e<f;e++)
        {
            if(vec[e]<vec[f])
                swap(vec[e], vec[m++ + 1]);
        }
        swap(vec[f],vec[m+1]);
        quickSort(vec, i, m);
        quickSort(vec, m+2, f);
    }
}

////

void heapSort(vector<int> & vec,int tam)
{
    construirMaxHeap(vec, tam);
    for (int i=tam; i>1;) {
        swap(vec[0], vec[i-1]);
        i--;
        maxHeapify(vec, 1, i);
    }
}


void maxHeapify(vector<int> & A, int pos,int tam)
{
    int mayor;
    int l = 2*pos,r = (2*pos)+1;
    if (l <= tam && A[l-1]>A[pos-1]) mayor = l;
    else mayor = pos;
    if (r <= tam && A[r-1]>A[mayor-1]) mayor = r;
    if (mayor != pos) {
        swap(A[pos-1],A[mayor-1]);
        maxHeapify(A, mayor, tam);
    }
}

void construirMaxHeap(vector<int> & A,int tam)
{
    for (int i=tam/2; i>0; i--){
        maxHeapify(A, i, tam);
    }
}

////

void menu()
{
    cout << "1. Insert Sort" << endl;
    cout << "2. Merge Sort" << endl;
    cout << "3. Quick Sort" << endl;
    cout << "4. Merge Insert Sort" << endl;
    cout << "Ingrese la opcion: ";
}