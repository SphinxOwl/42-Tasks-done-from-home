/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  SphinxOwl <SphinxOwl@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:30:38 by SphinxOwl         #+#    #+#             */
/*   Updated: 2025/09/22 21:30:38 by SphinxOwl        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_strcmp("hello", "hello")); // 0
// 	printf("%d\n", ft_strcmp("abc", "abd"));     // < 0
// 	printf("%d\n", ft_strcmp("abd", "abc"));     // > 0
// 	printf("%d\n", ft_strcmp("", ""));           // 0
// 	return (0);
// }
