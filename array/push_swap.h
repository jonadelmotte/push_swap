/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:43:52 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/14 15:28:04 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <unistd.h>

typedef struct s_list
{
	int	value;
	int	position;
}		t_list;

// utils(libft)
int		ft_atoi(const char *nptr);
int		intcmp(int a, int b);
int		ft_isdigit(int c);
size_t	ft_strlen(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
char	**ft_split(const char *s, char c);
int		count_words(char const *s, char c);
int		strlen_list(t_list *list);

// parsing
t_list	*parsing(int argc, char *argv[]);
t_list	*init_list(int size, char *data[]);
t_list	*init_split(char *split[], char *data);
void	number_repeat(t_list *a);

// fonctions de trie
void	sa(t_list *a);
void	sb(t_list *a);
void	ss(t_list *a, t_list *b);
void	pb(t_list *a, t_list *b);
void	pa(t_list *a, t_list *b);
void	ra(t_list *a);
void	rb(t_list *a);
void	rr(t_list *a, t_list *b);
void	rra(t_list *a);
void	rrb(t_list *a);
void	rrr(t_list *a, t_list *b);

// small algo
void	algo_verif(int size, t_list *listA, t_list *listB);
void	small_algo_verif(int size, t_list *listA, t_list *listB);
void	two(t_list *list);
void	three(t_list *a);
void	four(t_list *a, t_list *b, int i);
void	five(t_list *a, t_list *b);

// algo
void	smart_rotate(t_list *a, int schr);
int		find_smaller(t_list *a);
int		find_biggest(t_list *a);
void	algo_test(t_list *a, t_list *b);

// push swap visualiseur
// raditz (pas suffisant)

#endif
