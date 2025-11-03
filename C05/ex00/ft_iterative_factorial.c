/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoban <gcoban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:31:57 by gcoban            #+#    #+#             */
/*   Updated: 2025/08/19 20:46:31 by gcoban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

// int	main(void)
// {
// 	printf("Factorial of -1 = %d\n", ft_iterative_factorial(-1));
// 	printf("Factorial of 9 = %d\n", ft_iterative_factorial(9));
// 	printf("Factorial of 1 = %d\n", ft_iterative_factorial(1));
// 	printf("Factorial of 5 = %d\n", ft_iterative_factorial(5));
// }
