#include "FilterGeneric.h"

class FilterForTwoDigitPositive : public FilterGeneric {
public:
  std::vector<int> filter(std::vector<int> x);
};
