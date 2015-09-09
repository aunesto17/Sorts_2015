//
//  sorts.h
//  Sorts_2015
//
//  Created by Alexander Arturo Baylon Ibanez on 8/09/15.
//  Copyright (c) 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

#ifndef __Sorts_2015__sorts__
#define __Sorts_2015__sorts__

#include <stdio.h>
#include <random>
#include <algorithm>
#include <vector>
#include <iterator>
#include <functional>
#include <iostream>
#include <chrono>

using namespace std;
typedef int tipo;

//Funcion para crear inputs
vector<int> crear_vector_random(int);


//SORTS

void insertSort(vector<int> vec, tipo tam)
{
    for(int i=1;i<tam;i++)
        for(int j=i;j>0 && vec[j]< vec[j-1]; j--)
            swap(vec[j],vec[j-1]);
}

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

void menu();


#endif /* defined(__Sorts_2015__sorts__) */
