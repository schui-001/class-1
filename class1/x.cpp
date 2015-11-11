
#include <iostream>

class Ok {
 public:
  int i;
  //Ok() {i=0; }
};

class String {
 public:
  //String() {
    //printf("String()\n");
  //}
  String(const char *str="fff") {
    printf("String(const char)\n");
  }
};

int main(int argc, char *argv[])
{
  String s;
  //Ok o{};
  //printf(":%d\n", o.i);
  //return 0;
}

//class Person {
//private:
  //int age;
  //std::string name;

//public:
  //Person() {
    //printf("Person()\n");
    //age = 4;
    //name = "sb";
  //}
  //Person(int a, const std::string &n) {
    //printf("Person(int )\n");
    //age = a;
    //name = n;
  //}
  ////void init(int a, const std::string &n) {
    ////age = a;
    ////name = n;
  ////}

  //void sayHello() {
    //std::cout << "Hi, " << "I'm " << name 
        //<< " age: " << age << " Nice to see you :)\n" ;
  //}
//};

//int main() {
  //Person p;
  //p.sayHello();

  //Person b(16, "hj");
  //b.sayHello();
//}

//class Alipay {
  //int x;
////private:
 //int money;

////public:
  //bool pay(int price) {
    //if (price > money) return false;
    //money -= price;
    //return true;
  //}

  //void showMoney();


//};

//void Alipay::showMoney(){
  //printf("%d\n", money);

//}

//void buyBook(Alipay &p) {
  //p.pay(100); 
//}

//int main(int argc, char *argv[])
//{
  
  //return 0;
//}
