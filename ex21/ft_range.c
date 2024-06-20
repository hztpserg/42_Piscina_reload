/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:23:17 by seantoni          #+#    #+#             */
/*   Updated: 2024/01/05 15:01:14 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arreglo;

	if (min >= max)
	{
		arreglo = NULL;
		return (arreglo);
	}
	arreglo = (int *)malloc((max - min + 1) * sizeof(int));
	i = 0;
	while (!(min >= max))
	{
		arreglo[i] = min;
		min++;
		i++;
	}
	arreglo[i] = 0;
	return (arreglo);
}
