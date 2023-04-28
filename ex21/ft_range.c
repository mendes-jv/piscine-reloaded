/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:39:35 by jovicto2          #+#    #+#             */
/*   Updated: 2023/04/26 19:39:33 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
