#include<stdio.h>
#include<stdlib.h>
void main()
{
	int** x;
 printf("---- - [CHEN YUXIANG][2020039089] ---- -\n\n");
	printf("sizeof(x) = %lu\n", sizeof(x));
	printf("sizeof(*x) = %lu\n", sizeof(*x));
	printf("sizeof(**x) = %lu\n", sizeof(**x));// **x의 크기를 테스트합니다.
}
