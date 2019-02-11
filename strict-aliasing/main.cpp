#include <iostream>
#include <cstdlib>

int foo(float *f, int *i)
{ 
    *i = 1;               
    *f = 0.f;            
   
   return *i;
}

int main()
{
    int x = 0;
    
    std::cout << x << "\n";   // Expect 0
    x = foo(reinterpret_cast<float*>(&x), &x);
    std::cout << x << "\n";   // Expect 0?

    return EXIT_SUCCESS;
}
