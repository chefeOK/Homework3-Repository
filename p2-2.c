#include <stdio.h>
void print1(int* ptr, int rows);
int main()
{
	int one[] = { 0, 1, 2, 3, 4 };
    printf("---- - [CHEN YUXIANG][2020039089] ---- -\n\n");
	printf("one = %p\n", one);
	printf("&one = %p\n", &one);
	printf("&one[0] = %p\n", &one[0]);//one &one &one[0]은(는) 동일한 주소입니다.
	printf("\n");
	print1(&one[0], 5);
	return 0;
}
void print1(int* ptr, int rows)
{
	int i;
	printf("Address \t Contents\n");//포인터를 사용하여 1D 배열 출력
	for (i = 0; i < rows; i++)
		printf("%p \t %5d\n", ptr + i, *(ptr + i));
	printf("\n");
}
