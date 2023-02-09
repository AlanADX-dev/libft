#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	
	if (size == 0)
		return ft_strlen(src);
	
	len = 0;
	while (src[len] && len + 1 < size)
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return ft_strlen(src);
}
