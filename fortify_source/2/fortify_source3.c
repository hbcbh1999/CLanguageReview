/*************************************************************************
	> File Name: fortify_source.c
	> Author: mudongliang
	> Mail: mudongliangabcdi@163.com
	> Created Time: Wed 25 May 2016 06:01:12 PM EDT
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(int argc,const char *argv[])
{	
	char buffer[10];
	char *p = buffer + 1;
	char *q = argv[1];
	if (argc < 1) {
		printf("need one argument"); 
	}
	strcpy(p, q);
    return 0;
}
