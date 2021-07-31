int	ft_is_alphanumeric(char c);
int	ft_is_uppercase(char c);
int	ft_is_lowercase(char c);

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	*at;
	char	*ant;

	i = 0;
	if (ft_is_lowercase(str[i]))
		str[i] -= 32;
	while (str[++i])
	{
		at = &str[i];
		ant = &str[i - 1];
		if (!ft_is_alphanumeric(*ant) && ft_is_lowercase(*at))
			*at -= 32;
		else if (ft_is_alphanumeric(*ant) && ft_is_uppercase(*at))
			*at += 32;
	}
	return (str);
}

int	ft_is_alphanumeric(char c)
{
	return (ft_is_lowercase(c) || ft_is_uppercase(c) || (c >= '0' && c <= '9'));
}

int	ft_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}
