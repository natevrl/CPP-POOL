SRCS =  main.cpp \
		ClapTrap.cpp \

# INCLUDE =	-I ./include

OBJS = ${SRCS:.cpp=.o}

NAME = claptrap

COMPIL = c++ -std=c++98 -Wall -Werror -Wextra

all: ${NAME}

${NAME}: ${OBJS}
		${COMPIL} -o ${NAME} ${SRCS} 
clean: 
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all