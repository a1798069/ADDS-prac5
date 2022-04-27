#include <iostream>
#include <vector>

#ifndef FILTERGENER_H
#define FILTERGENER_H

class FilterGeneric {
public:
  int length=0;
  std::vector<int> temp={};
  virtual std::vector<int> filter(std::vector<int> x)=0;
};

#endif
