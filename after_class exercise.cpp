//#include<stdio.h>
//int main(void)
//{
//	char name[40];
//	printf("请你输入自己的姓名和名字\n");
//	scanf_s("your name %s", name, (unsigned int)sizeof(name));  //这里不对，"" 种不能有除了换位符号之外的其他字符
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
//#include <string.h>  // 包含 strlen 函数的头文件

//int main(void)
//{
//    char name[40];
//    printf("请你输入自己的姓名和名字：");
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

/*scanf_s读取字符串的案例*/
//#include <stdio.h>
//
//int main_qwer(void)
//{
//    char name[40];
//    printf("请输入你的姓名：");
//    scanf_s("%39s", name, sizeof(name));
//    printf("你的姓名是 %s\n", name);
//
//    return 0;
//}

/*scanf_s读取整数和浮点数的案例*/
//#include <stdio.h>
//
//int main_uiop(void)
//{
//    int age;
//    float height;
//    printf("请输入你的年龄和身高：");
//    scanf_s("%d %f", &age, &height);
//    printf("你的年龄是 %d 岁，身高是 %.2f 米\n", age, height);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main_haunhang(void) {
//    printf("Hello,\vWorld!\n"); // \v 是垂直制表符
//    printf("Page 1\fPage 2\n"); // \f 是换页符
//    return 0;
//}
/*Hello,
World!
Page 1
Page 2*/
 /*
在C语言中，空白字符（whitespace characters）指的是用来分隔词法单元、
调整代码格式以及在某些情况下用于控制输出的字符。标准C语言定义了一些空白字符，这些字符通常包括：

空格字符（Space）：' '
水平制表符（Horizontal Tab）：\t
新行字符（Newline）：\n
垂直制表符（Vertical Tab）：\v
回车字符（Carriage Return）：\r
换页符（Form Feed）：\f
这些空白字符的作用主要体现在以下几个方面：

分隔符：在源代码中，空白字符用来分隔标识符、关键字、常量等词法单元。例如，空格字符用于分隔变量名和类型说明符。
格式化：空白字符帮助开发者更好地格式化代码，使代码更加可读。
控制输出格式：在输出函数如 printf 中，空白字符用来控制输出的格式。*/
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
//jsdfk, 烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫 ? ? ?
//F : \c learnning\chapter4\x64\Debug\chapter4.exe(进程 33652)已退出，代码为 0。
//按任意键关闭此窗口. . .

/*您的代码使用 scanf_s 读取两个以逗号分隔的字
符串，但格式字符串和传递的参数不正确，导致读取失败。
为了正确读取两个以逗号分隔的字符串，需要在格式字符串中正确指定格式并传递缓冲区大小。*/

/*%39[^,]：

读取最多39个字符，直到遇到逗号或缓冲区满。
格式说明符中39确保最多读取39个字符。
sizeof(name1)：

传递实际缓冲区大小，告诉scanf_s函数name1的总大小是40个字符。这用于运行时的边界检查。
两者配合：

39是编译时检查，确保格式说明符不会读取超过预期字符数。
sizeof(name1)是运行时检查，确保缓冲区大小匹配。
通过这种双重保障机制，scanf_s提供了更高的安全性，防止常见的缓冲区溢出问题。

注意事项
没有重复：虽然格式说明符和缓冲区大小提供了类似的信息，但它们并不是重复的。它们在不同的阶段（编译时和运行时）提供了安全检查。
缓冲区大小要正确：确保传递的缓冲区大小准确匹配实际分配的大小，否则会导致未定义行为。
这样可以更安全地读取用户输入，并确保在遇到恶意或意外输入时不会导致缓冲区溢出。*/

//计算机的运行diamond流程c语言
/*Source Code (.c) 
    ↓
Preprocessor (cpp)
    ↓
Preprocessed Code (.i)
    ↓
Compiler (gcc)
    ↓
Assembly Code (.s)
    ↓
Assembler (as)
    ↓
Object File (.o)
    ↓
Linker (ld)
    ↓
Executable File
    ↓
Execution
*/
/*编写代码：使用文本编辑器或IDE编写C源代码，确保语法正确。
预处理：处理所有预处理指令，扩展宏，包含头文件，条件编译等。
编译：编译器检查语法，将源代码转换为汇编代码，优化代码。
汇编：汇编器将汇编代码转换为机器码，生成目标文件。
链接：链接器将多个目标文件和库文件链接成一个可执行文件，处理外部符号和依赖。
执行：操作系统加载并执行生成的可执行文件。*/



