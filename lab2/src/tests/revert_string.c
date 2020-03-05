#include "revert_string.h"

void RevertString(char *str)
{
    int len = 0;
	while(*(str + len)!='\0') 
    {
        ++len;
    }
    int i;
    for(i = 0; i < (int)(len / 2); i++)
    {
        char temp = *(str + i);
        *(str + i) = *(str + len - i - 1);
        *(str + len - i - 1) = temp;
    }
    return;
}

