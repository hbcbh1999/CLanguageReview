/*************************************************************************
	> File Name: useafterfree.c
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: Mon 20 Apr 2015 08:51:00 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define NUM 25 //24
int main(int argc,const char *argv[])
{
	char *a, *b, *c;
	a = malloc(NUM);
	b = malloc(NUM);
	c = malloc(NUM);

	printf("a = %x\n",a);
	printf("b = %x\n",b);
	printf("c = %x\n",c);
	free(a);
	free(b);
	free(c);
	return 0;
}
