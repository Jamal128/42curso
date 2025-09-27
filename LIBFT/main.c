#include "libft.h"


#include <stdio.h>
int	main()
{
	char const *str = "---------ggg-kkk--";
	char const *s = "-";
	char *res = ft_strtrim(str, s);
	printf("%s", res);
}