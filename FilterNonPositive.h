#include "FilterGeneric.h"

class FilterNonPositive : public FilterGeneric {
  public:
  std::vector<int> filter(std::vector<int> x);
};
