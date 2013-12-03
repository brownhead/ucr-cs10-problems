#include <iostream>

using namespace std;

int & foo(int a, int b, int & c) {
    a += b;
    b += a;
    c = a + b;

    return c;
}

int main() {
    int x = 1, y = 2, z = 3;
    foo(x, y, z) += 2;
    cout << x << y << z << endl;

    return 0;
}
