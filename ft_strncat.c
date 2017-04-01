#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*s1p;
	char	*s2p;

	s1p = s1;
	s2p = (char *)s2;
	s1p += ft_strlen(s1);
	while(n-- && *s2p)
		*s1p++ = *s2p++;
	*s1p = '\0';
	return s1;
}
