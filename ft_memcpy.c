#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	d = dest;

	const unsigned char *s;
	s = src;

	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}

	return dest;
}
