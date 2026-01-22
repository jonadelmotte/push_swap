/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revers_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 11:25:30 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/21 17:05:56 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
