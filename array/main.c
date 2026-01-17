/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 09:33:19 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/17 14:33:54 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*init_b(int size)
{
	t_list	*list;
	int	i;

	i = 0;
	list = malloc(sizeof(t_list) * size);
	if (!list)
		exit(1);
	while (i <= size)
	{
		list[i].exist = 0;
		i++;
	}
	return (list);
}

int	main(int argc, char *argv[])
{
	t_list	*listA;
	t_list	*listB;
	int		size;
	int		i;

	i = 0;
	if (argc == 1)
		return (0);
	listA = parsing(argc, argv);
	size = strlen_list(listA); // haha tt changer dans le parcing je crois bien.
	listB = init_b(size);
	sort_A(listA);
	algo_verif(size, listA, listB);
	/*while (listA[i].exist)
	{
		printf("value1 = %i, position1 = %i, size1 = %i, exist1 = %i\n", listA[i].value,
			listA[i].position, listA[i].size, listA[i].exist);
		i++;
	}
	printf("4 = %i\n", listB[4].value);
	i = 0;
	printf("\n");
	while (listB[i].position)
	{
		printf("value2 = %i, position2 = %i, exist2 = %i\n", listB[i].value,
			listB[i].position, listB[i].exist);
		i++;
	}*/
	free(listA);
	free(listB);
	return (0);
}
