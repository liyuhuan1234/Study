#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//表达式求值
//C的整形算术运算总是至少以缺省整形类型的的精度来进行的
//为了获得这个精度，表达式中的字符和短整型
//操作数在使用之前被转换为普通整形，这种转换被称为整型提升

//即使两个cahr类型的相加，但是CPU执行时实际也要先转换为CPU内整型操作数的标准长度

//整型提升按照符号位填充
//负数高位补1
// 正数高位补0
//无符号整型直接补0

//int main()
//{
//	//00000000000000000000000000000101 - 5
//	//00000101 - a
//	char a = 5;
//	//00000000000000000000000001111110 - 126
//	//01111110 - b
//
//	char b = 126;
//	char c = a + b;
//	//高位补符号位之后相加 a+b
//	//00000000000000000000000000000101 
//	//00000000000000000000000001111110
//	//10000011 - c（补码）
//	//以整型打印 需先转换为整型原码 补符号位
//	//11111111111111111111111110000011 c的补码
//	//11111111111111111111111110000010 c的反码
//	//10000000000000000000000001111101 c的原码
//	//01111101
//	//打印的是整型原码
//
//	printf("%d\n", c);
//
//	return 0;
//}

//算术转换

//指针就是地址 内存单元的编号 
//指针的大小在32位平台上是4个字节，在64位平台是8个字节
//32位平台上有32根地址线代表一个地址，即4个字节
//x86是32位环境  x64是64位环境

//int main()
//{
//	char* pc = NULL;
//	short* ps = NULL;
//	int* pi = NULL;
//	double* pd = NULL;
//	//sizeof返回的值的类型是无符号整型，unsignde int
//	printf("%zu\n", sizeof(pc));
//	printf("%zu\n", sizeof(ps));
//	printf("%zu\n", sizeof(pi));
//	printf("%zu\n", sizeof(pd));
//
//	return 0;
//}


//指针类型的意义
//指针类型决定了指针在被解引用的时候访问几个字节
//如果是int*的指针，解引用方位4个字节
//如果是char*的指针，解引用访问一个字节
//如果是double*的指针，解引用访问8个字节

//指针的类型决定了指针+1或-1操作跳过几个字节
//决定了指针的步长
//如果是int*类型的指针，+1跳过4个字节
//如果是char*类型的指针，+1跳过1个字节

//int main()
//{
//	int a = 0x11223344;  
//
//
//	return 0;
//}

//野指针是指指针指向的位置是随机的 不明确的

//int main()
//{
//	int* p;
//	//p没有初始化，就意味着没有明确的指向
//	//一个局部变量不初始化，放的是随机值
//	*p = 10;//非法访问内存
//	
//	return 0;
//

//避免返回局部变量的地址

//|指针-指针|得到的是指针和指针之间元素的个数
//不是所有的指针都能相减，指向同一块空间的两个指针才能相减
//

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d", len);
//
//	return 0;
//}

//指针加指针没有意义

//二级指针

//int main()
//{
//	int a = 10;
//	//pa是一级指针
//	int* pa = &a;
//
//	//ppa是二级指针，存放一级指针变量的地址
//	//int*说明ppa指向的pa的类型是int*
//	int** ppa=&pa;
//
//	**ppa = 20;
//	printf("%d", a);
//
//	return 0;
//}

//指针数组
//存放指针的数组

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;
//
//	//parr存放指针的数组
//	int* parr[10] = { &a,&b,&c };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(parr[i]));
//	}
//
//	return 0;
//}


//int main()
//{
//	//int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			//[]相当于解引用
//			printf("%d ",parr[i][j]);
//		}
//		printf("\n");
//
//	} 
//
//	return 0;
//}


//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int height;
//};
//
//
////struct Peo
////{
////	char name[20];
////	char tele[12];
////	char sex = [5];
////	int height;
////}p1,p2;
////此时p1,p2是全局变量
//
//
////结构体内可以包含结构体
//struct St
//{
//	struct Peo p;
//	int num;
//	float f;
//};
//
////浮点数在内存中不能精确保存
//
//void print1(struct Peo p)
//{
//	//接收到结构体本身  拷贝和传过来的结构体同样的内容
//	//结构体变量.成员变量
//	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.height);
//}
//
//
//void print2(struct Peo* pp)
//{
//	//接收到结构体地址   直接找到p1，并进行调用
//	//结构体指针->成员变量
//	printf("%s %s %s %d\n", pp->name, pp->tele, pp->sex, pp->height);
//}
//
//
//int main()
//{
//	//p1是结构体变量
//	struct Peo p1 = {"张三","15596668862","男",181};
//	struct St s = { {"李四","13456788908","女",166},100,3.14f };
//	
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.height);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.height, s.num, s.f);
//	
//	print1(p1);
//	print2(&p1);
//	
//	return 0;
//}

//函数传参的时候 参数是需要压栈的
//结构体传参的时候 尽量传结构体地址


//统计二进制中一的个数
//写一个函数返回二进制中1的个数

 
//这种办法负数不行 需要转换为无符号数
//-1/2=0 
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n /= 2;
//	}
//	return count;
//}

//二进制位&1 可以得到原来的数字
//int count_num_of_1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if(((n>>1)&1)==1)
//			count++;
//	}
//	return count;
//}

//n=15
//n=n&(n-1)
//1111 n
//1110 n-1
//1110 n
//1101 n-1
//1100 n
//每执行一次 去掉一个1


//int count_num_of_1(int n)
//{
//	int count = 0;
//	while(n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}



//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n=count_num_of_1(num);
//	printf("%d\n", n);
//
//	return 0;
//}

//判断一个数是不是2的n次方
//if(n&(n-1)==0)


//求两个数2进制中有多少个bit位不同

//int count_diff_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//			count++;
//	}
//	return count;
//}

//异或操作符
//相同为0 相异为1
//统计ret中2进制为有几个1
//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	int ret = m ^ n;
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//
//	int ret=count_diff_bit(m, n);
//	printf("%d", ret);
//
//	return 0;
//}


//打印整数二进制的奇数位和偶数位
//10
//00000000000000000000000000001010
//int main()
//{
//	//获取奇数位 从高位打印
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	//获取偶数位
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//
//	return 0;
//}

//全局变量 静态变量都放在静态区
//全局变量 静态变量不初始化的时候 默认会被初始化为0
//局部变量放在栈区
//局部变量不初始化 默认值是随机值

//sizeof这个操作符返回的是size_t类型的，是无符号整型
//i=-1
//i>sizeof(i)  -1>4
//有符号整数和无符号整数比较大小
//有符号数-1会被转换为无符号数 理解为非常的正数，大于4
//-1
//10000000000000000000000000000001 原码
//11111111111111111111111111111110 反码
//11111111111111111111111111111111 补码
//将-1的补码看成无符号整数时 最高位符号位1不再被视为符号数
//所有位均为有效位 是极大的一个数

//X形图案

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//					printf("*");
//				else if (i + j == n - 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}


//获取月份天数

//int is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	//scanf获取到几个数据就返回数字几
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		int d = days[m];
//		if ((is_leap_year(y)==1)&&m==2)
//		{
//			d++;
//		}
//		printf("%d\n", d);
//	}
//
//	return 0;
//}


//判断是什么类型的三角形
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    while (scanf("%d %d %d", &a, &b, &c) == 3)
    {
        if ((((a + b) > c) && ((a + c) > b) && ((b + c) > a)) && (((a - b) < c) && ((a - c) < b) && ((b - c) < a)) && (((b - a) < c) && ((c - a) < b) && ((c - b) < a)))
        {
            if ((a == b) && (b == c) && (a == c))
                printf("Equilateral triangle!\n");
            else if ((a == b) || (a == c) || (b == c))
                printf("Isosceles triangle!\n");
            else
                printf("Ordinary triangle!\n");
        }
        else
        {
            printf("Not a triangle!\n");
        }
    }

    return 0;
}