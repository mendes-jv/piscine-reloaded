/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:14:52 by jovicto2          #+#    #+#             */
/*   Updated: 2023/04/25 14:39:56 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = nb;
	if (nb < 0 || nb > 19)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb-- > 1)
		factorial *= nb;
	return (factorial);
}
