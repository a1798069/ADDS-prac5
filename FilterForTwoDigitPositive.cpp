#include "FilterForTwoDigitPositive.h"

std::vector<int> FilterForTwoDigitPositive::filter(std::vector<int> x){

    while (this->length < x.size()){
        if (x[length] > 9 && x[length] < 100){
            temp.push_back(x[length]);
        }
        this->length++;
        return filter(x);
    }
    this->length=0;
    return this->temp;
}
