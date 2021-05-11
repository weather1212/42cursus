# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/07 16:07:25 by hoyu              #+#    #+#              #
#    Updated: 2021/05/11 21:49:26 by hoyu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET		=	libft.a
SRCS		=	ft_strlen.c		\
				ft_strlcpy.c	\
				ft_strlcat.c	\
				ft_strncmp.c	\
				ft_strchr.c		\

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
