//��ʾ���û�����
//��������Ӵ���⣬����scanf����s��ʹ�û���v��̫����

#include<stdio.h>
#include<string.h>  //�ṩstrlen()������ԭ�ͣ����ǿ���ʹ��strlen#define
#define  DENSITY 62.4
int main_1()
{

	float weight, volume;
	int size, letters;
	char name[40];

	printf("���������ʲô\n");
	scanf_s("%s", name,(unsigned int)sizeof(name));


	printf("%s,what's your weight in pounds ?\n", name);
	scanf_s("%f", &weight);

	size = sizeof(name);//sizeofֻ�Ǽ�������Ч�ַ����������е��ַ�
	letters = strlen(name);//strlen���������name������Ӧ�������ڴ�ռ䣨���ֽ�λ��λ��
	volume = weight / DENSITY;

	printf("well,%s,your volume is %2.2f cubic feet.\n", name, volume);
	printf("your first name has %d letters,\n", letters);
	printf("and we have %d bytes to store it.\n", size);

	return 0;
}