#include <stdio.h>

int main(void) {
	struct student{
		char hakbun[5];
		char name[11];
		int age;
	};

	//직접소유
	struct student a[10]; //200bite
	int i;

	for (i = 0; i < 3; i++) {
		printf("학번 : ");
		scanf_s("%s", a[i].hakbun, 5); //직접 소유라서 .임 
		printf("성명 : "); 
		getchar();		   	//->fgets(a[i].name,11,stdin); 널문자 포함해서 엔터칠 때까지 입력
		gets_s(a[i].name,11); // 문자열을 입력받기 위한 함수 , 널문자 포함해서 엔터칠 때까지 입력		  
		printf("나이 : "); 
		scanf_s("%d", &a[i].age);
	}
	for (i = 0; i < 3; i++) 
		printf("학번 : %s, 성명 : %s, 나이 : %d\n", a[i].hakbun, a[i].name, a[i].age);
	return 0;
}