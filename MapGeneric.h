#include <iostream>
#include <vector>

#ifndef MAPGENERIC_H
#define MAPGENERIC_H

class MapGeneric{
public:
  int length = 0;
  virtual std::vector<int> map(std::vector<int> x) = 0;
};

#endif
