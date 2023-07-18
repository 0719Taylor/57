#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>


//位段 -- 二进制位  位段就是为了节省空间的

//struct S
//{
//	int a : 2;//a只占2bit位空间
//	int b : 5;
//	int c : 10;
//	int d : 30;//位段后面的数字不能大于32
//};
//int main()
//{
//	struct S s;
//	printf("%d\n",sizeof(s));//8个字节
//	return 0;
//}







struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4; 
	return 0;  //调试,查看内存
}