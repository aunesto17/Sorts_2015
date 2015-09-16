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

void bubbleSort(vector<int>,int);
//
void selectSort(vector<int>,int);
//
void insertSort(vector<int>,int);
//
void mergeHelp(vector<int>,int,int,int);
void mergeSort(vector<int>,int,int);
//
void quickSort(vector<int>,int,int);
//
void heapSort(vector<int>&,int);
void maxHeapify(vector<int>&,int,int);
void construirMaxHeap(vector<int>&,int);

//
void menu();


#endif /* defined(__Sorts_2015__sorts__) */
