/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:44:45 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/29 11:03:21 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_char_is_sep(char i, char c);
int		ft_count_word(char const *s, char c);
char	*ft_malloc(char const *s, int start, int end);
char	**ft_split(char const *s, char c);
void	ft_free_all(char **tab, int last);

int	ft_char_is_sep(char i, char c)
{
	if (i == c)
		return (1);
	if (i == '\0')
		return (1);
	return (0);
}

int	ft_count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			word++;
		i++;
	}
	return (word);
}

void	ft_free_all(char **tab, int last)
{
	int	i;

	i = 0;
	while (i < last)
		free(tab[i++]);
	free(tab);
	return ;
}

char	*ft_malloc(char const *s, int start, int end)
{
	int		range;
	int		i;
	char	*res;

	range = end - start;
	i = 0;
	res = malloc(sizeof(char) * (range + 1));
	if (!res)
		return (NULL);
	while (i < range)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		i_tab;
	int		start;
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	i_tab = 0;
	if (!tab)
		return (NULL);
	i = 0;
	while (s[i])
	{
		while (s[i] && ft_char_is_sep(s[i], c))
			i++;
		start = i;
		while (s[i] && !ft_char_is_sep(s[i], c))
			i++;
		tab[i_tab] = ft_malloc(s, start, i);
		if (!tab[i_tab])
			return (ft_free_all(tab, i_tab), NULL);
		i_tab++;
	}
	return (tab[i_tab] = NULL, tab);
}

// #include <stdio.h>
// int main(void)
// {
//     char *test = "salut a tous";
//     char c = ' ';
//     char **tab = ft_split(test, c);
//     int i = 0;
//     while (tab[i])
//         printf("%s\n", tab[i++]);
//     ft_free_all(tab, i);
//     free(tab);

//     return (0);
// } 