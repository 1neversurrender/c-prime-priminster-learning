/*计算一个确定半径的圆的周长和面积*/
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
/*在 scanf_s 的使用中，格式说明符 %f 用于读取浮点数，
但是在这种情况下不需要提供缓冲区大小。
缓冲区大小参数只在读取字符串（如 %s、%c 和 %[ ]）时需要。
对于整数和浮点数等标量类型，只需要提供变量的地址。*/