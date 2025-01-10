#include <stdio.h>

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    // naive: iterate over every permutation and check
    // if any adjacents elements are consecutive

    // 1: 1
    // 2: NO SOLUTION
    // 3: NO SOLUTION (one el must be center)
    // 4: NO SOLUTION
    // 5: 1 3 5 2 4
    // 6: 1 3 5 2 4 6
    // 7:

    // 1
    // 3 1 [2]
    // 3 1 4
    // 3 1 4 2
    // 5 3 1 4 2
    // 5 3 6 1 4 2

    // 1
    // 3 1
    // 3 1 4
    // 5 3 1 4
    // 5 3 6 1 4
    // 2 5 3 6 1 4

    int q;
    int num = 1;
    vector<int> p = {num};
    while (++num <= n) {
        bool inserted = false;

        // go through current permutation and find a spot
        for (int i = 0; i < (int)p.size(); i++) {
            if (i != 0 && abs(p[i - 1] - p[i]) == 1) {
                // diff to left is 1
                continue;
            }

            if (i < p.size() - 1 && abs(p[i + 1] - p[i]) == 1) {
                // diff to right is 1
                continue;
            }

            // we found a spot!
            inserted = true;
            p.insert(p.begin() + i, num);
            break;
        }

        if (!inserted) {
            // no spot, queue for later
            q = num;
        }
    }

    if (num == n) {
        for (auto &&i : p) {
            cout << i << " ";
        }
    } else {
        cout << "NO SOLUTION";
    }
}