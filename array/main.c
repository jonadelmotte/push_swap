/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 09:33:19 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/15 13:36:45 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*init_b(int size)
{
	t_list	*list;

	list = malloc(sizeof(t_list) * size);
	if (!list)
		exit(1);
	list[0].position = 0;
	list[0].value = 0;
	return (list);
}

int	main(int argc, char *argv[])
{
	t_list	*listA;
	t_list	*listB;
	int		size;
	int		i;

	i = 0;
	if (argc == 1 || argc == 2)
		return (0);
	listA = parsing(argc, argv);
	size = strlen_list(listA); // haha tt changer dans le parcing je crois bien.
	listB = init_b(size);
	sort_A(listA);
	algo_verif(size, listA, listB);
	/*while (listA[i].position)
	{
		printf("value1 = %i, position1 = %i, size1 = %i\n", listA[i].value,
			listA[i].position, listA[i].size);
		i++;
	}
	i = 0;
	printf("\n");
	while (listB[i].position)
	{
		printf("value2 = %i, position2 = %i\n", listB[i].value,
			listB[i].position);
		i++;
	}*/
	/*1if (listA)
		free(listA);
	if (listB)
		free(listB);*/
	return (0);
}
