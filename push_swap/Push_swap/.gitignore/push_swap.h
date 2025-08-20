/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:37:22 by ranavarr          #+#    #+#             */
/*   Updated: 2025/07/22 18:45:04 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define MAX_SIZE INT_MAX
# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"

typedef struct stack
{
	int	arr[MAX_SIZE];
	int	top;
} t_stack;


// Parsing directory
void	push(t_stack *stack, int n);
void	rotate(t_stack *stack);
void	reverse_rotate(t_stack *stack);
void	swap(t_stack *stack, int n);
// Stack_check.c
int		isfull(t_stack stack);
int		isempty(t_stack stack);
int		isordered(t_stack stack);
// stack_compare.c
int		compare(int a, int j);
// parsing.c
int		repeats(int	*tab, unsigned int len, int num);
void	parse(char **str, int **tab, int **len);
int		size(double num);
int		not_int(char **str);



#endif
