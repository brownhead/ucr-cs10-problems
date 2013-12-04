#include <iostream>
#include <vector>

using namespace std;

void print_vector(const vector<int> & v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main() {
    vector<int> q(4);
    vector<vector<int> > v(4, q);

    for (int i = 0; i < v.size(); ++i) {
        print_vector(v.at(i));
    }

    return 0;
}
