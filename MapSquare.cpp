#include "MapSquare.h"

std::vector<int> MapSquare::map(std::vector<int> x){
    while (this->length < x.size()){
        int newNum = x[length]*x[length];
        x[length] = newNum;
        this->length++;
        return map(x);
    }
    this->length=0;
    return x;
}
