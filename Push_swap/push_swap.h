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
# define MAX_SIZE 100
# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"

typedef struct stack
{
	int	arr[MAX_SIZE];
	int	top;
} t_stack;

#endif
