#include <iostream>
#include <vector>

#ifndef REDUCE_H
#define REDUCE_H

class ReduceGeneric {
public:
  int length=0;
  int min = 100;
  virtual int reduce(std::vector<int> x)=0;
};

#endif
