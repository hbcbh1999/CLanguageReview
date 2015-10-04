CC 		= gcc
FLAGS 	= -Wall -Wextra -ggdb
target 	= alloca factory flush flushline forkaddress fork get_sp mallinfo nonflush pagesize readelf32 readelf64 simplemalloc someone struct testmalloc testmmap testmprotect test_stack teststruct union useafterfree verifyelf vfork
.PHONY: all clean

all : $(target)	

% : %.c
	$(CC) $(FLAGS) -o $@ $<
clean : 
	rm -f $(target)
