#include <stdio.h>

struct students {
    char name[25];
    int age;
    int rollnumber;
} s1 = { "Triveni", 21, 448 }, 
  s2 = { .name="Kalyani", .age=22, .rollnumber=422 };

int main() {
    printf("s1: %s, %d, %d\n", s1.name, s1.age, s1.rollnumber);
    printf("s2: %s, %d, %d\n", s2.name, s2.age, s2.rollnumber);
    return 0;
}


