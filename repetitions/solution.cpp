#include <stdio.h>

#include <iostream>

using namespace std;

int main() {
    char c, p = EOF;
    int curr = 1, best = 1;
    while ((c = getchar()) != EOF) {
        if (c == p) {
            curr += 1;
        } else {
            best = max(best, curr);
            curr = 1;
        }
        p = c;
    }
    cout << best;
}