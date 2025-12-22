/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:26:22 by csilva            #+#    #+#             */
/*   Updated: 2025/12/22 14:35:24 by csilva           ###   ########.fr       */
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
			if (!ft_isdigit(s[i][j]) && !(s[i][j] == '-') && !(s[i][j] == '+') &&
				!(s[i][j] == 32))
				return (1);
			if ((s[i][j] == '-' && s[i][j + 1] == '-') || (s[i][j] == '+' &&
					 s[i][j + 1] == '+'))
				return (1);
			if ((s[i][j] == '-' && s[i][j + 1] == '+') || (s[i][j] == '+' &&
					 s[i][j + 1] == '-'))
				return (1);
			if (ft_isdigit(s[i][j]) && (s[i][j + 1] == '-' || s[i][j + 1] == '+'))
				return (1);
			if ((s[i][j] == '-' || s[i][j] == '+') && !(ft_isdigit(s[i + 1])))
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

	while (s[i] >= 9 && s[i] <= 13 || s[i] == 32)
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

int	validate_numbers(int ac, char *s)
{
	long	j;
	int		i;
	int		arg;

	i = 0;
	arg = 1;
	while (arg < ac)
	{
		while (s[i])
		{
			j = ft_atol(&s[i]);
			if (j > 2147483647 || j < -2147483648)
				return (1);
			while (ft_isdigit(s[i]) || s[i] == '-' || s[i] == '+')
				i++;
		}
		arg++;
	}
	return (0);
}

int	parser(int ac, char *av[])
{
	int	i;

	i = 1;
	if (validate_input(ac, av))
		return (1);
	while (i < ac)
	{
		if (validate_numbers(av[i]))
			return (1);
		i++;
	}
}
