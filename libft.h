#ifndef LIBFT_H
#define LIBFT_H
// gerer le stddef voir si on y a droit ou non
// difficultés a appeller mes fonctions dans d'autres fonctions meme en include bien le libft.h
#include <stddef.h>

int ft_isalnum(int c);
int atoi(const char *str);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memset(void *str, int c, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strdup(const char *s1);
size_t ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *s, int c);
int ft_tolower(int character);
int ft_toupper( int character );
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char **ft_split(char const *s, char c);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);


#endif