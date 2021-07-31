void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;
	int	f;

	i = 0 ;
	f = size - 1 ;
	while (i < f)
	{
		aux = tab[i];
		tab[i] = tab[f];
		tab[f] = aux;
		i++;
		f--;
	}
}
