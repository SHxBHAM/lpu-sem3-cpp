#include <iostream>
using namespace std;

class Complex {
    int x, y;

public:
    Complex() {
         =x = 10;
        y 20;
    }

    Complex(int a, int b) {
        x = a;
        y = b;
    }

    void show() {
        cout << x << "+i" << y;
    }

    // Declare a friend function for overloading the + operator
    friend Complex operator+(const Complex& c1, const Complex& c2);
};

// Define the friend function for addition
Complex operator+(const Complex& c1, const Complex& c2) {
    Complex temp;
    temp.x = c1.x + c2.x;
    temp.y = c1.y + c2.y;
    return temp;
}

int main() {
    Complex c1(2, 3), c2(4, 5), c3;
    c3 = c1 + c2;
    c3.show();
    return 0;
}