#include <iostream>
#include <vector>

using namespace std;

int & foo(vector<int> & v) {
    int max_index = 0;
    for (int i = 1; i < v.size(); ++i) {
        if (v.at(i) > v.at(max_index)) {
            max_index = i;
        }
    }
    return v.at(max_index);
}

int main() {
    vector<int> q(5);
    q.at(0) = 10;
    q.at(1) = 1;
    q.at(2) = 4002;
    q.at(3) = -5;
    q.at(4) = 19;

    foo(q) = 0;

    for (int i = 0; i < q.size(); ++i) {
        cout << q.at(i) << " ";
    }
    cout << endl;

    return 0;
}
