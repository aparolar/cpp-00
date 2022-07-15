NAME		=	account
CXX			=	clang++ $(FLAGS) -std=c++98
FLAGS		=	-Wall -Werror -Wextra
#CXXFLAGS 	=	-g3 -pedantic
#LDFLAGS		=	-fsanitize=address
SRCS		=	tests.cpp Account.cpp
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
				
