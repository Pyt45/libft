/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqlzim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:53:32 by aaqlzim           #+#    #+#             */
/*   Updated: 2019/11/07 19:52:17 by aaqlzim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	char	*ptr1;
	size_t	l;

	l = ft_strlen(s1);
	if ((ptr = (char *)malloc((l + 1) * sizeof(char))) == NULL)
		return (NULL);
	ptr1 = ptr;
	while (*s1 != '\0')
	{
		*ptr++ = *s1++;
	}
	*ptr = '\0';
	return (ptr1);
}
