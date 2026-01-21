/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_next.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:55:51 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/21 17:04:47 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_big(t_list *a, t_list *b, int div)
{
	int	divided;
	int	begin;
	int	end;
	int	size;

	size = strlen_list(a);
	divided = (size / div) + (size % div);
	begin = 1;
	end = divided;
	while (begin < size + 1)
	{
		while (exist(a, begin, end) == 1)
		{
			smart_rotate(a, find_sorted(a, begin, end));
			sort_B(a, b, a[0].value);
		}
		push_back(a, b);
		end += divided /* - (size % div)*/;
		begin += divided /* - (size % div)*/;
	}
	smart_rotate(a, find_smaller(a));
}

void	sort_B(t_list *a, t_list *b, int pushed)
{
	if (pushed < find_smaller(b))
	{
		smart_rotate_B(b, find_biggest(b));
		pb(a, b);
	}
	else
	{
		smart_rotate_B(b, find_next_biggest(b, pushed));
		pb(a, b);
	}
}

void	push_back(t_list *a, t_list *b)
{
	smart_rotate_B(b, find_biggest(b));
	smart_rotate(a, find_next_biggest(a, find_biggest(b)));
	ra(a);
	while (b[0].position)
	{
		pa(a, b);
	}
}
