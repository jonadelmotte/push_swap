/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:43:52 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/22 15:00:02 by jdelmott         ###   ########.fr       */
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
	int		value;
	int		position;
	int		size;
	int		exist;
}			t_list;

// utils(libft)
long int	ft_atoi(const char *nptr);
long int	intcmp(long int a, long int b);
int			ft_isdigit(int c);
size_t		ft_strlen(const char *s);
void		*ft_calloc(size_t nmemb, size_t size);
void		ft_bzero(void *s, size_t n);
char		**ft_split(const char *s, char c);
int			count_words(char const *s, char c);
int			strlen_list(t_list *list);

// parsing
t_list		*parsing(int argc, char *argv[]);
t_list		*init_list(int size, char *data[]);
t_list		*init_split(char *split[], int size);
void		number_repeat(t_list *a);
void		limits(t_list *a, char *data);
void		limits_split(char *split[], int size);
void		parsing_single(char *argv);
void		parsing_verif(int argc, char *argv[]);

// fonctions de trie
void		swap(t_list *a);
void		sa(t_list *a);
void		sb(t_list *a);
void		ss(t_list *a, t_list *b);

void		pb(t_list *a, t_list *b);
void		pa(t_list *a, t_list *b);

void		rotate(t_list *a);
void		ra(t_list *a);
void		rb(t_list *a);
void		rr(t_list *a, t_list *b);

void		revers_rotate(t_list *a);
void		rra(t_list *a);
void		rrb(t_list *a);
void		rrr(t_list *a, t_list *b);

// small algo
void		algo_verif(int size, t_list *a, t_list *b);
void		small_algo_verif(int size, t_list *a, t_list *b);
int			is_already_sorted(t_list *a);
void		two(t_list *list);
void		three(t_list *a);
void		four(t_list *a, t_list *b, int i);
void		five(t_list *a, t_list *b);

// algo
void		smart_rotate(t_list *a, int schr);
void		smart_rotate_b(t_list *a, int schr);
int			find_smaller(t_list *a);
int			find_biggest(t_list *a);

void		debug_rotate(t_list *a, int schr);
void		algo_big(t_list *a, t_list *b, int div);
void		sort_b(t_list *a, t_list *b, int pushed);
void		push_back(t_list *a, t_list *b);

// sort
int			find_next_smallest(t_list *a, int last_smallest);
int			find_next_biggest(t_list *a, int last_biggest);
void		sort_a(t_list *a);
int			isempty(t_list *a);

// finder
int			find_sorted(t_list *a, int begin, int end);
int			exist(t_list *a, int begin, int end);

#endif
