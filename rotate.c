/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:15:13 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/22 15:01:08 by jdelmott         ###   ########.fr       */
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
