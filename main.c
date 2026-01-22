/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 09:33:19 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/22 14:58:35 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*init_b(int size)
{
	t_list	*list;
	int		i;

	i = 0;
	list = malloc(sizeof(t_list) * size);
	if (!list)
		exit(1);
	while (i < size)
	{
		list[i].exist = 0;
		list[i].value = 0;
		list[i].position = 0;
		list[i].size = 0;
		i++;
	}
	return (list);
}

int	main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;
	int		size;

	if (argc == 1)
		return (0);
	a = parsing(argc, argv);
	size = strlen_list(a);
	b = init_b(size);
	sort_a(a);
	algo_verif(size, a, b);
	free(a);
	free(b);
	return (0);
}
