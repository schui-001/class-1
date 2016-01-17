
#include <stdio.h>
struct A {
  virtual void show() const {printf("A::show\n");}
  void xx() {printf("A::xx\n");}
};

struct B : A{
  virtual void show() const final override {printf("B::show\n");}
  void xx() {printf("B::xx\n");}
};

struct C :B {
};

struct XZ {
  virtual void area() const =0;
};

//Abstract Classess
//A class with one or more pure virtual 
//functions is an abstract class

//An abstract class cannot 
//be create objects using a constructor
//
//Abstract classes don’t usually have constructors

int main(int argc, char *argv[])
{
  //XZ xz;
  //xz.area();
  XZ *pz;
  B b;
  C c;
  A* a = &b;
  a->show();
  a = &c;
  a->show();
  //b.A::xx();
  //b.A::show();

  //int override =3;
  //printf("%d\n", override);
  return 0;
}
