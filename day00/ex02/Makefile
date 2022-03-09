SRCS =  main.cpp \
		PhoneBook.cpp \
		Contact.cpp \

INCLUDE =	-I ./include


OBJS = ${SRCS:.cpp=.o}

NAME = phonebook

COMPIL = c++ -std=c++98 -Wall -Werror -Wextra -g

all: ${NAME}

${NAME}: ${OBJS}
		${COMPIL} -o ${NAME} ${SRCS} 
clean: 
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all