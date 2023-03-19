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
char logo[] =

"         __\n"
"(),--------'()'--o\n"
" (_    ___    /~""\n"
"  (_)_)  (_)_)\n";


// initializing developer
developer_init(&dev1, "Jakob Hellmuth");
developer_add_alias(&dev1, "Bobi");
developer_init(&dev2, "Benedikt Trenz");
developer_add_alias(&dev2, "Ben");

// initializing developer_group
developer_group_init(developer_group *const d_g, const developer* dev1, const developer* dev2, const char* logo);

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
			printf("%s, %s\n", dev1.name, dev1.alias);
			printf("%s, %s\n", dev2.name, dev2.alias);
		}
		else if(a==2)
		{
			printf("%s\n", logo);
		}
		else if(a==3)
		{
			printf("%s, %s\n", d_g.dev1->name, d_g.dev2->name);
			printf("%s\n", d_g.logo);
		}
		if(a==4)
		break;
		}
	return 0;
;}
