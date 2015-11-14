#include <stdlib.h>

#include <stdio.h>
//explicit
class A  {
 public:
  int i;
  explicit A(int i, int b) {
    printf("A(int)\n");
  }

  A(const A&a) {
    printf("A(const )\n");
  }

};

A show(const A& o) {
  printf("o.i\n");
  return A(3);
}

int main(int argc, char *argv[])
{
  A a(3);
  //A b(a);
  A b(5);

  show(a);
  show(3);
  show(A(3));
  
  return 0;
}

