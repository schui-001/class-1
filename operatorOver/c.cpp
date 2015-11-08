
#include <cstdio>
class Integer {
 private:
  long i;

 public:
  Integer* This() { return this; }
  Integer(long ll = 0) : i(ll) {}
  void show() const {
    printf("%ld\n", i);
  }

  friend Integer operator-(const Integer& );
  friend Integer& operator++(Integer& a);
  friend Integer operator++(Integer& a, int);
  friend Integer operator+(const Integer& a, const Integer &b);

};
const Integer& operator +(const Integer& a) {
  return a;
}
Integer operator-(const Integer& a) {
  return Integer(-a.i);
}
Integer& operator++(Integer& a) {
  a.i++;
  return a;
}

Integer operator++(Integer& a, int) {
  Integer t(a);
  printf("operator++\n");
  a++;
  return t;
}

Integer operator+(const Integer& a, const Integer &b) {
  return Integer(a.i + b.i);
}


int main(int argc, char *argv[])
{
  Integer a(3);
  Integer b(4);

  (+a).show();


  ++a;
  a.show();
  (a++).show();
  a.show();

  b.show();
  (a+b).show();

  //+(a,b);
  //Integer x = a + b;

  return 0;
}
