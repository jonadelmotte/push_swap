/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:15:13 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/15 11:20:38 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list *a)
{
	int	i;
	int	begin;
	int	begin_size;
	int	size;

	size = strlen_list(a);
	i = 0;
	begin = a[i].value;
	begin_size = a[i].size;
	while (i < size - 1)
	{
		a[i].value = a[i + 1].value;
		a[i].size = a[i + 1].size;
		i++;
	}
	a[i].value = begin;
	a[i].size = begin_size;
}
void	ra(t_list *a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_list *b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_list *a, t_list *b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
void	revers_rotate(t_list *a)
{
	int	end;
	int	end_size;
	int	size;

	size = strlen_list(a) - 1;
	end = a[size].value;
	end_size = a[size].size;
	while (size)
	{
		a[size].value = a[size - 1].value;
		a[size].size = a[size - 1].size;
		size--;
	}
	a[size].value = end;
	a[size].size = end_size;
}

void	rra(t_list *a)
{
	revers_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_list *b)
{
	revers_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list *a, t_list *b)
{
	revers_rotate(a);
	revers_rotate(b);
	write(1, "rrr\n", 4);
}
