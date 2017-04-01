#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*s1p;

	s1p = s1;
	s1p += ft_strlen(s1);
	ft_strcpy(s1p, s2);
	return s1;
}
