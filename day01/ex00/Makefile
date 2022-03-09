SRCS =  main.cpp \
		Zombie.cpp \
		randomChump.cpp \
		newZombie.cpp \

# INCLUDE =	-I ./include


OBJS = ${SRCS:.cpp=.o}

NAME = zombie

COMPIL = c++ -std=c++98 -Wall -Werror -Wextra

all: ${NAME}

${NAME}: ${OBJS}
		${COMPIL} -o ${NAME} ${SRCS} 
clean: 
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all