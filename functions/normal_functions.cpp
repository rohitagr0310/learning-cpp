#include <iostream>

using namespace std;

// Function to add two integers
int add(int a, int b)
{
    return a + b;
}

// Function to subtract two integers
int subtract(int a, int b)
{
    return a - b;
}

// Function to multiply two integers
int multiply(int a, int b)
{
    return a * b;
}

// Function to divide two integers
float divide(int a, int b)
{
    return static_cast<float>(a) / static_cast<float>(b);
}

// Function to calculate the factorial of a number
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int x = 5, y = 3;

    // Using the add function
    std::cout << "Sum: " << add(x, y) << std::endl;

    // Using the subtract function
    std::cout << "Difference: " << subtract(x, y) << std::endl;

    // Using the multiply function
    std::cout << "Product: " << multiply(x, y) << std::endl;

    // Using the divide function
    std::cout << "Quotient: " << divide(x, y) << std::endl;

    // Using the factorial function
    int n = 5;
    std::cout << "Factorial of " << n << ": " << factorial(n) << std::endl;

    return 0;
}
