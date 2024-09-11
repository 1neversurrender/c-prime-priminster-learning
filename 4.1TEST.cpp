#include <stdio.h>
#include <string.h>  // 提供strlen()函数的原型
#define DENSITY 62.4

int main_11()
{
    float weight, volume;
    int size, letters;
    char name[40];

    printf("你的名字是什么\n");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  // 去掉换行符
    //怎么去掉换行符的？？

    printf("%s, 你的体重是多少磅?\n", name);
    scanf_s("%f", &weight);

    size = sizeof(name);
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("好吧, %s, 你的体积是 %2.2f 立方英尺。\n", name, volume);
    printf("你的名字有 %d 个字母,\n", letters);
    printf("我们有 %d 字节来存储它。\n", size);

    return 0;
}


//#include <stdio.h>
//#include <string.h>  // 提供 strlen() 函数的原型
//#define DENSITY 62.4

//int main() {
//    float weight, volume;
//    int size, letters;
//    char name[40];
//
//    printf("你的名字是什么\n");
//    if (fgets(name, sizeof(name), stdin) != NULL) {
//        // 去掉换行符
//        name[strcspn(name, "\n")] = '\0';
//
//        printf("%s, 你的体重是多少磅?\n", name);
//        scanf("%f", &weight);
//
//        size = sizeof(name);
//        letters = strlen(name);
//        volume = weight / DENSITY;
//
//        printf("好吧, %s, 你的体积是 %2.2f 立方英尺。\n", name, volume);
//        printf("你的名字有 %d 个字母,\n", letters);
//        printf("我们有 %d 字节来存储它。\n", size);
//    }
//    else {
//        printf("读取名字时出错。\n");
//    }
//
//    return 0;
//}
