/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:24:15 by jwalsh            #+#    #+#             */
/*   Updated: 2017/01/06 15:42:43 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# define BUFF_SIZE 32

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
size_t			ft_strlen(const char *s);
char			*ft_strdup(char *src);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dest, const char *src, size_t n);
char			*ft_strcat(char *s1, char *s2);
char			*ft_strncat(char *s1, char *s2, int nb);
unsigned int	ft_strlcat(char *dst, char *src, size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *str, const char *to_find);
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isspace(char c);
int				ft_isprint(int c);
int				ft_ispunct(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char(*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
char			*ft_strrev(char *str);
char			*ft_itoa(int n);
void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_putendl(char const *s);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *n);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int				ft_isupper(int c);
int				ft_islower(int c);
char			*ft_strjoinfree(char const *s1, char const *s2, char c);
int				ft_clamp(int min, int max, int i);
int				get_next_line(const int fd, char **line);
int				*ft_range(int start, int end);
long			ft_power(int n, int p);
int				ft_abs(int n);
char			*ft_straddchar(char const *s, char c);
char			*ft_straddcharfree(char const *s, char c);
char			*ft_to_base(int n, int b);
int				ft_error(char *error_msg);
char			*ft_itoa_base(int value, int base);
void			ft_strtolower(char *s);
void			ft_strtoupper(char *s);
size_t			ft_wstrlen(const wchar_t *s);
char			*ft_strsjoin(size_t n, ...);
char			*ft_strappend(char *dst, char *src, size_t length);
wchar_t			*ft_wstrappend(wchar_t *dst, wchar_t *src, size_t size);
wchar_t			*ft_wstrnew(size_t size);
wchar_t			*ft_wstrsjoin(size_t n, ...);
char			*ft_strappendfree(char *dst, char *src, size_t size);
char			*ft_strsjoinfree(size_t n, ...);
wchar_t			*ft_wstrappendfree(wchar_t *dst, wchar_t *src, size_t size);
wchar_t			*ft_wstrsjoinfree(size_t n, ...);
int				ft_putwchar(wchar_t c);
int				ft_putwchar_fd(wchar_t c, int fd);
int				ft_putwstr_fd(wchar_t const *s, int fd);
int				ft_putwstr(wchar_t const *s);
unsigned char	*ft_ustrnew(size_t size);
unsigned char	*ft_wctostr(wchar_t c);

#endif
