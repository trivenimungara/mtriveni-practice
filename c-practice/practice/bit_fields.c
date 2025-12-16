#include<stdio.h>
struct s{
	unsigned int power:1;
	unsigned int error:1;
	unsigned int mode:2;
};
void main()
{
	struct s obj;
	obj.power=1,obj.error=1,obj.mode=2;
	printf("power status:%u\n",obj.power);
	printf("error status:%u\n",obj.error);
	printf("mode status:%u\n",obj.mode);
	printf("sizeof struct:%lu\n",sizeof(obj));
}

