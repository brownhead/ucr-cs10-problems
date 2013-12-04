#include <iostream>
#include <vector>

using namespace std;

void swap(int & a, int & b) {
    int temp = a;
    a = b;
    b = temp;
}

void foo(vector<int> & v) {
    for (int i = v.size() - 1; i > 0; --i) {
        swap(
            v.at(i),
            v.at((i + 1) % v.size())
        );
    }
}

void print_vector(const vector<int> & v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v(5);
    v.at(0) = 1;
    v.at(1) = 2;
    v.at(2) = 3;
    v.at(3) = 4;
    v.at(4) = 5;

    foo(v);

    print_vector(v);

    return 0;
}
