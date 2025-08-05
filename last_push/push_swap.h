/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 22:09:22 by ranavarr          #+#    #+#             */
/*   Updated: 2025/08/05 05:22:15 by ranavarr         ###   ########.fr       */
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
# include "./libft/libft.h"

/*
typedef struct s_pair
{
	struct	*s_stacka;
	struct	*s_stackb;
	char 	*movements;
}	t_pair;
*/
typedef struct s_cost
{
	int	pos;
	int	ra;
}
typedef struct s_stack
{
	int	*arr;
	int	top;
	int	id;
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
//cost.c
int		middle(int n);
int		single_cost(int pos, int top, int middle);
int		cost(t_stack a, t_stack b, int ta, int tb);

#endif
