/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:59:55 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/14 19:14:24 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two(t_list *list)
{
	if (intcmp(list[0].value, list[1].value) > 0)
		ra(list);
	else
		return ;
}

void	three(t_list *a)
{
	if (intcmp(a[0].value, a[1].value) < 0 && intcmp(a[1].value, a[2].value) > 0
		&& intcmp(a[0].value, a[2].value) < 0)
	{
		rra(a);
		sa(a);
	}
	else if (intcmp(a[0].value, a[1].value) > 0 && intcmp(a[1].value,
			a[2].value) < 0 && intcmp(a[0].value, a[2].value) < 0)
		sa(a);
	else if (intcmp(a[0].value, a[1].value) > 0 && intcmp(a[1].value,
			a[2].value) < 0 && intcmp(a[0].value, a[2].value) > 0)
		ra(a);
	else if (intcmp(a[0].value, a[1].value) > 0 && intcmp(a[1].value,
			a[2].value) > 0 && intcmp(a[0].value, a[2].value) > 0)
	{
		ra(a);
		sa(a);
	}
	else if (intcmp(a[0].value, a[1].value) < 0 && intcmp(a[1].value,
			a[2].value) > 0 && intcmp(a[0].value, a[2].value) > 0)
		rra(a);
}

void	four(t_list *a, t_list *b, int i)
{
	if (!b[0].position)
		pb(a, b);
	three(a);
	if (intcmp(a[0].value, b[i].value) > 0)
		pa(a, b);
	else if (intcmp(a[0].value, b[i].value) < 0 && intcmp(a[1].value,
			b[i].value) > 0)
	{
		pa(a, b);
		sa(a);
	}
	else if (intcmp(a[1].value, b[i].value) < 0 && intcmp(a[2].value,
			b[i].value) > 0)
	{
		rra(a);
		pa(a, b);
		ra(a);
		ra(a);
	}
	else if (intcmp(a[2].value, b[i].value) < 0)
	{
		pa(a, b);
		ra(a);
	}
}

void	five(t_list *a, t_list *b)
{
	pb(a, b);
	pb(a, b);
	four(a, b, 0);
	if (intcmp(a[0].value, b[0].value) > 0)
		pa(a, b);
	else if (intcmp(a[0].value, b[0].value) < 0 && intcmp(a[1].value,
			b[0].value) > 0)
	{
		pa(a, b);
		sa(a);
	}
	else if (intcmp(a[1].value, b[0].value) < 0 && intcmp(a[2].value,
			b[0].value) > 0)
	{
		ra(a);
		pa(a, b);
		sa(a);
		rra(a);
	}
	else if (intcmp(a[2].value, b[0].value) < 0 && intcmp(a[3].value,
			b[0].value) > 0)
	{
		rra(a);
		pa(a, b);
		ra(a);
		ra(a);
	}
	else if (intcmp(a[3].value, b[0].value) < 0)
	{
		pa(a, b);
		ra(a);
	}
}
