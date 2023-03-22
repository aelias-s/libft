#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char s[] = "Ho la mu do";
	char **result = ft_split(s, ' ');
	int i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	
	return 0;
}
/*
	if (s1[0] == '\0')
		return ((char *)s1 + (ft_strlen(s1)));
		*/