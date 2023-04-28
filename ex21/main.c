/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:39:48 by jovicto2          #+#    #+#             */
/*   Updated: 2023/04/25 20:12:15 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		*ft_range(int min, int max);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putnbr_arr(int *arr, int size);

int	main(void)
{
	int	*arr;
	int	min;
	int	max;

	min = -3;
	max = 8;
	arr = ft_range(min, max);
	ft_putnbr_arr(arr, (max - min));
	return (0);
}

void	ft_putnbr_arr(int *arr, int size)
{
	int	i;

	i = -1;
	while (i++ < (size - 1))
	{
		ft_putnbr(arr[i]);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_putnbr(int nb)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	if (nbr / 10 > 0)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar(nbr % 10 + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
