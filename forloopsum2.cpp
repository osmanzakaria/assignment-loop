#include <iostream>
using namespace std;

int main()
{
    int sum = 0; // Initialize sum to 0
    for(int i = 20; i <= 25; i++){
        sum += i; // Add each number to sum
    }
    cout << "Sum of numbers from 20 to 25 is " << sum << endl;

    return 0;
}
