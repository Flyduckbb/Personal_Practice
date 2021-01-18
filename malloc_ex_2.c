/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct studentTag {
	char name[10];
	int age;
	double gpa;
} student;

int main(void)
{
	student* s;

	s = (student*)malloc(sizeof(student));
	if (s == NULL)
	{
		fprintf(stderr, "out of memory!\n");
		exit(1);
	}

	strcpy(s->name, "Park");
	s->age = 20;

	printf("%s\n",s->name);
	printf("%d\n", s->age);

	free(s);
	return 0;
}*/