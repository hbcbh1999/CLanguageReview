CC 		= gcc
FLAGS 	= -Wall -Wextra -ggdb
.PHONY: all clean

all : $(TARGET)	

% : %.c
	$(CC) $(FLAGS) -o $@ $<

clean : 
	rm -f $(TARGET)
