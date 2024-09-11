//#include <stdio.h>
//#include <limits.h>
//#include <float.h>
//
//int main() {
//    // 整形数据类型
//    printf("Integer types:\n");
//    printf("Size of char: %zu bytes, Range: %d to %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
//    printf("Size of unsigned char: %zu bytes, Range: 0 to %u\n", sizeof(unsigned char), UCHAR_MAX);
//    printf("Size of short: %zu bytes, Range: %d to %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
//    printf("Size of unsigned short: %zu bytes, Range: 0 to %u\n", sizeof(unsigned short), USHRT_MAX);
//    printf("Size of int: %zu bytes, Range: %d to %d\n", sizeof(int), INT_MIN, INT_MAX);
//    printf("Size of unsigned int: %zu bytes, Range: 0 to %u\n", sizeof(unsigned int), UINT_MAX);
//    printf("Size of long: %zu bytes, Range: %ld to %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
//    printf("Size of unsigned long: %zu bytes, Range: 0 to %lu\n", sizeof(unsigned long), ULONG_MAX);
//    printf("Size of long long: %zu bytes, Range: %lld to %lld\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
//    printf("Size of unsigned long long: %zu bytes, Range: 0 to %llu\n", sizeof(unsigned long long), ULLONG_MAX);
//
//    // 浮点型数据类型
//    printf("\nFloating-point types:\n");
//    printf("Size of float: %zu bytes, Range: %.10e to %.10e\n", sizeof(float), FLT_MIN, FLT_MAX);
//    printf("Size of double: %zu bytes, Range: %.10e to %.10e\n", sizeof(double), DBL_MIN, DBL_MAX);
//    printf("Size of long double: %zu bytes, Range: %.10Le to %.10Le\n", sizeof(long double), LDBL_MIN, LDBL_MAX);
//
//    return 0;
//}

/*Integer types:
Size of char: 1 bytes, Range: -128 to 127
Size of unsigned char: 1 bytes, Range: 0 to 255
Size of short: 2 bytes, Range: -32768 to 32767
Size of unsigned short: 2 bytes, Range: 0 to 65535
Size of int: 4 bytes, Range: -2147483648 to 2147483647
Size of unsigned int: 4 bytes, Range: 0 to 4294967295
Size of long: 4 bytes, Range: -2147483648 to 2147483647
Size of unsigned long: 4 bytes, Range: 0 to 4294967295
Size of long long: 8 bytes, Range: -9223372036854775808 to 9223372036854775807
Size of unsigned long long: 8 bytes, Range: 0 to 18446744073709551615

Floating-point types:
Size of float: 4 bytes, Range: 1.1754943508e-38 to 3.4028234664e+38
Size of double: 8 bytes, Range: 2.2250738585e-308 to 1.7976931349e+308
Size of long double: 8 bytes, Range: 2.2250738585e-308 to 1.7976931349e+308

F:\c learnning\chapter4\x64\Debug\chapter4.exe (进程 16192)已退出，代码为 0。
按任意键关闭此窗口. . .*/
//#include<stdio.h>
//int main(void)
//{
//	float a;
//	double b;
//	long double c;
//	scanf_s("%f,%f,%f", &a, &b, &c);
//	printf("%f,%lf,%Lf", a, b, c);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main(void)
//{
//    float a = 1.0/3.0;
//    double b = 1.0 / 3.0;
//    long double c = 1.0 / 3.0 ;
//
//    
//
//    // 修正: 传递变量而不是地址
//    printf("%f, %.10lf, %.20Lf\n", a, b, c);
//
//    return 0;
//}

/*0.333333, 0.3333333333, 0.33333333333333331483*/

//#include <stdio.h>
//#include <mpfr.h>
//
//int main(void)
//{
//    mpfr_t a, b, c;
//    mpfr_init2(a, 256);  // 256 bits precision
//    mpfr_init2(b, 256);
//    mpfr_init2(c, 256);
//
//    mpfr_set_d(a, 1.0, MPFR_RNDN);
//    mpfr_set_d(b, 3.0, MPFR_RNDN);
//    mpfr_div(c, a, b, MPFR_RNDN);
//
//    mpfr_printf("Result: %.50Rf\n", c);  // Print with 50 decimal places
//
//    mpfr_clears(a, b, c, (mpfr_ptr)0);
//    return 0;
//}
