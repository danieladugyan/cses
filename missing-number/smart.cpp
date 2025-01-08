#include <iostream>

using namespace std;

/*
  User Kapt had a smarter solution:
  Iterate over all numbers 1..N and at the same time read the input.
  XOR all of this together and exploit that A XOR A = 0, cancelling
  out all numbers except the one that's missing.
*/

int main() {
    int n;
    cin >> n;

    int a;
    int sum = 0;
    for (int i = 1; i < n; i++) {
        cin >> a;
        sum ^= a;
        sum ^= i;
    }
    sum ^= n;  // n - 1 iterations means we miss N
    cout << sum << endl;
}