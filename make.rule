# Stack is Executable
EXECSTACK	= -z execstack 

# Stack Protector Options
STACKPNO 	= -fno-stack-protector
STACKREG 	= -fstack-protector
STACKSTRONG = -fstack-protector-strong
STACKALL 	= -fstack-protector-all

# Compile options
CC 			= gcc
CFLAGS 		= -Wall -Wextra -ggdb -pie -fPIE
SECFLAGS 	= $(STACKPNO)

.PHONY: all clean

all : $(TARGET)	

%.S : %.c
	$(CC) -S $(CFLAGS) $(SECFLAGS) -o $@ $<

% : %.c
	$(CC) $(CFLAGS) $(SECFLAGS) -o $@ $<

clean : 
	rm -rf $(TARGET)
	rm -rf *.S
