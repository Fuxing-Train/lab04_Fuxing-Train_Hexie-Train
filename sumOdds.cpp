#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int sumOdds(int a[], int size) {
    int SumOfOdds=0;
    for(int i=0; i<size; i++){
        if (isOdd(a[i])==true){
            SumOfOdds+=a[i];
        }
    }
    return SumOfOdds;
}
