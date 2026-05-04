#include <stdio.h>
struct s { int a; float b; };
union u { int a; float b; };
int main(){
    printf("%lu %lu", sizeof(struct s), sizeof(union u));
}