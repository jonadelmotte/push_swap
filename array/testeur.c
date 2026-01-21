/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testeur.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:12:57 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/21 15:48:07 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*buffer_add_next(char *buffer, char add, char *temp)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	free(buffer);
	buffer = malloc(sizeof(char) * ((ft_strlen(temp) + 2)));
	if (!buffer)
		return (0);
	while (temp[i])
	{
		buffer[i] = temp[i];
		i++;
	}
	free(temp);
	buffer[i] = add;
	i++;
	buffer[i] = '\0';
	return (buffer);
}

char	*buffer_add(char *buffer, char add)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	temp = malloc(sizeof(char) * (ft_strlen(buffer) + 1));
	if (!temp)
		return (0);
	while (buffer[i])
	{
		temp[i] = buffer[i];
		i++;
	}
	temp[i] = '\0';
	return (buffer_add_next(buffer, add, temp));
}

char static	check_third(char first, char second)
{
	if (first == 'a' && second == 'b')
		return ('c');
	else if (first == 'd' && second == 'e')
		return ('f');
	else
		return ('i');
}

static char	*change_double(char *buffer, int index, char first, char second)
{
	int		i;
	int		j;
	char	*new;
	char	third;

	i = 0;
	j = 0;
	third = check_third(first, second);
	new = malloc(sizeof(char) * ft_strlen(buffer));
	if (!new)
		return (0);
	while (buffer[i])
	{
		if (i != index)
			new[j++] = buffer[i++];
		else
		{
			new[j] = third;
			i += 2;
			j++;
		}
	}
	new[j] = '\0';
	free(buffer);
	return (new);
}

char	*check_double(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i])
	{
		if ((buffer[i] == 'a' && buffer[i + 1] == 'b') || (buffer[i] == 'b'
				&& buffer[i + 1] == 'a'))
		{
			buffer = change_double(buffer, i, 'a', 'b');
			i = 0;
		}
		if ((buffer[i] == 'd' && buffer[i + 1] == 'e') || (buffer[i] == 'e'
				&& buffer[i + 1] == 'd'))
		{
			buffer = change_double(buffer, i, 'd', 'e');
			i = 0;
		}
		if ((buffer[i] == 'g' && buffer[i + 1] == 'h') || (buffer[i] == 'h'
				&& buffer[i + 1] == 'g'))
		{
			buffer = change_double(buffer, i, 'g', 'h');
			i = 0;
		}
		i++;
	}
	return (buffer);
}

static void	buffer_app_next(char *buffer, int i)
{
	if (buffer[i] == 'g')
		write(1, "rra\n", 4);
	if (buffer[i] == 'h')
		write(1, "rrb\n", 4);
	if (buffer[i] == 'i')
		write(1, "rrr\n", 4);
	if (buffer[i] == 'j')
		write(1, "pa\n", 3);
	if (buffer[i] == 'k')
		write(1, "pb\n", 3);
}

void	buffer_app(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == 'a')
			write(1, "sa\n", 3);
		if (buffer[i] == 'b')
			write(1, "sb\n", 3);
		if (buffer[i] == 'c')
			write(1, "ss\n", 3);
		if (buffer[i] == 'd')
			write(1, "ra\n", 3);
		if (buffer[i] == 'e')
			write(1, "rb\n", 3);
		if (buffer[i] == 'f')
			write(1, "rr\n", 3);
		buffer_app_next(buffer, i);
		i++;
	}
}

/* sa = a, sb = b, ss = c, ra = d, rb = e, rr = f, rra = g, rrb = h, rrr = i,
	pa = j, pb = k*/
