/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:19:53 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/14 19:13:56 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *a)
{
	int	swap;

	swap = a[0].value;
	a[0].value = a[1].value;
	a[1].value = swap;
	write(1, "sa\n", 3);
}

void	sb(t_list *a)
{
	int	swap;

	swap = a[0].value;
	a[0].value = a[1].value;
	a[1].value = swap;
	write(1, "sb\n", 3);
}

void	ss(t_list *a, t_list *b)
{
	int	swap;

	swap = a[0].value;
	a[0].value = a[1].value;
	a[1].value = swap;
	swap = b[0].value;
	b[0].value = b[1].value;
	b[1].value = swap;
	write(1, "ss\n", 3);
}

void	pb(t_list *a, t_list *b)
{
	int	i;

	i = 0;
	while (b[i].position)
		i++;
	b[i].position = i + 1;
	while (i > 0)
	{
		b[i].value = b[i - 1].value;
		i--;
	}
	b[i].value = a[i].value;
	while (a[i].position)
	{
		a[i].value = a[i + 1].value;
		i++;
	}
	a[i - 1].position = 0;
	write(1, "pb\n", 3);
}

void	pa(t_list *a, t_list *b)
{
	int	i;

	i = 0;
	while (a[i].position)
		i++;
	a[i].position = i + 1;
	while (i > 0)
	{
		a[i].value = a[i - 1].value;
		i--;
	}
	a[i].value = b[i].value;
	while (b[i].position)
	{
		b[i].value = b[i + 1].value;
		i++;
	}
	b[i - 1].position = 0;
	write(1, "pa\n", 3);
}
