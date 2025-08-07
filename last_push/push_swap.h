/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 22:09:22 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/07 22:24:56 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define OP_PUSH	10
# define OP_SWAP	20
# define OP_ROT		30
# define OP_REV		40
# define ID_A		1
# define ID_B		2
# define ID_BOTH	3
# include <stdlib.h>
# include <unistd.h>

/*
typedef struct s_pair
{
	struct	*s_stacka;
	struct	*s_stackb;
	char 	*movements;
}	t_pair;
*/

typedef struct s_movements
{
	int	ra;
	int	rra;
	int	rb;
	int	rrb;
	int	rrr;
	int	rr;
}	t_mov;

typedef struct s_targets
{
	int	*target;
	int	*cost;
	int	top;
}	t_cost;

typedef struct s_stack
{
	int		*arr;
	int		top;
	char	id;
}	t_stack;

//operations.c
char	swap(t_stack *stack);
char	rotate(t_stack *stack);
char	reverse_rotate(t_stack *stack);
char	push(t_stack *target, t_stack *source);

//double_operations.c
char	double_rotate(t_stack *a, t_stack *b);
char	double_swap(t_stack *a, t_stack *b);
char	double_reverse(t_stack *a, t_stack *b);
//is_sorted.c
int		is_sorted(t_stack stack);
//position.c
int		middle(int n);
int		single_cost(int pos, int top, int middle);
int		median(int top, int target_a);
int		max(int a, int b);
//cost.c
int		optimised_cost(int top_a, int top_b, int target_a, int target_b);
void	calculate_cos(t_stack a, t_cost *cost);
//index.c
int		biggest(int *tab, int top);
int		next(int *tab, int top, int prev);
int		indexate(int *original, int top);
//parse.c
int		*arrtoi(int argc, char *argv[]);
int		check_repetition(int top, int *tab);
int		*parse(int argc, char *argv[]);
//target.c
int		target(t_stack a, int n);
t_cost	calculate_targets(t_stack a, t_stack b);
//perform.c
int		smallest(int *tab, int top);
void	do_rotation(t_stack *a, t_stack *b, t_mov movs);
void	do_reverse_rotation(t_stack *a, t_stack *b, t_mov movs);

#endif
