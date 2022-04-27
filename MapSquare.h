#include "MapGeneric.h"

#ifndef MAPS_H
#define MAPS_H

class MapSquare : public MapGeneric {
public:
  std::vector<int> map(std::vector<int> x);
};

#endif
