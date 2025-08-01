/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:37:22 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/01 18:42:06 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"

typedef struct stack
{
	char	name;
	int		*arr;
	int		top;
}	t_stack;

typedef struct target
{
	int		*target;
	int		*cost;
	int		top;
}	t_target;

//memory.c
void	alloc_stacks(int argc, t_stack *a, t_stack *b);
void	exit_safely(t_stack *a, t_stack *b, int status);
//operations
void	push(t_stack *target, t_stack *src);
void	fill(t_stack *target, int n);
void	dump(int *tab, int len, t_stack *a);
void	rotate(t_stack *stack);
void	reverse_rotate(t_stack *stack);
void	swap(t_stack *stack);
//parsing.c
int		size(double num);
void	parse(char **str, int **tab, unsigned int *len);
int		parse_single(char *arg, int *tab, unsigned int len);
void	parse_full(int argc, char *argv[], t_stack *a, t_stack *b);
//stack_compare.c
int		compare(int a, int j);
//stack_check.c
int		isfull(t_stack stack, int len);
int		isempty(t_stack stack);
int		isordered(t_stack stack);
//push_swap.c
void	print_stack(t_stack stackA, t_stack stackB);
//tiny_sort.c
int		biggest(t_stack stack);
int		smallest(t_stack stack);
void	tiny_sort(t_stack *stack);
//target_sort.c
int		closest(t_stack a, int number);
int		target(t_stack a, int number);
int		cost(t_stack a, int pos);
void	lift(t_stack *a, int pos);
int		cheapest(t_target t);
void	target_sort(t_stack *a, t_stack *b);

#endif
