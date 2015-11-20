CC 			= gcc
FLAGS 		= -Wall -Wextra -ggdb -pie -fPIE 
EXECSTACK	= -z execstack 
STACKPROT 	= -fstack-protector-all

.PHONY: all clean

all : $(TARGET)	

%.S : %.c
	$(CC) -S $(FLAGS) -o $@ $<

% : %.c
	$(CC) $(FLAGS) -o $@ $<

clean : 
	rm -rf $(TARGET)
	rm -rf *.S
