#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Lambda function to print each element of the vector
    for_each(numbers.begin(), numbers.end(), [](int n)
             { cout << n << " "; });
    cout << endl;

    // Lambda function to calculate the sum of elements in the vector
    int sum = 0;
    for_each(numbers.begin(), numbers.end(), [&sum](int n)
             { sum += n; });
    cout << "Sum: " << sum << endl;

    // Lambda function to find the maximum element in the vector
    int max = *max_element(numbers.begin(), numbers.end(), [](int a, int b)
                           { return a < b; });
    cout << "Max: " << max << endl;

    return 0;
}
