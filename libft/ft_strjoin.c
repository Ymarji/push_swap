/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarji <ymarji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 18:19:10 by ymarji            #+#    #+#             */
/*   Updated: 2019/11/07 10:14:00 by ymarji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	int			i;
	int			j;

	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	i = (int)ft_strlen(s1);
	j = (int)ft_strlen(s2);
	if (!(str = (char *)malloc((i + j + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	j = 0;
	while (s1[++i])
		str[i] = s1[i];
	while (s2[j])
	{
		str[j + i] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
