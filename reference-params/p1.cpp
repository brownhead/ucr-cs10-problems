#include <iostream>

using namespace std;

void swap(int & a, int b) {
    int c = a;
    a = b;
    b = c;
}

int foo(int & a, int & b, int & c) {
    swap(a, b);
    swap(c, a);
    return a + b + c;
}

int main() {
    int x = 1, y = 2, z = 3;
    int r = foo(x, y, z);
    cout << x << y << z << r << endl;

    return 0;
}
