#include <stdio.h>
#include "developer.h"

#include <stdlib.h>
#include <string.h>

void developer_init(developer *const dev, const char *name)
{
strncpy(dev->name, name, strlen(name) +1);
}
void developer_add_alias(developer *const dev, const char *alias)
{
strncpy(dev->alias, alias, strlen(alias) +1);
}
