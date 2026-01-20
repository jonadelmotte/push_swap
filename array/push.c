/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 11:22:15 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/20 11:23:04 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list *a, t_list *b)
{
	int	i;

	i = strlen_list(b);
	b[i].position = i + 1;
	b[i].exist = 1;
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
	a[i - 1].exist = 0;
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