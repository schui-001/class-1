
#include <string>
#include <iostream>
#include <stdio.h>

class Person {

 public:
  static int total;
  static const int xx=3;
  static void showTotal() {
    printf("t:%d\n", total);
  }
private:
  int age;
  std::string name;


public:
  Person(int a, const std::string &n) 
      :age(a), name(n)
  {
    ++total;
  }

  Person& setAge(int age) {
    this->age = age; 
    printf("%d\n", age);
    return *this;
  }

  Person& setName(const std::string &str) {
    name = str;
    return *this;
  }

  const Person& show() const {
    printf("age:%d name:%s\n", age, name.c_str());
    return *this;
  }
};

int Person::total=0;

int main(int argc, char *argv[])
{
  Person a(18, "xh");
  //fjeosf.setAge(19)
        //.setName("ml")
        //.show();

  //a.setAge(19).setName("ml").show();
  
  Person b(18, "xh");
  Person c(18, "xh");
  Person::showTotal();
  c.showTotal();

  
  return 0;
}
