#include <iostream>
#include <conio.h>

using namespace std;

class Rect {
public:
    int width, height;
    
    int area() {
        return (width * height);
    }
};

int main() {
    Rect rect;
    rect.width = 3;
    rect.height = 4;

    Rect rectb;
    rectb.width = 5;
    rectb.height = 6;

    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;
    return 0;
}