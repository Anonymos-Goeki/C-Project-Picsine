/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoban <gcoban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:52:35 by gcoban            #+#    #+#             */
/*   Updated: 2025/08/12 14:11:17 by gcoban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main(void)
// {
// 	char * s1 = "ABBC";			//Strings Vergleichen
// 	char * s2 = "ABBCD";		
// 	printf("%d", ft_strcmp(s1, s2));

// 	return 0;
// }

// //Strings Vergleichen