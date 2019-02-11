template <typename C>
class Object
{
public:
  C * Create() { return new C; }
};


class Base : public Object<Base>
{
public:
  void Foo() {}
};


int main()
{
  Base b;



  return 0;
}
