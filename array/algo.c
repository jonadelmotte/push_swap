/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:03:53 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/21 15:48:19 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	smart_rotate(t_list *a, int schr)
{
	int	size;
	int	i;

	i = 0;
	size = strlen_list(a) / 2;
	debug_rotate(a, schr);
	while (a[i].value != schr)
		i++;
	if (a[i].position - size <= 0)
	{
		while (a[0].value != schr)
			ra(a);
	}
	else
	{
		while (a[0].value != schr)
			rra(a);
	}
}

void	smart_rotate_B(t_list *a, int schr)
{
	int	size;
	int	i;

	i = 0;
	size = strlen_list(a) / 2;
	while (a[i].value != schr)
		i++;
	if (a[i].position - size <= 0)
	{
		while (a[0].value != schr)
			rb(a);
	}
	else
	{
		while (a[0].value != schr)
			rrb(a);
	}
}

int	find_smaller(t_list *a)
{
	int	i;
	int	smaller;

	i = 0;
	smaller = a[i].value;
	while (a[i].position)
	{
		if (a[i].value < smaller)
			smaller = a[i].value;
		i++;
	}
	return (smaller);
}

int	find_biggest(t_list *a)
{
	int	i;
	int	biggest;

	i = 0;
	biggest = a[i].value;
	while (a[i].position)
	{
		if (a[i].value > biggest)
			biggest = a[i].value;
		i++;
	}
	return (biggest);
}

void	debug_rotate(t_list *a, int schr)
{
	int	i;

	i = 0;
	if (a[i].value == schr)
		return ;
	while (a[i].position)
	{
		if (a[i].value == schr)
			return ;
		i++;
	}
	write(1, "jona t'a merde (smart_rotate)\n", 15);
	exit(0);
}
