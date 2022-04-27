#include "MapAbsoluteValue.h"

std::vector<int> MapAbsoluteValue::map(std::vector<int> x){
    while (this->length < x.size()){
        int newNum = x[length];
        if (newNum < 0 ) {
            newNum = newNum * -1;
        }
        x[length] = newNum;
        this->length++;
        return map(x);
    }
    this->length=0;
    return x;
}
