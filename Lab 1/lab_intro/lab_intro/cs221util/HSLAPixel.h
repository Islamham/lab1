#ifndef CS221UTIL_PNG_H
#define CS221UTIL_PNG_H

namespace cs221util {
  class HSLAPixel {
  public:

  double h;
  double s;
  double l;
  double a;

  HSLAPixel();

  HSLAPixel(double hue, double sat, double lum);

  HSLAPixel(double hue, double sat, double lum, double alph);

  };
}

#endif