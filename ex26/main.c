/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 05:34:29 by jovicto2          #+#    #+#             */
/*   Updated: 2023/04/28 10:48:08 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_count_if(char **tab, int (*f)(char*));
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_putnbr(ft_count_if(argv, &ft_strlen));
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
