int		ft_checkbase(char *base)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (baselen == 0 || baselen == 1)
		return (0);
	while (base[i])
	{
		if (base[i] < 32 || base[i] > 126)
			return (0);
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
