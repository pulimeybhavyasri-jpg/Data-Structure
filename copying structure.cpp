#include <stdio.h>
struct student { int id; };
int main(){
    struct student s1 = {1};
    struct student s2;
    s2 = s1;
    printf("%d", s2.id);
}