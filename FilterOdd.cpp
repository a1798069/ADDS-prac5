#include "FilterOdd.h"

std::vector<int> FilterOdd::filter(std::vector<int> x){

    while (this->length < x.size()){
        if (x[length]%2 == 1){
            temp.push_back(x[length]);
        }
        this->length++;
        return filter(x);
    }

    this->length=0;
    return this->temp;
}
