#include "ReduceMinimum.h"

int ReduceMinimum::reduce(std::vector<int> x){

    while (this->length < x.size()){
        if (x[length] < min){
            min = x[length];
        }
        this->length++;
        return reduce(x);
    }

    this->length=0;
    return min;
}
