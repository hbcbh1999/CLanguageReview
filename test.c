/*************************************************************************
	> File Name: useafterfree.c
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: Mon 20 Apr 2015 08:51:00 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc,const char *argv[])
{
	char *a, *b, *c;
	a = malloc(16);
	b = malloc(16);
	c = malloc(16);

	printf("a = %x\n",a);
	printf("b = %x\n",b);
	printf("c = %x\n",c);
	free(a);
	free(b);
	free(c);
	return 0;
}
