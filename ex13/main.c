/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:48:55 by jovicto2          #+#    #+#             */
/*   Updated: 2023/04/25 14:41:00 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		ft_recursive_factorial(int nb);

int	main(void)
{
	ft_putnbr(ft_recursive_factorial(19));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_factorial(8));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_factorial(3));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_factorial(20));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_factorial(0));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_factorial(1));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_factorial(-4));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_factorial(-5));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_factorial(-8));
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return ;
	}
	else
		ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
