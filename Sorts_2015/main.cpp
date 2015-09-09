//
//  main.cpp
//  Sorts_2015
//
//  Created by Alexander Arturo Baylon Ibanez on 8/09/15.
//  Copyright (c) 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

#include "sorts.h"

int main(int argc, const char * argv[]) {
    auto random_data = crear_vector_random(1000);
    
    for (int i=0; i<1000; i++) {
        cout << "(" << i << ")" << " " << random_data[i] << endl;
    }
   
    return 0;
}
