CC 		= gcc
FLAGS 	= -Wall -ggdb
target 	= useafterfree testmalloc testmprotect 

.PHONY: all clean

all : $(target)	

% : %.c
	$(CC) $(FLAGS) -o $@ $<
clean : 
	rm -f $(target)
