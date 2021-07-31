void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	if (*b == 0)
	{
		*a = '\0';
		*b = '\0';
		return ;
	}
	tmp = *a;
	*a = tmp / *b;
	*b = tmp % *b;
}
