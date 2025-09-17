# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/11 12:51:50 by psmolin           #+#    #+#              #
#    Updated: 2025/09/17 23:19:22 by psmolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fight
CXX = g++
RM = rm -f
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = \
		main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp
HEADERS = \
		HumanA.hpp \
		HumanB.hpp \
		Weapon.hpp
OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
