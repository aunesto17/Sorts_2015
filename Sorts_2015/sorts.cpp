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

void menu()
{
    cout << "1. Insert Sort" << endl;
    cout << "2. Merge Sort" << endl;
    cout << "3. Quick Sort" << endl;
    cout << "4. Merge Insert Sort" << endl;
    cout << "Ingrese la opcion: ";
}