#include <stdio.h>
struct student {
	char lastName[13]; 
	int studentId; 
	short grade; 
};
int main()
{
	struct student pst;
 printf("---- - [CHEN YUXIANG][2020039089] ---- -\n\n");
 printf("size of student = %ld\n", sizeof(struct student));
 printf("size of int = %ld\n", sizeof(int));
 printf("size of short = %ld\n", sizeof(short));//char int short 의 유형 크기를 별도로 테스트하십시오.
 return 0;
}
