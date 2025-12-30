/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 09:29:31 by csilva            #+#    #+#             */
/*   Updated: 2025/12/30 16:43:02 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
	unsigned int	capacity;
	int				size;
	int				*array;
}	t_stack;

int		parser(int ac, char *av[], long **array);
int		ft_isdigit(int c);
int		ft_signal(char c);
int		ft_isspace(int c);
char	*ft_getnextnum(char *s);
int		ft_countnumbers(char *s);
int		push_swap(int ac, char *av[]);
long	ft_atol(char *s);

#endif