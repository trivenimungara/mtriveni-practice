#include <stdio.h>

struct Person {
    int age;
    float weight;
};

int main(void) {
    struct Person p = {25, 68.5};
    struct Person *ptr = &p;
    printf("%d\n",p.age);
    printf("%.2f\n",p.weight);
    printf("%d\n",*ptr);
    printf("%p\n",ptr);
    printf("%p\n",&ptr);
    return 0;
}

