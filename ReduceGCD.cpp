#include "ReduceGCD.h"

int ReduceGCD::reduce(std::vector<int> x){

    while (this->length < x.size()-1){
         gcdd = gcd(x[x.size()-length-1], x[x.size()-length-2]);
         x[x.size()-length-2]=gcdd;
         length++;
    }

    this->length=0;
    return gcdd;
}


int ReduceGCD::gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
