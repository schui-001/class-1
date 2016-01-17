
#include <stdio.h>
class BirdBase {
protected: 
  int id=0;
public:
  BirdBase(int id):id(id) {printf("BirdBase::BirdBase\n");}

public:
  virtual void fly() const =0;
};
class Duck :public BirdBase {
 public:
  using BirdBase::BirdBase;
  //Duck(int i) :BirdBase(i){}
  //void fly() const {
    //printf("Duck::Fly\n");
  //}
};
class Chick :public BirdBase {
 public:
  using BirdBase::BirdBase;
  void fly() const {
    printf("Chick::Fly\n");
  }
};

void st(T *v) {
  v->gaga();
}

int main(int argc, char *argv[])
{

  //Chick c(3);
  //Duck d(34);
 //BirdBase *bb;
 //bb = &c;
 //bb->fly();
 //bb = &d;
 //bb->fly();

  
  return 0;
}
