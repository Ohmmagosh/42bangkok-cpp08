# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/15 09:54:01 by psuanpro          #+#    #+#              #
#    Updated: 2023/06/16 17:32:37 by psuanpro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Span
CC=g++
CFLAGS= -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp \
		Span.cpp

OBJS = ${SRCS:.cpp=.o}

BRED =\033[1;31m
BGRN =\033[1;32m
BYEL =\033[1;33m
RES = \033[0m

COMPILE = echo "$(BGRN)$(NAME) compiled....$(RES)"
CLEAN = echo "$(BYEL)$(NAME) clean....$(RES)"
FCLEAN = echo "$(BRED)$(NAME) fclean....$(RES)"

.cpp.o:
		@$(CC) -g $(CFLAGS) -c $< -o $@

all:$(NAME)

$(NAME): $(OBJS)
		@$(CC) -g $(CFLAGS) $(OBJS) -o $@
		@$(COMPILE)

clean:
		@rm -rf $(OBJS)
		@$(CLEAN)

fclean: clean
		@rm -rf $(NAME)
		@$(FCLEAN)

re: fclean all

.PHONY: all re clean fclean
