/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 09:29:28 by csilva            #+#    #+#             */
/*   Updated: 2025/12/22 13:29:41 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char *av[])
{
	if (ac > 1)
	{
		int	i;
		int	j;

		i = 1;
		while (i < ac)
		{
			if (!parser(av[i]))
				return (print_error);
			i++;
		}
		i = 1;
	}	
}


/* 2 1 4 6 7 8 	 	    asdasdsad
	parse       		    parse
	atol                      invalid
	check                       error msg
	check repetitions
	 |				
	\/
	stack a */