#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"
#include "push_swap.h"
#include <limits.h>
/*
int	isfull(t_stack stack)
{
	if (stack.top >= MAX_SIZE - 1)
		return (1);
	else
		return (0);
}

int	isempty(t_stack stack)
{
	if (stack.top == -1)
		return (1);
	else
		return (0);
}

void	push(t_stack *stack, int n)
{
	if (isfull(*stack) == 1)
		return ;
	stack->top++;
	stack->arr[stack->top] = n;
}
*/
void	swap(t_stack *stack, int n)
{
	int	temp;

	if (stack->top >= 1)
		return ;
	temp = stack->arr[stack->top];
	stack->arr[stack->top] = stack->arr[stack->top];
	stack->arr[stack->top] = temp;
}
/*
void	rotate(t_stack *stack)
{
	int	temp;

	if (isempty(*stack) == 1)
		return ;
	temp = stack->arr[0];
	ft_memmove(&stack->arr[0], &stack->arr[1], sizeof(int) * stack->top);
	stack->arr[stack->top] = temp;
}

void	reverse_rotate(t_stack *stack)
{
	int	temp;

	if (isempty(*stack) == 1)
		return ;
	temp = stack->arr[stack->top];
	ft_memmove(&stack->arr[1],
		 &stack->arr[0], sizeof(int) * stack->top);
	stack->arr[0] = temp;
}


void	print_stack(t_stack stackA, t_stack stackB)
{
	int	i;

	i = stackA.top;
	while (i >= 0)
	{
		ft_printf("%d pos: %d || %d pos %d\n",stackA.arr[i], 
				i, stackB.arr[i], i);
		i--;
	}
}

int main(void)
{
	t_stack	stackA;
	t_stack	stackB;
	
	stackA.top = -1;
	stackB.top = -1;
	int		i;

	i = 0;
	ft_printf("testing push\n");
	print_stack(stackA, stackB);
	while (i <= 10)
	{
		push(&stackA, i);
		i++;
	}
	print_stack(stackA, stackB);

	ft_printf("testing rotate\n");
	rotate(&stackA);
	print_stack(stackA, stackB);

	ft_printf("testing inverse rotate\n");
	push(&stackB, 69);
	push(&stackB,-69);
	push(&stackB,-69);
	push(&stackB,-69);
	push(&stackB,-69);
	push(&stackB,-69);
	push(&stackB,-69);
	reverse_rotate(&stackA);
	print_stack(stackA, stackB);

	swap(&stackA, &stackB);
	print_stack(stackA, stackB);
}
*/
