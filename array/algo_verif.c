/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_verif.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:00:20 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/20 11:48:51 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_verif(int size, t_list *listA, t_list *listB)
{
	if (is_already_sorted(listA) == 1)
		return ;
	if (size <= 5)
		small_algo_verif(size, listA, listB);
	else if (size <= 400)
		algo_big(listA, listB, 4);
	else if (size >= 400)
		algo_big(listA, listB, 9);
}

void	small_algo_verif(int size, t_list *listA, t_list *listB)
{
	if (size == 2)
		two(listA);
	if (size == 3)
		three(listA);
	if (size == 4)
		four(listA, listB, 0);
	if (size == 5)
		five(listA, listB);
}

int	is_already_sorted(t_list *a)
{
	int	i;

	i = 0;
	while (a[i].exist == 1)
	{
		if (a[i].value > a[i + 1].value && a[i + 1].exist == 1)
			return (0);
		i++;
	}
	return (1);
}
