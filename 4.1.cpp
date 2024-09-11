//演示与用户交互
//这个代码很哟问题，关于scanf——s的使用还是v不太明白

#include<stdio.h>
#include<string.h>  //提供strlen()函数的原型，就是可以使用strlen#define
#define  DENSITY 62.4
int main_1()
{

	float weight, volume;
	int size, letters;
	char name[40];

	printf("你的名字是什么\n");
	scanf_s("%s", name,(unsigned int)sizeof(name));


	printf("%s,what's your weight in pounds ?\n", name);
	scanf_s("%f", &weight);

	size = sizeof(name);//sizeof只是计算了有效字符，不是所有的字符
	letters = strlen(name);//strlen（）会计算name变量对应的所有内存空间（以字节位单位）
	volume = weight / DENSITY;

	printf("well,%s,your volume is %2.2f cubic feet.\n", name, volume);
	printf("your first name has %d letters,\n", letters);
	printf("and we have %d bytes to store it.\n", size);

	return 0;
}