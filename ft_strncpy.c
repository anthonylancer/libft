#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*s;
	char	*d;

	d = dst;
	s = (char *)src;
	while(len--)
		if(!*s)
			*d++ = '\0';
		else
			*d++ = *s++;
	
	return dst;
}
