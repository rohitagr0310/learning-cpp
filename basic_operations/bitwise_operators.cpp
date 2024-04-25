#include <iostream>

using namespace std;

int main()
{
    // Bitwise AND (&)
    int a = 5;              // 0101 in binary
    int b = 3;              // 0011 in binary
    int result_and = a & b; // 0001 in binary
    cout << "Bitwise AND: " << result_and << endl;

    // Bitwise OR (|)
    int result_or = a | b; // 0111 in binary
    cout << "Bitwise OR: " << result_or << endl;

    // Bitwise XOR (^)
    int result_xor = a ^ b; // 0110 in binary
    cout << "Bitwise XOR: " << result_xor << endl;

    // Bitwise NOT (~)
    int result_not_a = ~a; // 1010 in binary (two's complement)
    cout << "Bitwise NOT for a: " << result_not_a << endl;

    // Left Shift (<<)
    int result_left_shift = a << 1; // 1010 in binary (shifted left by 1)
    cout << "Left Shift of a: " << result_left_shift << endl;

    // Right Shift (>>)
    int result_right_shift = b >> 1; // 0001 in binary (shifted right by 1)
    cout << "Right Shift of b: " << result_right_shift << endl;

    return 0;
}
