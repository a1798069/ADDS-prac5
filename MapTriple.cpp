#include "MapTriple.h"

std::vector<int> MapTriple::map(std::vector<int> x){
    while (this->length < x.size()){
        int newNum = x[length]*3;
        x[length] = newNum;
        this->length++;
        return map(x);
    }
    this->length=0;
    return x;
}
