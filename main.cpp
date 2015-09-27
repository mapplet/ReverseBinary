#include <iostream>
#include <math.h>

using namespace std;

int main() {
    
    int input;
    cin >> input;
    
    if (!cin || input < 1 || input > 1000000000)
        return -1;
    
    int exponent_msb = log2(input);
    bitset<30> input_binary = input;
    int output = 0, current_bit_value = pow(2, exponent_msb);
    for (int i=0; i<=exponent_msb; ++i)
    {
        if (input_binary.test(i))
            output += current_bit_value;
        
        current_bit_value /= 2;
    }
    
    cout << output << endl;
    
    return 0;
}
