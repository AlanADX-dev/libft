#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;
	
	d = dest;
	s = src;
	
	if (dest < src)
	{
		while (n--)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	else
	{
		d = dest + n - 1;
		s = src + n - 1;
		while (n--)
		{
			*d = *s;
			d--;
			s--;
		}
	}
	return dest;
}
