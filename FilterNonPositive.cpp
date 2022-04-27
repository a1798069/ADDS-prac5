#include "FilterNonPositive.h"

std::vector<int> FilterNonPositive::filter(std::vector<int> x){

    while (this->length < x.size()){
        if (x[length] < 0){
            temp.push_back(x[length]);
        }
        this->length++;
        return filter(x);
    }
    this->length=0;
    return this->temp;
}
