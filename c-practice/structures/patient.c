#include<stdio.h>
struct patient
{
	char name[20];
	char gender[5];
	int age;
	char phonenumber[15];
};
void main()
{
	struct patient a;
	printf("enter patient details:");
	printf(" name:");
	scanf("%s",a.name);
	printf(" gender:");
	scanf("%s",a.gender);
	printf(" age:");
	scanf("%d",&a.age);
	printf("enter phonenumber:");
	scanf("%s",a.phonenumber);
	printf("name:%s\n",a.name);
	printf("gender:%s\n",a.gender);
	printf("age:%d\n",a.age);
	printf("phonenumber:%s",a.phonenumber);
}

