#include "developer.h"
#include "developer_group.h"
#include <string.h>
	//defining developer_group
	void developer_group_init(developer_group *const d_g, const developer* dev1, const developer* dev2, const char* logo)
	{
		strncpy((char *)d_g->dev1, (char*) dev1, strlen((char*)dev1) +1);
		strncpy((char *)d_g->dev2, (char*) dev2, strlen((char*)dev2)  +1);
		strncpy(d_g->logo, logo, strlen(logo) +1);
	}
