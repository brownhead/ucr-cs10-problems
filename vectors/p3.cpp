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
    vector<int> q(2);
    vector<vector<int> > v(2, q);

    for (int i = 0; i < v.size(); ++i) {
        for (int j = 0; j < v.at(i).size(); ++j) {
            v.at(i).at(j) = i * j;
        }
    }

    for (int i = 0; i < v.size(); ++i) {
        for (int j = 0; j < v.at(i).size(); ++j) {
            swap(
                v.at(i).at(j),
                v.at((i + 1) % v.size()).at(j)
            );
        }
    }

    for (int i = 0; i < v.size(); ++i) {
        print_vector(v.at(i));
    }

    return 0;
}
