#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pos;
	
	pos = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
			pos = (char *)s;
		s++;
	}
	if (*s == (char)c)
		pos = (char *)s;
	return (pos);
}
