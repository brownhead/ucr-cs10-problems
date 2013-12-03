#include <iostream>

using namespace std;

int foo(int & a) {
    a += 2;
    return a - 2;
}

void bar(int a, int b) {
    a += foo(b);
    b += foo(a);
}

int main() {
    int x = 1, y = 2;

    cout << x << y << endl;

    return 0;
}
