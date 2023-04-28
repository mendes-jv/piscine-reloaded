/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 04:41:20 by jovicto2          #+#    #+#             */
/*   Updated: 2023/04/28 05:32:43 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_foreach(int *tab, int length, void (*f)(int));
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		*ft_range(int min, int max);

int	main(void)
{
	int	*tab;

	tab = ft_range(-3, 8);
	ft_foreach(tab, 11, &ft_putnbr);
	return (0);
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
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int) * (max - min));
	i = 0;
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		arr[i++] = min;
		min++;
	}
	return (arr);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
