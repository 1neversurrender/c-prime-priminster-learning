/*ʹ�ò�ͬ���͵��ַ���*/
//#include<stdio.h>
//#define good "your are extraordinary being"
//int main(void)
//{
//	char name[40];
//
//	printf("what's your name ?");
//	scanf_s("%s", name,(unsigned int)sizeof(name));
//	printf("��ã�%s,%s\n", name, good);
//
//	return 0;
//}


#include <stdio.h>

int main_2(void) {
    int age;
    float height;
    char name[40];

    printf("Enter your age, height, and name: ");
    scanf_s("%d %s %f ", &age, name, (unsigned int)sizeof(name), &height);  //���ĵģ������ź�Ӣ�Ķ��������ֶ�����
 /*   scanf_s("%d %39s %f", &age, name, (unsigned int)sizeof(name), &height);*/
    printf("Age: %d, Height: %.2f, Name: %s\n", age, height, name);

    return 0;
}

//������˵��scanf����s��ôʹ�õģ����ݵĲ�������������ɣ�һ���Ƕ�ȡ���ַ��ĸ����ǣ�n-
//-1����Ҫ������ʾ��%��n-1��˵����Ȼ�����ַ����ı��������ַ������ȡ���Ҳ�ǻ��������ܴ�С���������ַ���
//����Ҫ��Ҫ�䷵�ص�һ���� unsigned int ���ͣ����п����ã�unsidgned int)sizeof(name)������
//ǿ�Ƶ�ת����˵����

//#include <stdio.h>

//int main(void) {
//    int age;
//    float height;
//    char name[40];
//
//    printf("Enter your age, name, and height: ");
//    int result = scanf_s("%d %39s %f", &age, name, (unsigned int)sizeof(name), &height);
//    if (result == 3) {  // ����Ƿ���ȷ��ȡ����������
//        printf("Age: %d, Name: %s, Height: %.2f\n", age, name, height);
//    }
//    else {
//        printf("Input error!\n");
//    }
//
//    return 0;
//}
