//#include<stdio.h>
//int main(void)
//{
//	char name[40];
//	printf("���������Լ�������������\n");
//	scanf_s("your name %s", name, (unsigned int)sizeof(name));  //���ﲻ�ԣ�"" �ֲ����г��˻�λ����֮��������ַ�
//	printf("your name is %s", name);
//
//	return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//    char name[40];
//    printf("please enter your name\n");
//    scanf_s("your name %s", name, (unsigned int)sizeof(name));
//    printf("your name is %s", name);
//
//    return 0;
//
//
//
//}
//#include <stdio.h>
//#include <string.h>  // ���� strlen ������ͷ�ļ�

//int main(void)
//{
//    char name[40];
//    printf("���������Լ������������֣�");
//    if (fgets(name, sizeof(name), stdin)) {
//        // Remove newline character if it exists
//        size_t len = strlen(name);
//        if (len > 0 && name[len - 1] == '\n') {
//            name[len - 1] = '\0';
//        }
//        printf("your name is %s\n", name);
//    }
//    else {
//        printf("Error reading input.\n");
//    }
//
//    return 0;
//}

/*scanf_s��ȡ�ַ����İ���*/
//#include <stdio.h>
//
//int main_qwer(void)
//{
//    char name[40];
//    printf("���������������");
//    scanf_s("%39s", name, sizeof(name));
//    printf("��������� %s\n", name);
//
//    return 0;
//}

/*scanf_s��ȡ�����͸������İ���*/
//#include <stdio.h>
//
//int main_uiop(void)
//{
//    int age;
//    float height;
//    printf("����������������ߣ�");
//    scanf_s("%d %f", &age, &height);
//    printf("��������� %d �꣬����� %.2f ��\n", age, height);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main_haunhang(void) {
//    printf("Hello,\vWorld!\n"); // \v �Ǵ�ֱ�Ʊ��
//    printf("Page 1\fPage 2\n"); // \f �ǻ�ҳ��
//    return 0;
//}
/*Hello,
World!
Page 1
Page 2*/
 /*
��C�����У��հ��ַ���whitespace characters��ָ���������ָ��ʷ���Ԫ��
���������ʽ�Լ���ĳЩ��������ڿ���������ַ�����׼C���Զ�����һЩ�հ��ַ�����Щ�ַ�ͨ��������

�ո��ַ���Space����' '
ˮƽ�Ʊ����Horizontal Tab����\t
�����ַ���Newline����\n
��ֱ�Ʊ����Vertical Tab����\v
�س��ַ���Carriage Return����\r
��ҳ����Form Feed����\f
��Щ�հ��ַ���������Ҫ���������¼������棺

�ָ�������Դ�����У��հ��ַ������ָ���ʶ�����ؼ��֡������ȴʷ���Ԫ�����磬�ո��ַ����ڷָ�������������˵������
��ʽ�����հ��ַ����������߸��õظ�ʽ�����룬ʹ������ӿɶ���
���������ʽ������������� printf �У��հ��ַ�������������ĸ�ʽ��*/
//#include <stdio.h>
//
//int main_yanshianli(void) {
//    char name1[40], name2[40];
//    //scanf_s("%s,%s", name1, sizeof(name1), name2, sizeof(name2));
//    scanf_s("%39[^,],%39s", name1, sizeof(name1), name2, sizeof(name2));
//    printf("%s,%s", name1, name2);
//        return 0;
//}

//jsdfk, sdfkjs
//jsdfk, ���������������������������������������������������������������� ? ? ?
//F : \c learnning\chapter4\x64\Debug\chapter4.exe(���� 33652)���˳�������Ϊ 0��
//��������رմ˴���. . .

/*���Ĵ���ʹ�� scanf_s ��ȡ�����Զ��ŷָ�����
����������ʽ�ַ����ʹ��ݵĲ�������ȷ�����¶�ȡʧ�ܡ�
Ϊ����ȷ��ȡ�����Զ��ŷָ����ַ�������Ҫ�ڸ�ʽ�ַ�������ȷָ����ʽ�����ݻ�������С��*/

/*%39[^,]��

��ȡ���39���ַ���ֱ���������Ż򻺳�������
��ʽ˵������39ȷ������ȡ39���ַ���
sizeof(name1)��

����ʵ�ʻ�������С������scanf_s����name1���ܴ�С��40���ַ�������������ʱ�ı߽��顣
������ϣ�

39�Ǳ���ʱ��飬ȷ����ʽ˵���������ȡ����Ԥ���ַ�����
sizeof(name1)������ʱ��飬ȷ����������Сƥ�䡣
ͨ������˫�ر��ϻ��ƣ�scanf_s�ṩ�˸��ߵİ�ȫ�ԣ���ֹ�����Ļ�����������⡣

ע������
û���ظ�����Ȼ��ʽ˵�����ͻ�������С�ṩ�����Ƶ���Ϣ�������ǲ������ظ��ġ������ڲ�ͬ�Ľ׶Σ�����ʱ������ʱ���ṩ�˰�ȫ��顣
��������СҪ��ȷ��ȷ�����ݵĻ�������С׼ȷƥ��ʵ�ʷ���Ĵ�С������ᵼ��δ������Ϊ��
�������Ը���ȫ�ض�ȡ�û����룬��ȷ���������������������ʱ���ᵼ�»����������*/

//�����������diamond����c����
/*Source Code (.c) 
    ��
Preprocessor (cpp)
    ��
Preprocessed Code (.i)
    ��
Compiler (gcc)
    ��
Assembly Code (.s)
    ��
Assembler (as)
    ��
Object File (.o)
    ��
Linker (ld)
    ��
Executable File
    ��
Execution
*/
/*��д���룺ʹ���ı��༭����IDE��дCԴ���룬ȷ���﷨��ȷ��
Ԥ������������Ԥ����ָ���չ�꣬����ͷ�ļ�����������ȡ�
���룺����������﷨����Դ����ת��Ϊ�����룬�Ż����롣
��ࣺ�������������ת��Ϊ�����룬����Ŀ���ļ���
���ӣ������������Ŀ���ļ��Ϳ��ļ����ӳ�һ����ִ���ļ��������ⲿ���ź�������
ִ�У�����ϵͳ���ز�ִ�����ɵĿ�ִ���ļ���*/



