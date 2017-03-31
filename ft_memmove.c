#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if(src > dst)
		ft_memcpy(dst, src, len);
	else
	{
		d += len - 1;
		s += len - 1;
		while(len--)
			*d-- = *s--;
	}
	return dst;
}
