#include<iostream>
#include<string>
using namespace std;
//gcc 要编译的文件(c语言的编译)
//g++ 要编译的文件 -o 生成的编译文件的名称（c++的编译)--"-o是为了指定运行程序的名称"
//编译后会生成一个执行文件，之后通过命令 ./编译文件的名称 来运行
//-c选项为了激活预处理、编译和汇编，生成.o的目标代码文件(编译的时候必须的)
//多个文件的源代码必须先编译成目标代码(-c)，再链接为执行文件
//例：1、g++ 要编译的文件 -c -o 生成的目标代码文件的名称(不需将头文件变为目标代码文件)
//2、之后将多个目标代码文件链接起来成为一个执行文件
//3、g++ 目标代码1 目标代码2 -o 可执行文件名称
//4、最后执行可执行文件即可
