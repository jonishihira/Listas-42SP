#include <unistd.h>

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	d = '1';
	u = '2';
	while (c <= '7')
	{
		while (d <= '8')
		{
			while (u <= '9')
			{
				write (1, &c, 1);
				write (1, &d, 1);
				write (1, &u, 1);
				if (!((c == '7') && (d == '8') && (u == '9')))
					write (1, ", ", 2);
				u++;
			}
			u = ++d + 1;
		}
		d = ++c + 1;
		u = d + 1;
	}
}

#include <stdio.h>

void	ft_print_comb(void);

int	main(void)
{
	ft_print_comb();
	return (0);
}