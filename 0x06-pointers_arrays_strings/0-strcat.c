#include <stdio.h>
char *_strcat(char *dest, char *src)
{
	dest[]="hello";
	src[]="world\n";
	char *ptr;

    printf("%s\n", dest);
    printf("%s", src);
    ptr = strcat(dest, src);
    printf("%s", dest);
    printf("%s", src);
    printf("%s", ptr);
	return (dest);
}
