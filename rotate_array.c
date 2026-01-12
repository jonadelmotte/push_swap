/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:15:13 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/12 19:46:58 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list *a)
{
	int	i;
	int	begin;
	int	size;

	size = strlen_list(a);
	i = 0;
	begin = a[i].value;
	while (i < size - 1)
	{
		a[i].value = a[i + 1].value;
		i++;
	}
	a[i].value = begin;
}

void	rr(t_list *a, t_list *b)
{
	ra(a);
	ra(b);
}

void	rra(t_list *a)
{
	int	end;
	int	size;

	size = strlen_list(a) - 1;
	end = a[size].value;
	while (size)
	{
		a[size].value = a[size - 1].value;
		size--;
	}
	a[size].value = end;
}

void	rrr(t_list *a, t_list *b)
{
	rra(a);
	rra(b);
}
