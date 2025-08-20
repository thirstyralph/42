/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:37:22 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/04 19:13:49 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
//Operation type (Decimals)
# define OP_PUSH	10
# define OP_SWAP	20
# define OP_ROT		30
# define OP_REV		40
//Stack (units)
# define STACK_A	1
# define STACK_B	2
# define STACK_BOTH	3
# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"

typedef struct stack
{
	char	id;
	int		*arr;
	int		top;
}	t_stack;
/*
typedef struct target
{
	int		target[MAX_SIZE];
	int		cost[MAX_SIZE];
	int		top;
}	t_target;
*/
//operations
char	push(t_stack *target, t_stack *src);
void	fill(t_stack *target, int n);
char	rotate(t_stack *stack);
char	reverse_rotate(t_stack *stack);
char	swap(t_stack *stack);
char	append_char(char **str, char c);
char	append_str(char **s1, char *s2);
//parsing.c
int		is_int(char *str);
int		is_in_int_range(const char *str);
void	parse(t_stack *a, t_stack *b, int argc, char *argv[]);
//error.c
void	exit_safely(t_stack *a, t_stack *b);
//sorting
char	sort_two(t_stack *a);

/*
void	dump(int argc, char **argv, t_stack *a);
int		size(double num);
void	parse(char **str, int **tab, int *len);
//stack_compare.c
int		compare(int a, int j);
//stack_check.c
int		isfull(t_stack stack);
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
*/
#endif
