# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/02 13:46:50 by yeju              #+#    #+#              #
#    Updated: 2022/03/02 13:46:50 by yeju             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
FLAGS = -Wall -Wextra -Werror
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

$(NAME) : $(OBJS)
	clang++ $(FLAGS) -c $(SRCS)
	clang++ $(FLAGS) $(OBJS) -o $(NAME)

.PHONY : all clean fclean re