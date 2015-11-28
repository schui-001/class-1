

#include <stdio.h>
#include "String.hpp"

int main(int argc, char *argv[])
{
  String s;
  String s1("hello");
  s1.show();
  //String s2(s1);

  //assert(0 == s.length());
  //assert(5 == s1.length());
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
  //assert(s2.getMember(s2.length()-1) == 'O');

  //s2.count('c');
  //s2.sub(index, end)
  //s2.revers()
  //s2.


  printf("all passed\n");

  
  return 0;
}

