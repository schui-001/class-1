/**
 * @file     x.cpp
 *           
 *
 * @author   lili  <lilijreey@gmail.com>
 * @date     2015年11月14日 12时08分02秒
 *
 */
#include <stdlib.h>
class Integer {
 public:
  int i;
  Integer* This() { return this; }
 public:
  explicit Integer(int ll = 0) : i(ll) {}
};

//+

Integer& operator+(const Integer & o) {
  return o;
}

Integer operator-(const Integer & o) {
  return -o.i;
}

int main(int argc, char *argv[])
{
  int _i =4;
  +_i;
  -_i;

  Integer i(3);
  +i;
  -i;

  
  return 0;
}
