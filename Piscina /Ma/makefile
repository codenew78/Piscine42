MY_VAR = this is a string

MY_OTHER_VAR = 	hello $(MY_VAR)

MY_OTHER_VAR += "Bye !"

NAME = my prog

MY_SOURCES = nose.c \
			main.c
MY_OBJECTS =$(MY_SOURCES:.c=.o)

CFLAGS += -Wall
$(NAME): $(MY_OBJECTS)
	cc -o$(NAME) $(MY_OBJECTS)
CUR_DIR = $(shell pwd)
a_prog: ft_putchar.o main.o
	cc -o this_prog ft_putchar.o main.o 
my_rule: sub_rule
	echo I will compile my files $(MY_SOURCES)

sub_rule: 
	echo This is my rule in $(CUR_DIR)