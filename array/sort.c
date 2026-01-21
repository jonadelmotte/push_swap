/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:02:04 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/21 15:48:17 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	isempty(t_list *a)
{
	if (a[0].exist == 0)
		return (1);
	return (0);
}

int	find_next_smallest(t_list *a, int last_smallest)
{
	int	i;
	int	smallest;

	i = 0;
	smallest = find_biggest(a);
	while (a[i].position)
	{
		if (a[i].value < smallest && a[i].value > last_smallest)
			smallest = a[i].value;
		i++;
	}
	return (smallest);
}

int	find_next_biggest(t_list *a, int last_biggest)
{
	int	i;
	int	biggest;

	i = 0;
	biggest = find_smaller(a);
	while (a[i].position)
	{
		if (a[i].value > biggest && a[i].value < last_biggest)
			biggest = a[i].value;
		i++;
	}
	return (biggest);
}

void	sort_A(t_list *a)
{
	int	i;
	int	size;
	int	next_smallest;

	i = 0;
	size = 1;
	next_smallest = find_smaller(a);
	while (a[i].value != next_smallest)
		i++;
	a[i].size = size;
	size++;
	i = 0;
	while (size < strlen_list(a) + 1)
	{
		next_smallest = find_next_smallest(a, next_smallest);
		i = 0;
		while (a[i].value != next_smallest)
			i++;
		a[i].size = size;
		size++;
	}
}
