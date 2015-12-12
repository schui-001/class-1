#include <stdio.h>
class BirdBase {
  int i;
  double b;
public: virtual void oo() { printf("BirdBase::fly()\n");}
public: virtual void fly() { printf("BirdBase::fly()\n");}
        void show() {printf("BirdBase::show()\n");}
};
class Duck :public BirdBase {
 public: virtual void fly() { printf("Duck::fly()\n");}
        void show() {printf("Duck::show()\n");}
};
class Chick :public BirdBase {
 public: virtual void fly() { printf("Chick::fly()\n");}
        void show() {printf("Chick::show()\n");}
};
struct X { 
  virtual void xx() {printf("O::xx\n");}
  virtual void nn() {printf("O::nn\n");}
};
struct Y : X { virtual void xx() {printf("Y::xx\n");} };
struct Z : X {} ;

void fly(BirdBase *b) { b->fly(); }
int main(int argc, char *argv[]) {
  Duck d; Chick c; 
  Y y; Z z;
  BirdBase *b;
  b = (BirdBase*)&y; b->fly();
  b = (BirdBase*)&z; b->fly();


  //d.fly();
  //b = &d; 
  //b->fly();
  //b->show(); 
  //b = &c;
  //b->fly();
  //b->show();
}
