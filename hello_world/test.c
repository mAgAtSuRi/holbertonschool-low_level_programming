#include <stdio.h>

int main(void)
{
	char f,l;
	int age;
	
	printf("Enter your initials then your age: ");
	scanf("%c %c %d", &f,&l, &age);
	printf("My initials are : %c%c and I'm %d years old.\n",f,l,age);
	return(0);
}
