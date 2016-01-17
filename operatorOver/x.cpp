#include <iostream>
#include <stdio.h>
class Integer {
 private:
  int i;
 public:
  Integer* This() { return this; }
  //int getI() const {
    //return i;
  //}
  //void setI(int )  {

  //}

 Integer& operator=(const Integer &o) {
   printf("operator=\n");
   this->i = o.i;

   return *this;
 } 

 public:
  Integer(int ll = 0) : i(ll) {
    printf("Integer xx\n");
  }
  //Integer(bool ll) : i(ll) {
    //printf("Integer(bool)\n");
  //}

  operator bool() {
    printf("bool()\n");
    return i != 0;
  }


//Integer operator++() {
  //++i;
  //return Integer(i);
//}

//Integer operator++(int) {
  //int t = i;
  //++i;
  //return Integer(t);
//}

  void show() const {
    printf("show() :%d %p\n", i, this);
  }

  void operator()() const {
    printf("operator() :%d %p\n", i, this);
  }

  void operator()(int x) const {
    printf("operator() :%d %d %p\n", i, x, this);
  }

  std::ostream& operator<<(std::ostream& os)
  {
    os << "Integer [ " << i << " ] ";
    return os;
  }

 private:
  void pp() {}
  friend Integer operator++(Integer &);
  friend Integer operator++(Integer &o, int);
  friend Integer operator-(const Integer & o);
  friend Integer operator+(const Integer &l, const Integer &r);
  friend Integer& operator+=(Integer &l, const Integer &r);
  friend std::ostream& operator<<(std::ostream& os, const Integer &o);
  friend std::ostream& operator<<(const Integer &o, std::ostream& os);
};

Integer& operator+=(Integer &l, const Integer &r)
{
  l.i += r.i;
  return l;
}


Integer operator+(const Integer &l, const Integer &r)
{
  return Integer(l.i + r.i);
}

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
}

Integer operator++(Integer &o) {
  ++o.i;
  return Integer(o.i);
}
//std::ostream & operator<<(std::ostream & os)
//{
 // os << this->i;
  //return os;
//}
Integer operator++(Integer &o, int) {
  int t = o.i;
  ++o.i;
  return t;
}

int inc(int f) {
  return inc(f++);
}

//class ostream {
 //public:
//std::ostream& operator<<(const Integer &o) {

  //*tihs << "Integer [ " << o.i << " ] ";
  //return *this;;
//}


//};

  //std::cout << 43 << "fjeofj" << i;
//std::ostream& operator<<(std::ostream& os, const Integer &o)
//{
  //os << "Integer [ " << o.i << " ] ";
  //return os;
//}
//std::ostream& operator<<(const Integer &o, std::ostream& os)
//{
  //os << "Integer [ " << o.i << " ] ";
  //return os;
//}

void show() {
  printf("show\n");
}

//class Thread {

  //static run(T x) {
    //x();
  //}
//}
int main(int argc, char *argv[])
{
  Integer x;

  //Thread::run(show);

  //void (*t)(void) = show;
  //t();

  //Thread::run(show);
  //Thread::run(x);

  int _i =4;
  _i = 4;

  //int _j =5;

  _i += _i;
  //x+=4;

  //printf("%d\n", _i);

  //int x = ++_i;//5
  //int y = _i++;// 6
//  +_i;
  //int x = -_i;

  
  Integer i(3);
  Integer j(4);
  ++i;
  i.show();
  (i++).show();

  i.show();
  (i + j).show();

  i.show();
  j.show();
  (i += i) += 3;
  i.show();

  Integer k;
  printf("Integer k\n");
  k = i;
  k.show();

  //i << std::cout;
  //std::cout << 43 << "fjeofj" << i;


  
  Integer s; //0

  Integer f = true;


  if (s) {
    printf("s ture\n");
  } else {
    printf("s false\n");
  }


  f.show();

  f();
  f(3);












  //Integer(3);

  //operator+(i); //+i
  //+i; // operator+(i);
  //printf("+i\n");
  //(-i).show();

  //i.show();
  //(++i).show();
  //int xxxx=0;
  //(i++).show();
  //i.show();
  

  return 0;
}
