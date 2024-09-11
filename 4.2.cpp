/*使用不同类型的字符串*/
//#include<stdio.h>
//#define good "your are extraordinary being"
//int main(void)
//{
//	char name[40];
//
//	printf("what's your name ?");
//	scanf_s("%s", name,(unsigned int)sizeof(name));
//	printf("你好，%s,%s\n", name, good);
//
//	return 0;
//}


#include <stdio.h>

int main_2(void) {
    int age;
    float height;
    char name[40];

    printf("Enter your age, height, and name: ");
    scanf_s("%d %s %f ", &age, name, (unsigned int)sizeof(name), &height);  //中文的，，逗号和英文逗号是两种东西。
 /*   scanf_s("%d %39s %f", &age, name, (unsigned int)sizeof(name), &height);*/
    printf("Age: %d, Height: %.2f, Name: %s\n", age, height, name);

    return 0;
}

//上述是说明scanf——s怎么使用的，传递的参数由两部分组成，一个是读取的字符的个数是（n-
//-1），要尽量表示在%（n-1）说明，然后是字符串的变量名，字符串长度——也是缓冲区的总大小，包含空字符。
//但是要主要其返回的一定是 unsigned int 类型，所有可以用（unsidgned int)sizeof(name)来经常
//强制的转换和说明。

//#include <stdio.h>

//int main(void) {
//    int age;
//    float height;
//    char name[40];
//
//    printf("Enter your age, name, and height: ");
//    int result = scanf_s("%d %39s %f", &age, name, (unsigned int)sizeof(name), &height);
//    if (result == 3) {  // 检查是否正确读取了三个输入
//        printf("Age: %d, Name: %s, Height: %.2f\n", age, name, height);
//    }
//    else {
//        printf("Input error!\n");
//    }
//
//    return 0;
//}
