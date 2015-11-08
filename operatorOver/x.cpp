class cs 
{
 public:
  cs(int i):_i(i) { printf("cs()_i %d\n", _i); }
  ~cs() { printf("~cs():%d\n", _i); }
  cs& operator=(const cs &o) {
    printf("operator= %d\n", o._i);
    _i = o._i;
    return *this;
  }

  int get_i() const { return _i; }
  int set_i(int i) { return _i; }
 private:
  int _i;
};

cs get_cs() {
  static int i = 0;
  return cs(i++);
}

int main(int argc, char *argv[])
{
  //(get_cs() = cs(2)).set_i(323);
  //get_cs() = cs(2);
  //get_cs().operator=( get_cs().set_i(32));
  return 0;
}
