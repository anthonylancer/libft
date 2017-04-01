#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int	i;
	char	*str;

	i = ft_strlen(s1);
	str = (char *) malloc((i + 1) * sizeof(char));
	if(!str)
		return NULL;
	return ft_strcpy(str, s1);
}
