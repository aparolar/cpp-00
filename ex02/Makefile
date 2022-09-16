NAME		=	account
CXX			=	clang++ $(FLAGS) -std=c++98 -pedantic
FLAGS		=	-Wall -Werror -Wextra
SRCS		=	tests.cpp Account.cpp
OBJS		=	$(SRCS:.cpp=.o)

$(NAME):		$(OBJS)
				$(CXX) $(SRCS) -o $(NAME)

all:			$(NAME)

re:				fclean all

clean:			
				rm -fr *.o

fclean:			clean
				rm -fr $(NAME)

.phony:			all re clean fclean
				
