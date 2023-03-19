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
developer_group_init(&d_g, &dev1, &dev2, logo);

	// loop for menue
	while(1)
	{
		//print menue
		int a;
		printf("================================\n");
		printf("Choose your action:\n");
		printf("List Developers			[1]\n");
		printf("Print Group Logo	        [2]\n");
		printf("Print Group			[3]\n");
		printf("Exit                            [4]\n");
		printf("================================\n");
		scanf("%d",&a);

		if(a==1)
		{
			//print Developers
			printf("%s, %s\n", dev1.name, dev1.alias);
			printf("%s, %s\n", dev2.name, dev2.alias);
		}
		else if(a==2)
		{
			//print logo
			printf("%s\n", logo);
		}
		else if(a==3)
		{
			//print Group
			printf("%s, %s\n", d_g.dev1->name, d_g.dev2->name);
			printf("%s\n", d_g.logo);
		}
		//exit
		if(a==4)
		break;
		}
	return 0;
;}
