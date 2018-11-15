/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:16:43 by bboucher          #+#    #+#             */
/*   Updated: 2018/11/15 17:31:31 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
   void	ft_readtab(char **tab)
   {
   int	i;

   i = 0;
   while (tab[i] != NULL)
   {
   ft_putstr(tab[i]);
   write(1, "\n", 1);
   i++;
   }
   }

   void	change_a_to_b(char *str)
   {
   if (*str == 'a')
 *str = 'b';
 }


 void	change_a_to_b(unsigned int i, char *str)
 {
 (void)i;
 if (*str == 'a')
 *str = 'b';
 }


 char	change_a_to_b(char c)
 {
 if (c == 'a')
 return ('b');
 return ('i');
 }

 char	change_a_to_b(unsigned int i, char c)
 {
 (void)i;
 if (c == 'a')
 return ('b');
 return ('i');
 }
 */

void	ft_lstprint	(t_list *list)
{
	if (!list)
	{
		ft_putstr("La liste est vide, rien a afficher.\n");
		return ;
	}
	while (list)
	{
		printf("[%s, %zu]->", list->content, list->content_size);
		list = list->next;
	}
	printf("NULL\n");
}

void	ft_del(void *content, size_t n)
{
	(void)n;
	free(content);
	content = NULL;
}

void	ft_changes(t_list *elem)
{
	if (ft_strequ(elem->content, "lol"))
		elem->content = "olo";
}

t_list	*ft_changesnew(t_list *elem)
{
	if (ft_strequ(elem->content, "lol"))
		elem->content = "olo";
	return (elem);
}

int		main(int c, char **v)
{
	/*
	   (void)v;

	   printf("ft_memset: %s\n", ft_memset(v[1], atoi(v[2]), atoi(v[3])));
	   printf("memset: %s\n", memset(v[1], atoi(v[2]), atoi(v[3])));

	   char	s1[20];
	   ft_bzero(s1, atoi(v[1]));
	   printf("s1: %s\n", s1);
	   char	s2[20];
	   ft_bzero(s2, atoi(v[1]));

	   printf("ft_memcpy: %s\n", ft_memcpy(v[1], v[2], atoi(v[3])));
	   printf("memcpy: %s\n", memcpy(v[1], v[2], atoi(v[3])));

	   printf("ft_memmove: %s\n", ft_memmove(v[1], (v[1] + 3), atoi(v[2])));
	   printf("memmove: %s\n", memmove(v[1], (v[1] + 3), atoi(v[2])));
	   printf("ft_memmove: %s\n", ft_memmove((v[1] + 3), v[1], atoi(v[2])));
	   printf("memmove: %s\n", memmove((v[1] + 3), v[1], atoi(v[2])));

	   char	dst1[50];
	   char	dst2[50];
	   char    dst1[] = "abcdefghijklmnopqrstuvwxyz";
	   char    dst2[] = "abcdefghijklmnopqrstuvwxyz";
	   char    *src = "string with\200inside !";
	   printf("memccpy: %s\n", memccpy(dst1, src, '\200', 21));
	   printf("dst1: %s\n", dst1);
	   printf("ft_memccpy: %s\n", ft_memccpy(dst2, src, '\200', 21));
	   printf("dst2: %s\n", dst2);
	   printf("s2: %s\n", s2);

	   printf("ft_memchr: %s\n", ft_memchr(v[1], atoi(v[2]), atoi(v[3])));
	   printf("memchr: %s\n", memchr(v[1], atoi(v[2]), atoi(v[3])));

	   printf("ft_memcmp: %d\n", ft_memcmp(v[1], v[2], atoi(v[3])));
	   printf("memcmp: %d\n", memcmp(v[1], v[2], atoi(v[3])));

	   printf("ft_memalloc: %d\n", ft_memalloc(atoi(v[1])));
	   printf("ft_strlen: %zu\n", ft_strlen(v[1]));
	   printf("strlen: %lu\n", strlen(v[1]));

	   printf("ft_isdigit: %d\n", ft_isdigit('2'));
	   printf("isdigit: %d\n", isdigit('2'));
	   printf("ft_isdigit: %d\n", ft_isdigit('h'));
	   printf("isdigit: %d\n", isdigit('h'));

	   printf("ft_isalpha: %d\n", ft_isalpha('2'));
	   printf("isalpha: %d\n", isalpha('2'));
	   printf("ft_isalpha: %d\n", ft_isalpha('h'));
	   printf("isalpha: %d\n", isalpha('h'));

	   printf("ft_isalnum: %d\n", ft_isalnum('2'));
	   printf("isalnum: %d\n", isalnum('2'));
	   printf("ft_isalnum: %d\n", ft_isalnum('h'));
	   printf("isalnum: %d\n", isalnum('h'));

	   printf("ft_isascii: %d\n", ft_isascii('2'));
	   printf("isascii: %d\n", isascii('2'));
	   printf("ft_isascii: %d\n", ft_isascii('h'));
	   printf("isascii: %d\n", isascii('h'));

	   printf("ft_isisprint: %d\n", ft_isprint('2'));
	   printf("isprint: %d\n", isprint('2'));
	   printf("ft_isprint: %d\n", ft_isprint('h'));
	   printf("isprint: %d\n", isprint('h'));

	   printf("ft_toupper: %d\n", ft_toupper('h'));
	   printf("toupper: %d\n", toupper('h'));
	   printf("ft_toupper: %d\n", ft_toupper('H'));
	   printf("toupper: %d\n", toupper('H'));

	printf("ft_tolower: %d\n", ft_tolower('h'));
	printf("tolower: %d\n", tolower('h'));
	printf("ft_tolower: %d\n", ft_tolower('H'));
	printf("tolower: %d\n", tolower('H'));

	printf("ft_strcmp: %d\n", ft_strcmp(v[1], v[2]));
	printf("strcmp: %d\n", strcmp(v[1], v[2]));

	printf("ft_strncmp: %d\n", ft_strncmp(v[1], v[2], atoi(v[3])));
	printf("strncmp: %d\n", strncmp(v[1], v[2], atoi(v[3])));

	printf("ft_strdup: %s\n", ft_strdup(v[1]));
	printf("strdup: %s\n", strdup(v[1]));

	printf("ft_strcpy: %s\n", ft_strcpy(v[1], v[2]));
	printf("strcpy: %s\n", strcpy(v[1], v[2]));

	printf("ft_strncpy: %s\n", ft_strncpy(v[1], v[2], atoi(v[3])));
	printf("strncpy: %s\n", strncpy(v[1], v[2], atoi(v[3])));

	printf("ft_strcat: %s\n", ft_strcat(v[1], v[2]));
	printf("strcat: %s\n", strcat(v[1], v[2]));

	printf("ft_strstr: %s\n", ft_strstr(v[1], v[2]));
	printf("strstr: %s\n", strstr(v[1], v[2]));

	printf("ft_strnstr: %s\n", ft_strnstr(v[1], v[2], atoi(v[3])));
	printf("strnstr: %s\n", strnstr(v[1], v[2], atoi(v[3])));
	printf("ft_strnstr: %s\n", ft_strnstr(NULL, "fake", 3));
	printf("strnstr: %s\n", strnstr("fake", NULL, 3));
	printf("ft_strnstr: %s\n", ft_strnstr(NULL, "fake", 3));
	printf("strnstr: %s\n", strnstr(NULL, "fake", 3));

	printf("ft_strchr: %s\n", ft_strchr(v[1], atoi(v[2])));
	printf("strchr: %s\n", strchr(v[1], atoi(v[2])));
	printf("ft_strrchr: %s\n", ft_strrchr(v[1], atoi(v[2])));
	printf("strrchr: %s\n", strrchr(v[1], atoi(v[2])));

	printf("ft_strncat: %s\n", ft_strncat(v[1], v[2], atoi(v[3])));
	printf("strncat: %s\n", strncat(v[1], v[2], atoi(v[3])));

	printf("ft_atoi: %d\n", ft_atoi(v[1]));
	printf("atoi: %d\n", atoi(v[1]));

	char str[20] = "0123456789";
	char str[3] = {'a','a','a'};
	printf("ft_strlcat: %zu\n", ft_strlcat(str, v[1], atoi(v[2])));
	printf("strlcat: %lu\n", strlcat(str, v[1], atoi(v[2])));
	printf("str output: %s\n", str);
	printf("ft_strlcat: %zu\n", ft_strlcat(v[1], v[2], atoi(v[3])));
	printf("strlcat: %lu\n", strlcat(v[1], v[2], atoi(v[3])));

	printf("ft_itoa: %s\n", ft_itoa(atoi(v[1])));

	ft_putnbr(atoi(v[1]));
	ft_readtab(ft_strsplit(v[1], ' '));
	printf("ft_strjoin: %s\n", ft_strjoin(v[1], v[2]));

	void	(*f)(char*);
	f = &change_a_to_b;
	char	*str = v[1];
	ft_striter(str, f);
	printf("%s\n", str);

	void	(*f)(unsigned int, char*);
	f = &change_a_to_b;
	char	*str = v[1];
	ft_striteri(str, f);
	printf("%s\n", str);

	char	(*f)(char);
	f = &change_a_to_b;
	char	*str = v[1];
	printf("%s\n", ft_strmap(str, f));

	char	(*f)(unsigned int, char);
	f = &change_a_to_b;
	char	*str = v[1];
	printf("%s\n", ft_strmapi(str, f));

	printf("ft_strequ: %d\n", ft_strequ(v[1], v[2]));

	printf("ft_strnequ: %d\n", ft_strnequ(v[1], v[2], atoi(v[3])));

	printf("ft_strsub: %s\n", ft_strsub(v[1], atoi(v[2]), atoi(v[3])));

	printf("%s\n", ft_strtrim(v[1]));
	(void)v;
	printf("%s\n", ft_strtrim("  \t \t \n   \n\n\n\t"));
*/
	t_list	*list;
	list = ft_lstnew(v[1], 1 + ft_strlen(v[1]));
	ft_lstprint(list);
//	void	(*del)(void *, size_t);
//	del = &ft_del;
//	ft_lstdelone(&list, del);
//	ft_lstdel(&list, del);
	t_list	*list2;
	list2 = ft_lstnew(v[2], 1 + ft_strlen(v[2]));
	ft_lstadd(&list, list2);
	ft_lstprint(list);
	
//	void	(*f)(t_list *elem);
//	f = &ft_changes;
//	ft_lstiter(list, f);

	t_list	*(*f)(t_list *elem);
	f = &ft_changesnew;
	
	ft_lstprint(ft_lstmap(list, f));
		
	return (c);
}
