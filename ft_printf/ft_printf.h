/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:30:47 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/11/29 15:50:13 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H
# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>
#include <stdlib.h>
//								part 1
// ctype.h
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int d);
int					ft_isprint(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);

// string.h
size_t				ft_strlen(const char *s);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);

// Memory Functions
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);

// stdlib.h
int					ft_atoi(const char *str);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s1);

// 								part 2
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_itoa(int n);
char				**ft_split(char const *s, char c);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);

// 								Printf specific functions
int					ft_printf(const char *str, ...);
char				*fsp(char fs, va_list args);
char				*format_c(int c);
char				*format_s(char *x);
char				*format_p(void *add);
char				*format_di(int nbr);
char				*format_u(unsigned int num);
int					tol_unsigned(unsigned long n, int base);
char				*convert2hex(unsigned long n, char upper);

// 								Bonus printf
typedef struct s_flags
{
    int minus;    // '-' left justify
    int zero;     // '0' zero padding
    int precision; // .precision value
    int hash;     // '#' 0x prefix
    int plus;     // '+' force sign
    int space;    // ' ' space if no sign
    int width;    // minimum field width
    char fsp;
} t_flags;
t_flags	*parse_flags(const char *str);
char	*apply_flags(char *str, t_flags *flags);
char	*flag_hash(char *str, char fsp);
char	*flag_plus(char *str);

// debugging
#include <stdio.h>
void    print_flags(t_flags *flags);
#endif
