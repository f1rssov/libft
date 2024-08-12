# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 17:11:27 by dcompreh          #+#    #+#              #
#    Updated: 2021/11/15 19:38:55 by dcompreh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=		ft_atoi.c	ft_bzero.c	ft_calloc.c\
ft_isalnum.c	ft_isalpha.c 	ft_isascii.c\
ft_isdigit.c 	ft_isprint.c 	ft_memchr.c\
ft_memcmp.c 	ft_memcpy.c 	ft_memmove.c\
ft_memset.c 	ft_putchar_fd.c 	ft_putnbr_fd.c\
ft_putstr_fd.c 	ft_strchr.c 	ft_strdup.c	ft_strjoin.c\
ft_strlcat.c 	ft_strlcpy.c 	ft_strlen.c\
ft_strncmp.c 	ft_strnstr.c 	ft_strrchr.c\
ft_strtrim.c 	ft_substr.c 	ft_tolower.c 	ft_toupper.c\
ft_putendl_fd.c	ft_striteri.c	ft_strmapi.c	ft_itoa.c\
ft_split.c

HEADER	= libft.h

OBJS	= ${SRCS:%.c=%.o}

CFLAGS	=	-Wall -Werror -Wextra

CC		=	gcc

all: $(NAME)

$(NAME):	$(OBJS) $(HEADER)
			ar rcs $(NAME) $?
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)


clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 