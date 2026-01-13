/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:19:53 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/12 19:41:28 by jdelmott         ###   ########.fr       */
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
	sa(a);
	sa(b);
	write(1, "ss\n", 3);
}

void	pb(t_list *a, t_list *b)
{
	if (!a[0].position)
		return ;
	b = push(a, b);
	a = push_back(a);
	write(1, "pb\n", 3);	
}

void	pa(t_list *a, t_list *b)
{
	if (!b[0].position)
		return ;
	a = push(b, a);
	b = push_back(b);
	write(1, "pa\n", 3);	
}