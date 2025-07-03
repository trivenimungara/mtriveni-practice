#include<stdio.h>
struct person
{
	int age;
	int weight;
};
int main()
{
	struct person p={25,55.50};
	struct person *ptr=&p;
	printf("%d\n",ptr->age);
	printf("%.2d\n",ptr->weight);
}
