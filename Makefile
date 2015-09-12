CC 		= gcc
FLAGS 	= -Wall -ggdb
target 	= useafterfree simplemalloc testmalloc testmprotect readelf32 readelf64 flush nonflush flushline fork forkaddress vfork get_sp union testmmap alloca factory struct someone

.PHONY: all clean

all : $(target)	

% : %.c
	$(CC) $(FLAGS) -o $@ $<
clean : 
	rm -f $(target)
