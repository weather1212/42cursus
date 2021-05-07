# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/07 16:07:25 by hoyu              #+#    #+#              #
#    Updated: 2021/05/07 18:20:16 by hoyu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET		=	libft.a
SRCS		=	strlen.c
				strlcpy.c

#SRCS_B		= 

OBJS		=	$(SRCS:.c=.o)

OBJS_B		=	$(SRCS_B:.c=.o)

INCLUDES	=	./libft.h
CC			=	gcc
CFLAG		=	-Wall -Wextra -Werror

all : $(TARGET)

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

$(TARGET) : $(OBJS)
	ar crs $@ $^

bonus : $(OBJS_B)
	ar crs $(TARGET) $^

clean :
	rm -f $(OBJS) $(OBJS_B)

fclean : clean
	rm -f $(TARGET)

re : fclean all
