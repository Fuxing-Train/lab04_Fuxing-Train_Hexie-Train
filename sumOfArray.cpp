#include "arrayFuncs.h"

int sumOfArray(int a[], int size) {
    int SumOfArrays=0;
    for(int i=0; i<size; i++){
            SumOfArrays+=a[i];
    }
    return SumOfArrays;
    
  
}
