# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/28 16:41:23 by vafavard          #+#    #+#              #
#    Updated: 2025/04/29 13:49:45 by vafavard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.
RM = rm -f
AR = ar
ARFLAGS = rcs
HEADER = libft.h
SRCS	= 	ft_bzero.c ft_isascii.c  ft_itoa.c ft_memcpy.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_substr.c ft_alnum.c ft_calloc.c \
		ft_isdigit.c ft_memchr.c ft_memmove.c ft_putendl_fd.c ft_split.c   ft_strjoin.c \
		ft_strlen.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_atoi.c  ft_isalpha.c ft_isprint.c \
		ft_memcmp.c ft_memset.c ft_putnbr_fd.c  ft_strchr.c ft_strlcat.c ft_strncmp.c \
		ft_strmapi.c ft_striteri.c ft_strtrim.c

SRCS.BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			 ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			 ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)

OBJS.BONUS = $(SRCS.BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
			$(AR) $(ARFLAGS) $@ $^

%.o: %.c $(HEADER)
			$(CC) $(CFLAGS) -I. -c $< -o $@

bonus: $(OBJECTS) $(OBJS.BONUS)
		$(AR) $(ARFLAGS) $(NAME) $(OBJS.BONUS)

clean: 
	$(RM) $(OBJS) $(OBJS.BONUS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus #Pour ne pas prednre en considaration tous les fichiers qui portent ce nom
