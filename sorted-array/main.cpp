#include <algorithm>
#include <ctime>
#include <iostream>

int main()
{
    // Generate data
    const unsigned int arraySize = 32768;
    int data[arraySize];

    for (size_t i = 0; i < arraySize; ++i)
        data[i] = std::rand() % 256;

    // Sort
    //std::sort(data, data + arraySize);

    // Test
    clock_t start = clock();
    long long sum = 0;

    for (size_t i = 0; i < 100000; ++i)
    {
        for (size_t j = 0; j < arraySize; ++j)
        {
            if (data[j] >= 128)
                sum += data[j];
        }
    }

    const double elapsedTime = static_cast<double>(clock() - start) / CLOCKS_PER_SEC;

    std::cout << elapsedTime << std::endl;
    std::cout << "sum = " << sum << std::endl;
    return EXIT_SUCCESS;
}
