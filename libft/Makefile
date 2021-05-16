# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/07 16:07:25 by hoyu              #+#    #+#              #
#    Updated: 2021/05/14 21:09:15 by hoyu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET		=	libft.a
SRCS		=	ft_strlen.c		\
				ft_strlcpy.c	\
				ft_strlcat.c	\
				ft_strncmp.c	\
				ft_strchr.c		\
				ft_strrchr.c	\
				ft_strnstr.c	\
				ft_atoi.c		\
				ft_isalpha.c	\
				ft_isdigit.c	\
				ft_isalnum.c	\
				ft_isascii.c	\
				ft_isprint.c	\
				ft_toupper.c	\
				ft_tolower.c	\
				ft_memset.c		\
				ft_bzero.c		\
				ft_memcpy.c		\
				ft_memccpy.c	\
				ft_memmove.c	\
				ft_memchr.c		\
				ft_memcmp.c		\
				ft_calloc.c		\
				ft_strdup.c		\
				ft_substr.c		\
				ft_strjoin.c	\
				ft_strtrim.c	\
        ft_split.c    \
        ft_itoa.c     \

#SRCS_BONUS	= 

OBJS		=	$(SRCS:.c=.o)

OBJS_BONUS	=	$(SRCS_BONUS:.c=.o)

INCLUDES	=	./libft.h
CC			=	gcc
CFLAG		=	-Wall -Wextra -Werror

all : $(TARGET)

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

$(TARGET) : $(OBJS)
	ar crs $@ $^

bonus : $(OBJS) $(OBJS_BONUS)
	ar crs $(TARGET) $^

clean :
	rm -f $(OBJS) $(OBJS_BONUS)

fclean : clean
	rm -f $(TARGET)

re : fclean all

.PHONY : all bonus clean fclean re
