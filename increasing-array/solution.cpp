#include <stdio.h>

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    long tmp;
    vector<long> xs;
    while (cin >> tmp) {
        xs.push_back(tmp);
    }

    long moves = 0;
    for (unsigned i = 1; i < xs.size(); i++) {
        if (xs[i - 1] > xs[i]) {
            moves += xs[i - 1] - xs[i];
            xs[i] = xs[i - 1];
        }
    }

    cout << moves;
}