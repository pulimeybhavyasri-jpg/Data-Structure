#include <stdio.h>

struct Student {
    int id;
    char name[50];
};

int main() {
    struct Student s[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter id and name: ");
        scanf("%d %s", &s[i].id, s[i].name);
    }

    printf("\nStudent Details:\n");
    for(i = 0; i < 3; i++) {
        printf("%d %s\n", s[i].id, s[i].name);
    }

    return 0;
}