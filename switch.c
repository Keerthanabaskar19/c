#include<stdio.h>
main()
{
	printf("Pick an item : \n1. Pen\n2. Pencil\n3. Eraser\n4. Book");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("You picked Pen.");
			break;
		case 2:
			printf("You picked Pencil.");
			break;
		case 3:
			printf("You picked Eraser.");
			break;
		case 4:
			printf("You picked Book.");
			break;
		default : printf("invalid choice");
	}
}
