/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_parser.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:26:22 by csilva            #+#    #+#             */
/*   Updated: 2025/12/30 17:09:06 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	validate_input(int ac, char *s[])
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (s[i][j])
		{
			if (ft_isdigit(s[i][j]) && ft_signal(s[i][j]) &&
				!ft_isspace(s[i][j]))
				return (1);
			if (!ft_signal(s[i][j]) && ft_isdigit(s[i][j + 1]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

long	ft_atol(char *s)
{
	long	res;
	int		sign;
	int		i;

	i = 0;
	res = 0;
	sign = 1;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10;
		res = res + s[i] - '0';
		i++;
	}
	return (res * sign);
}

int	validate(int ac, char *av[], long **array)
{
	int	nlen;
	int	i;

	nlen = 0;
	i = 1;
	if (validate_input(ac, av))
		return (1);
	while (av[i])
	{
		nlen += ft_countnumbers(av[i]);
		i++;
	}
	*array = malloc(nlen * sizeof(long));
	if (!*array)
		return (1);
	return (0);
}

int	parser(int ac, char *av[], long **array)
{
	int	i;
	int j;
	int	nlen;

	i = 1;
	j = 0;
	nlen = 0;
	if (validate(ac, av, array))
		return (1);
	while (av[i])
	{
		(*array)[j] = ft_atol(av[i]);
		j++;
		av[i] = ft_getnextnum(av[i]);
		if(!av[i])
			i++;
	}
	return (0);
}
