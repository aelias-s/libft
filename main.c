#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *dest = "tripouille";
    char *src = "patata";
    size_t n = ft_strlcpy(dest, src, 4);
    printf("%s : %lu", dest, n);
    //free(s);

    return(0);
}
