#include "FilterGeneric.h"

class FilterOdd : public FilterGeneric {
  public:
  std::vector<int> filter(std::vector<int> x);
};
