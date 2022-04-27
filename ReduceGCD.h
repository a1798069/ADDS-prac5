#include "ReduceGeneric.h"

#ifndef REDUCETW_H
#define REDUCETW_H

class ReduceGCD : public ReduceGeneric {
public:
  int gcdd = 0;
  int reduce(std::vector<int> x);
  int gcd(int a, int b);
};

#endif
