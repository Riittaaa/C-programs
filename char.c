#include<stdio.h>
int main()
{
	printf("integer Occupies=>%d bytes\n",sizeof(int));
	printf("float Occupies=>%d bytes\n",sizeof(float));
	printf("char Data Type Qualifier Occupies=>%d bytes\n",sizeof(char));
	printf("double Data Type Occupies=>%d bytes\n",sizeof(double));
	printf("long double Data Type Occupies=>%d bytes",sizeof(long double));
	return 0;
}
