#include <stdio.h>
struct student {
    int id;
};
int main(){
    struct student s = {5};
    struct student *p = &s;
    printf("%d", p->id);
}