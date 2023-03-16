#include <stdio.h>
#include "developer.h"

#include <stdlib.h>
#include <string.h>

void developer_init(developer *dev, const char *name, const char *alias)
{
strncpy(dev->name, name, strlen(name) +1);
strncpy(dev->alias, alias, strlen(alias) +1);
}

