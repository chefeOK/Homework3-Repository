#include <stdio.h>
#include <stdlib.h>
void main()
{
	int list[5];
	int* plist[5];
	list[0] = 10;
	list[1] = 11;
	plist[0] = (int*)malloc(sizeof(int));//int 크기의 메모리 공간을 신청하고 주소를 반환하고 주소를 int* 유형으로 강제 변환한 다음 변환된 주소 값을 plist[0]에 할당합니다.
	printf("---- - [CHEN YUXIANG][2020039089] ---- -\n\n");
	printf("list[0] \t= %d\n", list[0]);
	printf("address of list \t= %p\n", list);
	printf("address of list[0] \t= %p\n", &list[0]);//list[0]의 주소는 list의 주소입니다.
	printf("address of list + 0 \t= %p\n", list + 0);
	printf("address of list + 1 \t= %p\n", list + 1);
	printf("address of list + 2 \t= %p\n", list + 2);
	printf("address of list + 3 \t= %p\n", list + 3);
	printf("address of list + 4 \t= %p\n", list + 4);
	printf("address of list[4] \t= %p\n", &list[4]);//목록의 주소에 몇 가지를 더한 값은 배열 목록의 주소[몇 가지]입니다.
	free(plist[0]);
}
