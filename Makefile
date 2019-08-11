# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trobicho <trobicho@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 00:47:17 by trobicho          #+#    #+#              #
#    Updated: 2019/08/12 01:15:36 by trobicho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	my_lib.cpp
HDRS	=	my_lib.h
OUTS	=	$(SRCS:.cpp=.o)
CFLAGS	=	-c -std=c++14
NAME	=	libtrl.a

all: $(NAME)

$(NAME): $(OUTS) $(SRCS) Makefile
	ar scr $(NAME) $(OUTS)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $^

clean:
	rm -f $(OUTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 
