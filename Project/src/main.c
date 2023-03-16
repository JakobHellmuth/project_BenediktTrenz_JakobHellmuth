#include "developer.h"
#include "developer_group.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{

//declaration developer & group
developer dev1;
developer dev2;
developer_group d_g;
char logo;
logo = 'skskdsa';

// initializing developer
developer_init(&dev1, "Jakob Hellmuth", "Bobi");
developer_init(&dev2, "Benedikt Trenz", "Ben");

// initializing developer_group
developer_group_init(&d_g, &dev1, &dev2, "Logo");

	// loop for menue
	while(1)
	{
		int a;
		printf("================================\n");
		printf("What would you like to do?\n");
		printf("Show developers and alias	[1]\n");
		printf("Show logo		        [2]\n");
		printf("Show developers, alias and logo	[3]\n");
		printf("Exit                            [4]\n");
		printf("================================\n");
		scanf("%d",&a);

		if(a==1)
		{
			printf("%s\n", &dev1);
			printf("%s\n", &dev2);
		}
		else if(a==2)
		{
			printf("%c\n", logo);
		}
		else if(a==3)
		{
			printf("%s\n", &d_g);
		}
		if(a==4)
		break;
		}
	return 0;
;}
