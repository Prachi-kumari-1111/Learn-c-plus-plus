
#include <iostream>
using namespace std;

int main (){
    double length, breadth;

    // Length aur breadth input karo
    cout << "Rectangle ki length daalo: ";
    cin >> length;
    cout << "Rectangle ki breadth daalo: ";
    cin >> breadth;

    // Area aur perimeter calculate karo
    double area = length * breadth;
    double perimeter = 2 * (length + breadth);

    // Area aur perimeter ko compare karo
    if (area > perimeter) {
        cout << "Rectangle ka area (" << area << ") perimeter se bada hai." << endl;
    } else if (area < perimeter) {
        cout << "Rectangle ka perimeter (" << perimeter << ") area se bada hai." << endl;
    } else {
        cout << "Rectangle ka area aur perimeter barabar hai (" << area << ")." << endl;
    }

    return 0;
}