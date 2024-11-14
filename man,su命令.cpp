#include<iostream>
using namespace std;
//当操作过程中有某些忘记的命令时就可以查询linux编写的帮助手册
//通过man命令查询：man[手册编号(可写可不写)] 命令名
//通过man命令进入帮助手册后，按jk进行上下翻动，空格进行向下翻动，按q退出帮助文档

//一个系统可以有多个用户，所以当在系统中切换用户时可以用su命令：su 用户名--切换到这个用户
//在系统中有最高权限的用户root
//su lei-duan--切换到lei-duan这个用户
//su--切换到特权用户root，但在Ubuntu中没有root权限，所以不能切换成功
//可以用sudo su这个命令来切换到root特权用户