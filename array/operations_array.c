/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:19:53 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/15 11:30:07 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list *a)
{
	int	swap;

	swap = a[0].value;
	a[0].value = a[1].value;
	a[1].value = swap;
	swap = a[0].size;
	a[0].size = a[1].size;
	a[1].size = swap;
}
void	sa(t_list *a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_list *b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_list *a, t_list *b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}

void	push(t_list *a, t_list *b)
{
	int	i;

	i = 0;
	while (b[i].position)
		i++;
	b[i].position = i + 1;
	while (i > 0)
	{
		b[i].value = b[i - 1].value;
		b[i].size = b[i - 1].size;
		i--;
	}
	b[i].value = a[i].value;
	b[i].size = a[i].size;
	while (a[i].position)
	{
		a[i].value = a[i + 1].value;
		a[i].size = a[i + 1].size;
		i++;
	}
	a[i - 1].position = 0;
}
void	pb(t_list *a, t_list *b)
{
	push(a, b);
	write(1, "pb\n", 3);
}

void	pa(t_list *a, t_list *b)
{
	push(b, a);
	write(1, "pa\n", 3);
}
