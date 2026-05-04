#include <stdio.h>

struct Data {
    unsigned int a:2;
    unsigned int b:3;
};

int main() {
    struct Data d;

    d.a = 2;
    d.b = 5;

    printf("a = %d\nb = %d", d.a, d.b);

    return 0;
}