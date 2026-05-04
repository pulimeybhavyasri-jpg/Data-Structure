#include <stdio.h>

enum Day {SUN, MON, TUE, WED, THU, FRI, SAT};

int main() {
    enum Day d;

    d = WED;

    printf("Value: %d", d);

    return 0;
}