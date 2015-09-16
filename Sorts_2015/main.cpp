//
//  main.cpp
//  Sorts_2015
//
//  Created by Alexander Arturo Baylon Ibanez on 8/09/15.
//  Copyright (c) 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

#include "sorts.h"

int main(int argc, const char * argv[]) {
    auto random_data = crear_vector_random(100);
    
    for (int i=0; i<100; i++) {
        cout << "(" << i << ")" << " " << random_data[i] << endl;
    }
    
    vector<int> D = {4,1,3,2,16,9,10,14,8,7};
    //construirMaxHeap(D, 10);
    
    cout << "HEAP SORT" << endl;
    heapSort(random_data, 100);
    for (int i=0; i<100; i++) {
        cout << "(" << i << ")" << " " << random_data[i] << endl;
    }
    
   
    return 0;
}
