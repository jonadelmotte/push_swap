/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:19:53 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/21 15:48:10 by jdelmott         ###   ########.fr       */
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
