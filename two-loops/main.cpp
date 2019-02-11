#include <cstring>
#include <iostream>

int main(){
    const int n = 100000;

    double *a1 = (double*)malloc(n * sizeof(double));
    double *b1 = (double*)malloc(n * sizeof(double));
    double *c1 = (double*)malloc(n * sizeof(double));
    double *d1 = (double*)malloc(n * sizeof(double));

    //  Zero the data to prevent any chance of denormals.
    memset(a1,0,n * sizeof(double));
    memset(b1,0,n * sizeof(double));
    memset(c1,0,n * sizeof(double));
    memset(d1,0,n * sizeof(double));

    //  Print the addresses
    std::cout << a1 << std::endl;
    std::cout << b1 << std::endl;
    std::cout << c1 << std::endl;
    std::cout << d1 << std::endl;

    const clock_t start = clock();

    int c = 0;
    while (++c < 10000) {

        for(int j = 0; j < n; ++j) {
            a1[j] += b1[j];
            c1[j] += d1[j];
        }

    }

    const clock_t end = clock();
    std::cout << "seconds = " << (double)(end - start) / CLOCKS_PER_SEC << std::endl;

    return EXIT_SUCCESS;
}
