#ifndef DELIMITER_H
#define DELIMITER_H

#include <istream>

namespace mezentsev
{
  struct DelimiterIO
  {
    char exp;
  };
  std::istream& operator>>(std::istream& input, DelimiterIO&& dest);
}
#endif
