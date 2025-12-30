/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 09:29:28 by csilva            #+#    #+#             */
/*   Updated: 2025/12/30 17:11:36 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* void print_array(long *array, int size)
{
	int i = 0;
	printf("size: %d\n", size);
	fflush(stdout);
	while(i < size - 1)
	{
		printf("%ld\t%d\n", array[i], i);
		fflush(stdout);
		i++;
	}
} */

int	main(int ac, char *av[])
{
	long *array;
	if (ac > 1)
	{
		if (parser(ac, av, &array))
			return (write (1, "error", 5));
		/* print_array(array, ac); */
	}
	return (0);
}

/* 2 1 4 6 7 8 	 	    asdasdsad
	parse       		    parse
	atol                      invalid
	check                       error msg
	check repetitions
	 |				
	\/
	stack a */