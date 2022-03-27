#include <stdio.h>
#include <stdlib.h>
void main()
{
	int list[5];
	int* plist[5] = { NULL, };// 포인터는 널 포인터
	plist[0] = (int*)malloc(sizeof(int));
	list[0] = 1;
	list[1] = 100;
	*plist[0] = 200;
	printf("---- - [CHEN YUXIANG][2020039089] ---- -\n\n");
	printf("value of list[0] = %d\n", list[0]);//list[0]의 값
	printf("address of list[0] = %p\n", &list[0]);//list[0]의 주소
	printf("value of list = %p\n", list);//list의 값
	printf("address of list (&list) = %p\n", &list);//list의 주소
	printf("----------------------------------------\n\n");
	printf("value of list[1] = %d\n", list[1]);//list[1]의 값
	printf("address of list[1] = %p\n", &list[1]);//list[1] 주소
	printf("value of *(list+1) = %d\n", *(list + 1));//*(list+1)은 list[1]의 값을 포함합니다.
	printf("address of list+1 = %p\n", list + 1);//list+1 주소
	printf("----------------------------------------\n\n");
	printf("value of *plist[0] = %d\n", *plist[0]);//plist[0]의 값
	printf("&plist[0] = %p\n", &plist[0]);//plist[0]의 주소
	printf("&plist = %p\n", &plist);//plist의 주소
	printf("plist = %p\n", plist);//plist의 값
	printf("plist[0] = %p\n", plist[0]);//plist[0]의 값
	printf("plist[1] = %p\n", plist[1]);//plist[1]]의 값
	printf("plist[2] = %p\n", plist[2]);//plist[2]의 값
	printf("plist[3] = %p\n", plist[3]);//plist[3]의 값
	printf("plist[4] = %p\n", plist[4]);//plist[4]의 값
	free(plist[0]);
}
