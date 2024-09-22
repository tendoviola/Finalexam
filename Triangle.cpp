#include <iostream>
using namespace std;

// Function to calculate the third angle of a triangle
int ThirdAngle(int first1, int second2) {
    return 180 - (first1 + second2);
}

int main() {
    int first1, second2;

    // Input the two angles
    cout<<"\n"<<endl;
    cout << "Enter the first angle: ";
    cin >> first1;
    cout<<".........................................\n";
    cout << "Enter the second angle: ";
    cin >> second2;
    cout<<"\n.........................................";

    // Calculate and output the third angle
    int thirdAngle = ThirdAngle(first1, second2);
    cout << "The third angle is: " << thirdAngle << " degrees" << endl;

    return 0;
}