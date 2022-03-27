#include <stdio.h>
struct student1 {
	char lastName;
	int studentId;
	char grade;
};//구조체 유형을 정의합니다.
typedef struct {
	char lastName;
	int studentId;
	char grade;//식별자에 대한 별칭과 특별한 의미가 없는 키워드를 정의합니다.

	//구조체 사용의 편의를 위한 언어 컴파일 프로세스의 일부입니다.
} student2;
int main() {
    printf("---- - [CHEN YUXIANG][2020039089] ---- -\n\n");
	struct student1 st1 = { 'A', 100, 'A' };
	printf("st1.lastName = %c\n", st1.lastName);
	printf("st1.studentId = %d\n", st1.studentId);
	printf("st1.grade = %c\n", st1.grade);
	student2 st2 = { 'B', 200, 'B' };
	printf("\nst2.lastName = %c\n", st2.lastName);
	printf("st2.studentId = %d\n", st2.studentId);
	printf("st2.grade = %c\n", st2.grade);
	student2 st3;
	st3 = st2;
	printf("\nst3.lastName = %c\n", st3.lastName);
	printf("st3.studentId = %d\n", st3.studentId);
	printf("st3.grade = %c\n", st3.grade);
	
	//if (st3 == st2) 
	//	printf("equal\n");
	//else
	//	printf("not equal\n");
	return 0;
}
