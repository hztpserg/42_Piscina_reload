/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:30:59 by seantoni          #+#    #+#             */
/*   Updated: 2024/01/04 13:04:38 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	res;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	res = 1;
	while (nb > 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
