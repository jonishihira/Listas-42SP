#include <unistd.h>

void	ft_print_number(int number);

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 0;
	while (number1 <= 98)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			ft_print_number(number1);
			write(1, " ", 1);
			ft_print_number(number2);
			if (number1 + number2 < 98 + 99)
				write(1, ", ", 2);
			number2++;
		}
		number1++;
	}
}

void	ft_print_number(int number)
{
	char	digit1;
	char	digit2;

	digit1 = (number / 10) + '0';
	digit2 = (number % 10) + '0';
	write (1, &digit1, 1);
	write (1, &digit2, 1);
}

void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
	return (0);
}