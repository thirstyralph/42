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
# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"

typedef struct stack
{
	unsigned int	max_size;
	int				top;
	int				*items;
}	t_stack;

#endif
