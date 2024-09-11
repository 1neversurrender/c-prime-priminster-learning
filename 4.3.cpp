//#include <stdio.h>
//#include <string.h>
//
//int main(void) {
//    const char* str = "jiuzhe afjkas    ";
//    size_t length = strlen(str);
//
//    printf("The length of the string \"%s\" is %zu.\n", str, length);
//
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main_3(void) {
//    char str[] = "hello";
//
//    printf("sizeof(str): %zu\n", sizeof(str));  // 6（包括 '\0' 终止符）
//    printf("strlen(str): %zu\n", strlen(str));  // 5（不包括 '\0' 终止符）
//
//    return 0;
//}
//同时要主要sizeof是操作符在编译的时候就会计算，而strlen是在运行的时候计算。