#include <stdio.h>

typedef struct {
    int id;
    char name[50];
} Student;

int main() {
    Student s;

    printf("Enter id and name: ");
    scanf("%d %s", &s.id, s.name);

    printf("ID: %d Name: %s", s.id, s.name);

    return 0;
}