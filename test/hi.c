#include <stdio.h>

int main()
	{
		int a = 0;
		int b = 1;
		char c1 = 'n';
		printf("Insert a number\n");
		scanf("%d", &a);
		printf("Insert a second number\n");
		scanf("%d", &b);
		printf("Would you like to see the result? (y/n)\n");
		scanf("%c", &c1);
		printf("you inserted %c.\n",c1);
		printf("processing....\n");
		if(c1=='y')
			{ 
				printf("%d\n", a+b);
				return 0;
			}
		if(c1=='n')
			{
				printf("bye bye.\n");
				return 0;
			}
		printf("program finnished.\n");
		return 0;
	}
