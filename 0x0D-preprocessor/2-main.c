#include <stdio.h>

/*
 * Description: that prints the name of the file it was compiled from
 */
int main(void)
{
printf("%s\n", __FILE__);
return 0;
}
