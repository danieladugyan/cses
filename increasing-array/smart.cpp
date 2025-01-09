#include <iostream>

using namespace std;

/*
  User Kapt had a smarter solution:
  calculate the answer while reading the input.
*/

int main() {
    int n;
    cin >> n;

    long curr, prev, moves = 0;
    cin >> prev;
    while (cin >> curr) {
        if (prev > curr) {
            moves += prev - curr;
        } else {
            prev = curr;
        }
    }

    cout << moves;
}