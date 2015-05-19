CC 		= gcc
FLAGS 	= -Wall -ggdb
target 	= useafterfree simplemalloc testmalloc testmprotect readelf32 readelf64

.PHONY: all clean

all : $(target)	

% : %.c
	$(CC) $(FLAGS) -o $@ $<
clean : 
	rm -f $(target)
