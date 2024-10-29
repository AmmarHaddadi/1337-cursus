#ifndef LIBFT
#define LIBFT

#include <stddef.h>

size_t ft_strlen(const char *s);
int ft_isdigit(int d);
int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
size_t ft_strlcpy(char * dst, const char * src, size_t dstsize);
size_t ft_strlcat(char * dst, const char * src, size_t dstsize);
void *ft_memchr(const void *s, int c, size_t n);
void * ft_memcpy(void * dst, const void * src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
char **ft_split(char const *s, char c);
void *ft_calloc(size_t count, size_t size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isprint(int c);
char *ft_itoa(int n);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstadd_front(t_list **lst, t_list *new);
void ft_lstclear(t_list **lst, void (*del)(void *));
void ft_lstdelone(t_list *lst, void (*del)(void *));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstlast(t_list *lst);
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void *ft_memset(void *b, int c, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_substr(char const *s, unsigned int start, size_t len);

// bonus
typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

#endif
