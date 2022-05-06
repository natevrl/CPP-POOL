SRCS =  main.cpp \
		Brain.cpp \
		AAnimal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \

# INCLUDE =	-I ./include

OBJS = ${SRCS:.cpp=.o}

NAME = animal

COMPIL = c++ -std=c++98 -Wall -Werror -Wextra

all: ${NAME}

${NAME}: ${OBJS}
		${COMPIL} -o ${NAME} ${SRCS} 
clean: 
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all