#include <stdio.h>

struct Address {
    char city[50];
};

struct Student {
    int id;
    struct Address addr;
};

int main() {
    struct Student s;

    printf("Enter id and city: ");
    scanf("%d %s", &s.id, s.addr.city);

    printf("ID: %d\nCity: %s", s.id, s.addr.city);

    return 0;
}