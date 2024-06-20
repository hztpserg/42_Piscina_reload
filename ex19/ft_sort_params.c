/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:57:57 by seantoni          #+#    #+#             */
/*   Updated: 2024/01/05 13:39:18 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (argv[i] != 0)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_swap(char *a[], char *b[])
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_comparar(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc < 2)
		return (0);
	i = 1;
	while (argv[i + 1] != 0)
	{
		j = i + 1;
		while (argv[j] != 0)
		{
			if (ft_comparar(argv[i], argv[j]) > 0)
				ft_swap(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
	ft_print(&argv[1]);
	return (0);
}
