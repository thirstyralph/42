/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 22:09:22 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/08 01:41:59 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./include/libft/libft.h"
# include "./include/ft_printf/ft_printf.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_movements
{
	int	ra;
	int	rra;
	int	rb;
	int	rrb;
	int	rrr;
	int	rr;
}	t_mov;

typedef struct s_stack
{
	int		*arr;
	int		top;
	char	name;
	int		max_size;
}	t_stack;

//hidden_operations.c
void	_swap(t_stack *stack);
void	_rotate(t_stack *stack);
void	_reverse_rotate(t_stack *stack);
void	_push(t_stack *target, t_stack *source);
//operations.c
void	swap(t_stack *stack);
void	rotate(t_stack *stack);
void	reverse_rotate(t_stack *stack);
void	push(t_stack *target, t_stack *source);
//double_operations.c
void	double_rotate(t_stack *a, t_stack *b);
void	double_swap(t_stack *a, t_stack *b);
void	double_reverse(t_stack *a, t_stack *b);
//is_sorted.c
int		is_sorted(t_stack stack);
//position.c
int		middle(int n);
int		single_cost(int pos, int top, int middle);
int		median(int top, int target_a);
int		max(int a, int b);
//cost.c
int		optimised_cost(int top_a, int top_b, int target_a, int target_b);
int		*calculate_cost(t_stack a, t_stack b);
//parse.c
int		*arrtoi(int argc, char *argv[]);
int		check_repetition(int top, int *tab);
int		*parse(int argc, char *argv[]);
//target.c
int		target(t_stack a, int n);
//t_cost	calculate_targets(t_stack a, t_stack b);
//perform_rotation.c
void	do_rotation(t_stack *a, t_stack *b, t_mov movs);
void	do_reverse_rotation(t_stack *a, t_stack *b, t_mov movs);
void	perform_rotations(t_stack *a, t_stack *b, t_mov movs);
//index.c
int		biggest(int *tab, int top);
int		next(int *tab, int top, int prev);
int		indexate(int *original, int top);
//sort_three.c
int		biggest(int *arr, int top);
int		smallest(int *arr, int top);
void	sort_three(t_stack *a);
//sort_two.c
void	sort_two(t_stack *a);
//turk.c
void	move_all_but_three(t_stack *a, t_stack *b);
void	turk(t_stack *a, t_stack *b);
//plan_and_move.c
void	plan_and_move(int pos, t_stack *a, t_stack *b);
//detrmine_ops
void	determine_single_ops_a(t_mov *seq, int middle, int top, int pos);
void	determine_single_ops_b(t_mov *seq, int middle, int top, int pos);
void	calculate_single_optinization(int *a, int *b, int *double_op);
void	optimise(t_mov *seq);
t_mov	calculate_movs(int top_a, int top_b, int target_a, int target_b);
//print_stack.c
void	print_stacks(t_stack a, t_stack b);
void	print_operations(t_mov m);

#endif
