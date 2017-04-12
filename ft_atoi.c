#include "libft.h"

int	ft_atoi(const char *str)
{
	int sign;
	int res;

	sign = 1;
	res = 0;
	while (*str)
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
		else if (*str == '+')
		{
			sign = 1;
			str++;
		}
		else if (*str >= '0' && *str <= '9')
			break;
		else
			str++;
	while (ft_isdigit(*str))
		res = (res * 10) + *str++ - '0';
	return res * sign;
}
