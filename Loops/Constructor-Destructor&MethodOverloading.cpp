#include <iostream>
using namespace std;

class Box {
    int length, width, height;
public:
    Box() {
        length = width = height = 1;
        cout << "Default constructor called\n";
    }

    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
        cout << "Parameterized constructor called\n";
    }

    int volume() {
        return length * width * height;
    }

    ~Box() {
        cout << "Destructor called\n";
    }
};

int main() {
    Box b1;
    Box b2(3, 4, 5);

    cout << "Volume of b1: " << b1.volume() << endl;
    cout << "Volume of b2: " << b2.volume() << endl;

    return 0;
}
