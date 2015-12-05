
#include <stdio.h>
#include <stdlib.h>
class XZ {
public:
  virtual void area() const { printf("XZ::area\n"); }
  void show() {printf("XZ:show()");}
  virtual ~XZ() {
    printf("~XZ()\n");
  }

};
class Ract : public XZ {
protected: 
  int l; int w;
public:
 int *buf;
   Ract() {
     buf =(int*) malloc(100);
   }
  Ract(int x, int y) : l(x), w(y) {}
  virtual void area() const { printf("Ract::area: %d\n", l*w); }
  void getLen() const { printf("Ract::getLen: %d\n", l); }
  ~Ract() {
    printf("~Ract()\n");
    free(buf);
  }
};
class Square : public Ract {
public:
  Square(int l) : Ract(l, l) {}
  virtual void area() const { printf("Square::area: %d\n", w*w ); }
};
class Circle: public XZ {
private: 
  int r;
public:
  ~Circle() {
    printf("~Circle()\n");
  }
  Circle(int r): r(r) {}
  void getR() const { printf("Ract::getR: %d\n", r); }
  void area() const { printf("Circle::area: %g\n", 3.14 * r *r); }
  void show() {printf("Circle:show()");}
};

struct O {
  void area() {}
};
//void area(const XZ* xz) { xz->area(); }

int main(int argc, char *argv[])
{
  XZ *p= new Circle(3);
  p->area();
  delete p;
  p = new Square(2);
  p->area();
  delete p;
  p = new Ract(4,5);
  p->area();
  delete p;
  
  return 0;
}

