#include <stdio.h>
#include <string.h>  // �ṩstrlen()������ԭ��
#define DENSITY 62.4

int main_11()
{
    float weight, volume;
    int size, letters;
    char name[40];

    printf("���������ʲô\n");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  // ȥ�����з�
    //��ôȥ�����з��ģ���

    printf("%s, ��������Ƕ��ٰ�?\n", name);
    scanf_s("%f", &weight);

    size = sizeof(name);
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("�ð�, %s, �������� %2.2f ����Ӣ�ߡ�\n", name, volume);
    printf("��������� %d ����ĸ,\n", letters);
    printf("������ %d �ֽ����洢����\n", size);

    return 0;
}


//#include <stdio.h>
//#include <string.h>  // �ṩ strlen() ������ԭ��
//#define DENSITY 62.4

//int main() {
//    float weight, volume;
//    int size, letters;
//    char name[40];
//
//    printf("���������ʲô\n");
//    if (fgets(name, sizeof(name), stdin) != NULL) {
//        // ȥ�����з�
//        name[strcspn(name, "\n")] = '\0';
//
//        printf("%s, ��������Ƕ��ٰ�?\n", name);
//        scanf("%f", &weight);
//
//        size = sizeof(name);
//        letters = strlen(name);
//        volume = weight / DENSITY;
//
//        printf("�ð�, %s, �������� %2.2f ����Ӣ�ߡ�\n", name, volume);
//        printf("��������� %d ����ĸ,\n", letters);
//        printf("������ %d �ֽ����洢����\n", size);
//    }
//    else {
//        printf("��ȡ����ʱ����\n");
//    }
//
//    return 0;
//}
