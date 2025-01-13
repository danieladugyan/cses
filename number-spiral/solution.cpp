#include <stdio.h>

#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

// look through tests for largest, create spiral accordingly
// lazy eval

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> tests;
    int y, x;
    int rows = 0, cols = 0;
    while (cin >> y) {
        cin >> x;
        tests.push_back({y, x});
        rows = max(rows, y);
        cols = max(cols, x);
    }

    vector<vector<int>> spiral;

    y = 0;
    x = 0;
    while (y != rows && x != cols) {
        // start with s = 1
        // loop (turn after every step)
        //  take 1 step dir
        //  take s steps
        //  take s steps
        //  s += 1
        //  dir = !dir
        //  goto loop
    }

    cout << rows << endl;
    cout << cols << endl;
}