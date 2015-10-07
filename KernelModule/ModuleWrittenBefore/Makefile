obj-m := HelloWorld.o Template.o eachprocess.o listprocess.o timeval.o 

KVER=$(shell uname -r)
KDIR=/lib/modules/$(KVER)/build
PWD=$(shell pwd)

default:
	make -C $(KDIR) M=$(PWD) modules
install:
	insmod $(TARGET).ko
uninstall:
	rmmod $(TARGET).ko
clean:
	make -C $(KDIR) M=$(PWD) clean
