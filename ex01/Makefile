# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 10:33:12 by belguabd          #+#    #+#              #
#    Updated: 2024/11/19 18:34:00 by belguabd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



FLAGS=c++ -Wall -Wextra -Werror -std=c++98

NAME=span

SRC=main.cpp Span.cpp

OBJ=$(SRC:.cpp=.o)

all :$(NAME)


$(NAME):$(OBJ)	
	$(FLAGS)  $(OBJ) -o $(NAME)
%.o:%.cpp 
	$(FLAGS) -c $< -o $@


clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:fclean  all
	