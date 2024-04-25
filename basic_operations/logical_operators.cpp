#include <iostream>

using namespace std;

int main()
{
    int a = 5, b = 3, c = 7;

    // Logical AND (&&)
    if (a > b && a < c)
    {
        cout << "a is greater than b and less than c" << endl;
    }
    else
    {
        cout << "Condition not met for logical AND" << endl;
    }

    // Logical OR (||)
    if (a < b || a < c)
    {
        cout << "a is less than either b or c" << endl;
    }
    else
    {
        cout << "Condition not met for logical OR" << endl;
    }

    // Logical NOT (!)
    bool flag = false;
    if (!flag)
    {
        cout << "Flag is false" << endl;
    }
    else
    {
        cout << "Condition not met for logical NOT" << endl;
    }

    return 0;
}
