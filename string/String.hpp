#ifndef  STRING_H
#define  STRING_H

///功能.
// 长度, 判空, 比较, 大小写转换, 拷贝赋值, 拼接, 访问指定字符,
// 字符统计, 得到子串, 逆置, 过滤指定子串
#include <cstring>
#include <cstdio>
#include <cstdlib>
class String 
{
 private:
  char *p;
 public: 
  String(char *s)
  {
    char *p = (char *)malloc(sizeof(char)*(strlen(s)+1));
    strncpy(p,s,strlen(s)+1);
  }
  void show() const
  {
    printf("%s\n",p);
  }
  
};

#endif   /* ----- #ifndef STRING_H ----- */
