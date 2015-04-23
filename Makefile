CC 		= gcc
FLAGS 	= -Wall -ggdb
target 	= useafterfree test 

.PHONY: all clean

all : $(target)	

% : %.c
	$(CC) $(FLAGS) -o $@ $<
clean : 
	rm -f $(target)
