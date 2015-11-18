
#include <iostream>
#include <stdio.h>
class Integer {
 public:
  int i;
  Integer* This() { return this; }
 public:
  Integer(int ll = 0) : i(ll) {
    printf("Integer xx\n");
  }

  Integer(const Integer & o) {
    this->i = o.i;
    printf("Integer(const Integer)\n");
  }

  void show() const {
    printf("show() :%d %p\n", i, this);
  }
};

//+

const Integer& operator+(const Integer & o) {
  std::cout << __func__ << '\n';
  return o;
}

Integer operator-(const Integer & o) {
  std::cout << __func__ << '\n';
  return -o.i;

  //return operator-(o.i);
  //return x;
  //return Integer(-o.i);
  return -o.i;
}

Integer operator++(Integer &o) {
  ++o.i;
  return Integer(o.i);
}

Integer operator++(Integer &o, int) {
  int t = o.i;
  ++o.i;
  return t;
}

int inc(int f) {
  return inc(f++);
}

int main(int argc, char *argv[])
{
  //int _i =4;
  //int x = ++_i;//5
  //int y = _i++;// 6
//  +_i;
  //int x = -_i;


  Integer i(3);
  //Integer(3);

  operator+(i); //+i
  +i; // operator+(i);
  printf("+i\n");
  (-i).show();

  i.show();
  (++i).show();
  int xxxx=0;
  (i++).show();
  i.show();
  

  return 0;
}
