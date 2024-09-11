//#include <stdio.h>
//
//int main_shuchu() {
//    printf("This is the first line.");
//    // 此时数据在缓冲区中，并未输出到屏幕
//    fflush(stdout); // 显式刷新缓冲区，数据立即输出到屏幕
//
//    printf("This is the second line.\n");
//    // '\n' 会导致行缓冲区刷新，数据输出到屏幕
//
//    // 程序结束时，缓冲区自动刷新，数据输出到屏幕
//    return 0;



/*printf("This is the first line."); 将数据写入缓冲区，但未立即输出。
fflush(stdout); 显式刷新缓冲区，将数据输出到屏幕。
printf("This is the second line.\n"); 中的换行符触发行缓冲刷新，数据立即输出。
printf("This is the third line."); 数据写入缓冲区，程序结束时缓冲区自动刷新，数据输出到屏幕。
总结
输出缓冲区是内存中的一块区域，用于暂时存储待输出的数据，
从而提高I/O操作效率。它并不是内存条上的特定位置，而是内存中的动态区域，
其位置和大小由操作系统和运行时库管理。通过理解和合理使用输出缓冲区，
可以显著提高程序的性能和响应速度。*/

//#include <stdio.h>
//#include <limits.h>
//
//int main_s() {
//    printf("Size of int: %zu bytes\n", sizeof(int));
//    printf("Signed int range: %d to %d\n", INT_MIN, INT_MAX);
//    printf("Unsigned int range: 0 to %u\n", UINT_MAX);
//    return 0;
//}

/*Size of int: 4 bytes
Signed int range: -2147483648 to 2147483647
Unsigned int range: 0 to 4294967295*/


//#include <stdio.h>

//int main() {
//    float f = 123.456;
//    double d = 123.456;
//    long double ld = 123.456L;
//
//    // 使用 %a 和 %A 打印 float 型
//    printf("float 型 (%%a)： %a\n", f);
//    printf("float 型 (%%A)： %A\n", f);
//
//    // 使用 %a 和 %A 打印 double 型
//    printf("double 型 (%%a)： %e\n", d);
//    printf("double 型 (%%A)： %E\n", d);
//
//    // 使用 %a 和 %A 打印 long double 型
//    printf("long double 型 (%%a)： %La\n", ld);
//    printf("long double 型 (%%A)： %LA\n", ld);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    double num1 = 1234.567;
//    double num2 = 0.00001234567;
//    double num3 = 123456789.0;
//
//    // 使用 %g 转换说明符
//    printf("num1 (%%g) 输出： %g\n", num1);
//    printf("num2 (%%g) 输出： %g\n", num2);
//    printf("num3 (%%g) 输出： %g\n", num3);
//
//    // 设置精度为 5
//    printf("num1 (%%.5g) 输出： %.5g\n", num1);
//    printf("num2 (%%.5g) 输出： %.5g\n", num2);
//    printf("num3 (%%.5g) 输出： %.5g\n", num3);
//
//    //这里的精度指的是有效数值，是包含小数点之前的有效位数的·1.
//
//    /*num1 (%g) 输出： 1234.57
//    num2 (%g) 输出： 1.23457e-05
//    num3 (%g) 输出： 1.23457e+08
//    num1 (%.5g) 输出： 1234.6
//    num2 (%.5g) 输出： 1.2346e-05
//    num3 (%.5g) 输出： 1.2346e+08*/
//
//    return 0;
//}



  

