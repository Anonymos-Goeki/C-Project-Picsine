/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoban <gcoban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 11:41:03 by gcoban            #+#    #+#             */
/*   Updated: 2025/08/12 14:10:08 by gcoban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	s;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		s = 0;
		while (str[i + s] && str[i + s] == to_find[s])
		{
			s++;
			if (to_find[s] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char str[] = "Hallo Welt!";
// 	char *result = ft_strstr(str, "Welt");

// 	if(result)
// 		printf("Gefunden: %s\n", result);
// 	else
// 	printf("nicht Gefunden.\n");

// 	return 0;
// }