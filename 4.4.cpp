/*����һ��ȷ���뾶��Բ���ܳ������*/
#include<stdio.h>
#define pi 3.14159
int main_4(void)
{
	float area, circum, radius;
	printf("what's your radius ");
	scanf_s("%f", &radius);
	area = pi * radius * radius;
	circum = 2 * pi * radius;
	printf("your area is %1.2f,your circum is %1.2f", area, circum);

	return 0;
}
/*�� scanf_s ��ʹ���У���ʽ˵���� %f ���ڶ�ȡ��������
��������������²���Ҫ�ṩ��������С��
��������С����ֻ�ڶ�ȡ�ַ������� %s��%c �� %[ ]��ʱ��Ҫ��
���������͸������ȱ������ͣ�ֻ��Ҫ�ṩ�����ĵ�ַ��*/