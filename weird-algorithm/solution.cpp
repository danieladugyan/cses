#include <stdio.h>

using namespace std;

int main() {
    long n;
    scanf("%li", &n);

    while (n != 1) {
        printf("%li ", n);
        if (n % 2) {
            n *= 3;
            n++;
        } else {
            n = (n >> 1);
        }
    }
    printf("%li\n", n);
}