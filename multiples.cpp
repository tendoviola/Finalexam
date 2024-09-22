#include <iostream>
using namespace std;

int main() {
    // Loop through numbers from 1 to 20
    for (int i = 1; i <= 20; i++) {
        // Check if the number is a multiple of 3
        if (i % 3 == 0) {
        // Print the multiple of 3
            cout << i << endl; 
        }
    }

    return 0;
}