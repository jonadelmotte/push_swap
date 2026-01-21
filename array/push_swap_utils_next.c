/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_next.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:06:44 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/21 17:07:26 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*t;
	size_t			m;

	t = (unsigned char *)s;
	m = 0;
	while (m < n)
	{
		t[m] = '\0';
		m++;
	}
}
int	strlen_list(t_list *list)
{
	int	i;

	i = 0;
	while (list[i].exist == 1)
		i++;
	return (i);
}

int	intcmp(int a, int b)
{
	return (a - b);
}
