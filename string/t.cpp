///功能.
// 长度, 判空, 比较, 大小写转换, 拷贝赋值, 拼接, 访问指定字符,
// 字符统计, 得到子串, 逆置, 过滤指定子串
#include <cstring>
#include <cstdio>
#include <cstdlib>

#include <assert.h>

class String 
{
 private:
  char *_p;
  size_t _length;

 public: 
  //String(const char *s=nullptr)
  //{
  //char *p = (char *)malloc(sizeof(char)*(strlen(s)+1));
  //strncpy(p,s,strlen(s)+1);
  //}

  String(): _p(nullptr) , _length(0) {}
  String(const char *str)  {
    if (str == nullptr) {
      _p = nullptr;
      _length = 0;
    } else {
      _length = strlen(str);
      _p = (char*)malloc(_length);
      memcpy(_p, str, _length);
    }
  }
  String(const String &o)
  {
    _length= o._length;
    _p= (char*)malloc(_length);
    if (_length != 0) 
      memcpy(_p, o._p, _length);
  }

  size_t length() const {
    return _length;
  }
};


int main(int argc, char *argv[])
{
  String s;
  String s1("hello");
  String s2(s1);
  String s3(s);

  assert(0 == s.length());
  assert(5 == s1.length());

  //assert(s.isEmpty());
  //assert(not s1.isEmpty());

  //assert("hello" == s1 );
  //assert(not ("hello" != s1 ));
  //String s2(s1.toUpper());
  //assert(s2 == "HELLO");
  //assert(s2.toLower() == "hello");

  //s = s2;
  //assert(s == "HELLO");

  //assert("HELLO world" == s2 + " world");
  //s2 += " world";
  //assert("HELLO world" == s2);

  //assert(s2.getMember(3) == 'L');
  //assert(s2.getMember(0) == 'H');
  //assert(s2.getMember(s2._length()-1) == 'O');

  //s2.count('c');
  //s2.sub(index, end)
  //s2.revers()
  //s2.


  printf("all passed\n");


  return 0;
}

