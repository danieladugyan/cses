#include <stdio.h>

#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> s;

    int a;
    while (cin >> a) {
        s.insert(a);
    }

    for (int i = 1; i <= n; i++) {
        if (s.count(i) == 0) {
            printf("%d", i);
            break;
        }
    }
}