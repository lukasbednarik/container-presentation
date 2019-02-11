#include <cstdlib>

class Base
{
public:
    virtual ~Base() = 0;
};

inline Base::~Base() {}

class Derived : public Base
{
public:
    ~Derived() override {};
};


int main()
{
    Derived b;


    return EXIT_SUCCESS;
}
