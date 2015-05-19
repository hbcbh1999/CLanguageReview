CC 		= gcc
FLAGS 	= -Wall -ggdb
target 	= useafterfree simplemalloc testmalloc testmprotect readelf 

.PHONY: all clean

all : $(target)	

% : %.c
	$(CC) $(FLAGS) -o $@ $<
clean : 
	rm -f $(target)
