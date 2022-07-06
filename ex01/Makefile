NAME		=	phonebook
CXX			=	clang++ $(CXXFLAGS)
CXXFLAGS 	=	-Wall -Werror -Wextra -std=c++98 -pedantic
SRCS		=	main.cpp
OBJS		=	$(SRCS:.cpp=.o)

$(NAME):		$(OBJS)
				$(CXX) $(SRCS) -o $(NAME)

all:			$(NAME)

re:				fclean all

clean:			
				rm *.o

fclean:			clean
				rm $(NAME)

.phony:			all re clean fclean
				
