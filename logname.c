#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int main(void)
{
    char *str;
 
    assert((str = getenv("LOGNAME")) != NULL);
    printf("Value of \"LOGNAME Environmemt Variable\" : %s\n", str);
 
 
    return 0;
}
