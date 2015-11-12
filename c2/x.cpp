
#include <cstdlib>
#include <cstring>
#include <cstdio>

class Date {
private:
  int year, month, day;
public:
  ~Date() 
  {
    printf("~Data\n");
    show();
  }
  Date(int y=1970, int m=1, int d=1)
   :year(y), month(m), day(d) 
  {
  
    printf("Date(int y, int m, int d)\n");
    if (y <1970|| y > 2050) year =1970;
    if (m < 1 || m > 12) month = 1;
    if (d <1 || day > 31) day=1;
  }
  //Date(int y) : Date(y, 1)
  ////:year(y), month(1), day(1) 
  //{
    //printf("Date(int y)\n");
    ////if (y <1970|| y > 2050) year =1970;
  //}
  //Date(int y, int m) : Date(y,m,1)
   ////:year(y), month(m), day(1) 
  //{
    //printf("Date(int y, int m)\n");
    ////if (y <1970|| y > 2050) year =1970;
    ////if (m < 1 || m > 12) month = 1;
  //}
  //Date(int y, int m, int d)
   //:year(y), month(m), day(d) 
  //{
    //printf("Date(int y, int m, int d)\n");
    //if (y <1970|| y > 2050) year =1970;
    //if (m < 1 || m > 12) month = 1;
    //if (d <1 || day > 31) day=1;
  //}

  void show() {
    printf("y:%d m:%d d:%d\n", 
           year, month, day);
  }
};

void test() {
  Date a(2002);
  Date b(2002, 12, 2);
  b.~Date();
  //a.show();
  //b.show();
}

int main(int argc, char *argv[])
{
  test();
  
  return 0;

}

//class String {
//private:
  //char *_buf = nullptr;
  //size_t _len=0;
//public:
  //String(const char *str="") {
    //_len = strlen(str);
    //_buf = (char*)malloc(_len);
    //memcpy(_buf, str, _len);
  //}
   //String(const String &o) {
     //printf("String(const String&)\n");
    //_len = o._len;
    //_buf = (char*)malloc(_len);
    //memcpy(_buf, o._buf, _len);
   //}
  //void clean() {
    //_len = 0;
    //free (_buf);
    //_buf = nullptr;
  //}
  //void show() {
    //if (_buf not_eq nullptr) 
      //printf("%s\n",_buf);
    ////snprintf(_buf, _len, "%s", _buf); 
  //}
  //size_t length() { return _len; }
//};

//int main(int argc, char *argv[])
//{
  //String a("xxx");
  //String b(a);
  //a.clean();
  //b.show();
  
  //return 0;
//}

//class A{
 //private:
  //int _i=4;
  //double _d{};
 //public:
  ////A(int i) {
    ////printf("A(int i)\n");
    ////_d=10;
    ////_i=i;
  ////}

  //A() :_i(4), _d(0.0) 
  //{ 
    ////printf("A()\n");
  ////}
  ////A(int i, double d=1.1) :_i(i), _d(d) {
    ////printf("A(int, double)\n");
  ////}




  ////A(const A &o) {
    ////printf("A(A o)\n");
    ////_i = o._i;
  ////}
  //void show() {
    //printf("i:%d d:%g\n", _i, _d);
  //}


//};

//int main(int argc, char *argv[])
//{
  ////A a(3);
  ////A b(4,6);
  //A c;
  ////a.show();
  ////b.show();
  //c.show();
  ////a.show();

  ////A b(a);
  ////b.show();
  
  //return 0;
//}
