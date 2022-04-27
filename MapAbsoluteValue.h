#include "MapGeneric.h"

#ifndef MAPABS_H
#define MAPABS_H

class MapAbsoluteValue : public MapGeneric{
public:
  std::vector<int> map(std::vector<int> x);
};

#endif
