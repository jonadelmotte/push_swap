/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:15:13 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/14 19:14:14 by jdelmott         ###   ########.fr       */
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
	write(1, "ra\n", 3);
}

void	rb(t_list *a)
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
	write(1, "rb\n", 3);
}

void	rr(t_list *a, t_list *b)
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
	size = strlen_list(b);
	i = 0;
	begin = b[i].value;
	while (i < size - 1)
	{
		b[i].value = b[i + 1].value;
		i++;
	}
	b[i].value = begin;
	write(1, "rr\n", 3);
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
	write(1, "rra\n", 4);
}

void	rrb(t_list *a)
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
	write(1, "rrb\n", 4);
}

void	rrr(t_list *a, t_list *b)
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
	size = strlen_list(b) - 1;
	end = b[size].value;
	while (size)
	{
		b[size].value = b[size - 1].value;
		size--;
	}
	b[size].value = end;
	write(1, "rrr\n", 4);
}
