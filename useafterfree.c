/*************************************************************************
	> File Name: useafterfree.c
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: Mon 20 Apr 2015 08:51:00 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

char * retptr(){
	char p, *q;
	q = &p;
	return q;
}

int main(int argc,const char *argv[])
{
	char *a, *b, *c;
	a = malloc(16);
	printf("a = %x\n",a);
	b = a+5;
	free(a);
	b[2] = 'c';

	c = malloc(32);		//if parameter is greater than 16
	printf("c = %x\n",c);
	printf("c[7] = %c\n",c[7]);
	free(c);

	b = retptr();
	*b = 'c';
    return 0;
}
