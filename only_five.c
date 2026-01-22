/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:00:04 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/22 09:22:58 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	five_next(t_list *a, t_list *b)
{
	if (intcmp(a[2].value, b[0].value) < 0 && intcmp(a[3].value,
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
	five_next(a, b);
}
