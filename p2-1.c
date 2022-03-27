#include <stdio.h>
#define MAX_SIZE 100
float sum(float[], int);//부동 소수점 숫자
float input[MAX_SIZE], answer;
int i;
//# define MAXN 100 이것은 매크로 정의입니다. 
//예를 들어 int a[MAXN];은 int a[100]과 동일합니다. 
//이점: MAXN을 배열 크기로 사용하는 프로그램이 많이 있는 경우 이점은 다음과 같습니다. 
//이 어레이의 크기를 MAXN 100만 변경하면 됩니다.
void main(void)
{
    printf("---- - [CHEN YUXIANG][2020039089] ---- -\n\n");
	for (i = 0; i < MAX_SIZE; i++)
		input[i] = i;
	
	printf("address of input = %p\n", input);
	answer = sum(input, MAX_SIZE);
	printf("The sum is: %f\n", answer);
}
float sum(float list[], int n)
{
	printf("value of list = %p\n", list);
	printf("address of list = %p\n\n", &list);
	int i;
	float tempsum = 0;
	for (i = 0; i < n; i++)
		tempsum += list[i];
	return tempsum;
}
