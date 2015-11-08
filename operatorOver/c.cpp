
#include <cstdio>
#include <iostream>
#include <string>
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

 friend Integer operator+=(Integer& left, const Integer& right) ;
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
  a.i++;
  return t;
}

Integer operator+(const Integer& a, const Integer &b) {
  return Integer(a.i + b.i);
}

class Person {
  std::string name;
public:
  Person(const char *x="") : name(x) {}
  Person& operator=(const Person &o) {
    printf("operator=\n");
    if (this == &o)
      return *this;
    return *this;
  }
  Person(const Person &o) {
    printf("Person\n");
  }

 friend std::ostream& operator<<(std::ostream&os, const Person &p);
};


std::ostream& operator<<(std::ostream&os, const Person &p)
{
  os << "Person:" << p.name ;
  return os;
}

class A {
   int i=0;
 public:
   explicit A(int x) :i(x) {}
   void show() const {
     printf("A.i%d\n", i);
   }


   operator bool() const {
     return i != 0;
   }

   void operator()(int i=3, int =3) { printf("say hello :"); }
};

void incA(A) {}

class B {
   int i;
 public:
   B(int x) :i(x) {}
   operator A() {
     A x(this->i);
     return x;
   }
};

int main(int argc, char *argv[])
{
  Person p("xxx");
  B b =3;
  A a = b;
  a.show();

  A c(0);
  if (c) {
    printf("c not empty\n");
  } else {
    printf("c is empty\n");

  }
  c();
  c(1);
  c(1,4);

  //Ostream o;
  //o << "ccc";
  std::cout <<"person "<< p << std::endl;
  //std::string str="ooo";
  //std::cout <<"person "<< 1 << str << std::endl;


  

  //Integer a(3);
  //Integer b(4);

  //(+a).show();

operator-(a);
  //++a;
  //a.show();
  //(a++).show();
  //a.show();

  //b.show();
  //(a+b).show();

  //+(a,b);
  //Integer x = a + b;
 


  return 0;
}
