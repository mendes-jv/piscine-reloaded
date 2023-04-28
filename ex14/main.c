/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:30:59 by jovicto2          #+#    #+#             */
/*   Updated: 2023/04/28 03:59:35 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		ft_sqrt(int nb);

int	main(void)
{
	ft_putnbr(ft_sqrt(168087073));
	ft_putchar('\n');
	ft_putnbr(ft_sqrt(214748364));
	ft_putchar('\n');
	ft_putnbr(ft_sqrt(52059427));
	ft_putchar('\n');
	ft_putnbr(ft_sqrt(210592567));
	ft_putchar('\n');
	ft_putnbr(ft_sqrt(126258545));
	ft_putchar('\n');
	ft_putnbr(ft_sqrt(-1));
	ft_putchar('\n');
	ft_putnbr(ft_sqrt(-4));
	ft_putchar('\n');
	ft_putnbr(ft_sqrt(-5));
	ft_putchar('\n');
	ft_putnbr(ft_sqrt(169));
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
