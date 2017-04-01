#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s1p;
	unsigned char *s2p;

	s1p = (unsigned char *)s1;
	s2p = (unsigned char *)s2;
	while(n--)
		if(*s1p != *s2p)
			return (int)(*s1p - *s2p);
		else
		{
			s1p++;
			s2p++;
		}
	return 0;
}
