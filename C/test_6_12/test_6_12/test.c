#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

//实用调试技巧
// Debug是调试版本
//Release是发布版本
//F5开始调试 走完全部代码 运行到断点处
//F10每次走一步
//F9打断点 取消断点
//F11进入函数内部

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20 ;
//	int c = Add(a,b);
//	printf("%d", c);
//
//	return 0;
//}

//1.栈区内存的使用习惯是先使用高地址处的空间，再使用低地址的空间
//2.数组随着下标增长，地址是由低到高变化
//3.如果i和arr之间有适当的空间，利用数组的越界操作可能会覆盖到i
//可能会导致死循环
// 主要原因是对数组进行了越界访问，因此要避免数组越界访问
//可以通过先创建数组，再创建i变量解决，先用高地址，再用低地址

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i]=0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//strcpy会将原字符串中的\0也拷贝过去
//strcpy函数返回的是目标空间的起始地址


//const 修饰的变量不能修改
//但是可以通过取地址改
//const 修饰指针变量
//1.const放在*号左边
//表示p指向的对象不饿能通过p来改变  但是p变量指向的地址可以改变
//const int* p
//int const* p

//2.const放在*号右边
//int* const p
//表示p指向的对象可以通过p来改变，但是不能修改p指向的地址


//int main()
//{
//	const int num = 0;
//	int* p=&num;
//	*p = 20;
//
//	return 0;
//}


//求字符串长度

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "hello bit";
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


//判断三个数相等不能使用a==b==c
//而应该使用a==b&&b==c

//数据在内存中存放时，按照大小端字节序存储
//倒放

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//任何一个变量或者表达式都有两个属性
//1.值属性
//2.类型属性

//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
// //%x 16进制打印
//	printf("%x\n", a);
//	return 0;
//}

//写一个函数打印arr数组的内容，不使用数组下标，使用指针

//void print(int* p,int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//
//	return 0;
//}

//写一个函数逆序字符串

//void Reverse(char* p, int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		char tmp = '0';
//		tmp = *(p + left);
//		*(p + left) = *(p + right);
//		*(p + right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	char arr[10001] = { 0 };
//	//scanf遇到空格就不继续读
//	//gets
//	gets(arr);
//	int len = strlen(arr);
//	Reverse(arr, len);
//	printf("%s\n", arr);
//
//	return 0;
//}

//计算Sn=a+aa+aaa+aaaa+aaaaa的前五项之和，其中a是一个数字

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ret =ret*10+a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//判断一个三位数是否是水仙花数
//int main()
//{
//    int m = 0;
//    int n = 0;
//    while (scanf("%d %d", &m, &n) == 2)
//    {
//        int i = 0;
//        int count = 0;
//        for (i = m; i <= n; i++)
//        {
//            int a = pow(i % 10, 3);
//            int b = pow((i / 10) % 10, 3);
//            int c = pow((i / 100), 3);
//            if ((a+b+c) == i)
//            {
//                printf("%d ", i);
//                count++;
//            }
//         }
//        if (count == 0)
//            printf("no\n");
//    }
//
//    return 0;
//}


//打印菱形

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//上
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//下
//	for (i = 0; i < line-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * (line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//喝汽水 一瓶汽水一元，2个空瓶可以换一瓶汽水 给20元 可以喝多少汽水

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//
//	while (empty >= 2)
//	{
//		total+=empty / 2;
//		empty=empty / 2 + empty % 2;
//	}
//	//实际上是2n-1
//	//if(money>0)
//	//printf("%d\n",2*money-1);
//	//else
//	//printf("%d\n",0)
//	printf("%d\n", total);
//
//	return 0;
//}

//求最小公倍数
//a*i==b*j=m
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//	printf("%d", a * i);
//
//	return 0;
//}

//倒置字符串
//I like beijing.
//beijing. like I
//1、把整个字符串逆置
//2、把每个单词逆置

//
//void Reverse(char* left,char* right )
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp=*left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[101] = { 0 };
//	//gets()
//	gets(arr);
//	int len = strlen(arr);
//
//	Reverse(arr, arr + len - 1);
//
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' '&&*end!='\0')
//		{
//			end++;
//		}
//		Reverse(start, end - 1);
//		if(*end!='\0')
//			end++;
//		start = end;
//	}
//
//	printf("%s", arr);
//
//	return 0;
//}