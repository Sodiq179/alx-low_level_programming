#include <stdio.h>
/* Inputs : This program accepts the name and the birth year of the user
 *
 * Output: Age and a welcome message
 */

char name;
int yob;
int greet(void)
{
	int age;
	printf("Please input your name:");
	scanf("%c", &name);
	printf("Please input your year of birth:");
	scanf("%d", &yob);
	age = 2022 - yob;
	printf("Welcome %c, you are %d years old", name, age);
	return(0);
}

