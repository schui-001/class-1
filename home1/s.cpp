#include <stdio.h>
class B {
 public:
  void show() const {
    printf("%p\n", this);
  }
  //static B ins;
  static B& getInstance() {
    if (ins == nullptr)
     ins = new B(10, 10);

    return *ins;
  }
  B(const B&) = delete;

  ~B() {
    printf("~B()\n");
  }

 private:
  static B *ins;

  int i;
  int j;
 private:
  B(int i=0, int j=0) 
      :i(i), j(j)
  {}


};

B *B::ins=nullptr;

int main(int argc, char *argv[])
{
  B& a = B::getInstance();
  B& b = B::getInstance();
  B& c = B::getInstance();
  B& d = B::getInstance();
  a.show();
  b.show();
  c.show();
  d.show();

  //d.~B();
  delete &b;
  d.show();

  
  return 0;
}

