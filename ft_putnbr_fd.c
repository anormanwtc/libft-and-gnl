
#include "libft.h"

void	ft_putnbr_nd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else 
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		if ((n / 10) > 0)
			ft_putnbr_nd((n / 10), fd);
		c = (n % 10) + '0';
		write(fd, &c, 1);
}