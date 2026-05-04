#include <stdio.h>

struct Student {
    int id;
    float marks;
};

void display(struct Student s) {
    printf("ID: %d Marks: %.2f\n", s.id, s.marks);
}

int main() {
    struct Student s;

    printf("Enter id and marks: ");
    scanf("%d %f", &s.id, &s.marks);

    display(s);

    return 0;
}