#include <stdio.h>

int main(void) {
	struct student{
		char hakbun[5];
		char name[11];
		int age;
	};

	//��������
	struct student a[10]; //200bite
	int i;

	for (i = 0; i < 3; i++) {
		printf("�й� : ");
		scanf_s("%s", a[i].hakbun, 5); //���� ������ .�� 
		printf("���� : "); 
		getchar();		   	//->fgets(a[i].name,11,stdin); �ι��� �����ؼ� ����ĥ ������ �Է�
		gets_s(a[i].name,11); // ���ڿ��� �Է¹ޱ� ���� �Լ� , �ι��� �����ؼ� ����ĥ ������ �Է�		  
		printf("���� : "); 
		scanf_s("%d", &a[i].age);
	}
	for (i = 0; i < 3; i++) 
		printf("�й� : %s, ���� : %s, ���� : %d\n", a[i].hakbun, a[i].name, a[i].age);
	return 0;
}