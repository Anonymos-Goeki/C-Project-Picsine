/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoban <gcoban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:45:08 by gcoban            #+#    #+#             */
/*   Updated: 2025/08/19 22:33:36 by gcoban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	is_prime;

	if (nb <= 2)
		return (2);
	while (1)
	{
		i = 2;
		is_prime = 1;
		while (i <= nb / i)
		{
			if (nb % i == 0)
				is_prime = 0;
			i++;
		}
		if (is_prime)
			return (nb);
		nb++;
	}
}

// int	main(void)
// {
// 	printf("What is the next prime of -3? %d\n", ft_find_next_prime(-3));
// 	printf("What is the next prime of 6? %d\n", ft_find_next_prime(6));
// 	printf("What is the next prime of 13? %d\n", ft_find_next_prime(13));
// 	printf("What is the next prime of 25? %d\n", ft_find_next_prime(25));
// 	printf("What is the next prime of 84? %d\n", ft_find_next_prime(84));
// }
