#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//C语言进阶
//sizeof(long)>=sizeof(int)
//long 32位4字节 64位8字节
//char 1
//short 1
//int 4
//float 4
//double 8
//long long 8

//字符得本质是ASCII码值 是整型，所以划分到整型家族
//char  是signed char还是unsigned char是标准未规定的 取决于编译器得实现
// 
//signed char
//unsigned char

//int  int a -> signed int 等价
//signed int 
//unsigned int 

//short -> singed short

//long -> signed long

//long long -> signed long long

//生活中有些数据是没有负数的 
//身高 体重 长度
//int a
//a是一个整型 有符号的整型 最高位代表正负符号
//符号位是0表示正数
//符号位是1表示负数

//unsigned int 最高位不表示符号

//浮点型家族
//float  精度低 存储的数据范围较小
//double  精度高 存储的数据范围更大

//void test(void)   第一个void表示函数不会返回值
//第二个void 表示函数不需要传任何参数

//数值有不同的表示形式
//2进制
//8进制
//10进制
//16进制

//整数的2进制也有三种表示形式
// 1.正整数 原码反码补码相同
// 2.负整数 原码反码补码需要计算
//原码 符号位1表示负数 0表示正数
//反码 符号位不变 其他位按位取反
//补码 反码+1

//20
//00000000 00000000 00000000 00010100 - 原码 反码 补码相同
// 0x00 00 00 14 16进制
//-10
//10000000000000000000000000001010 - 原码
//11111111111111111111111111110101 - 反码
//11111111111111111111111111110110 - 补码

//内存中存的是2进制
//整数在内存中存的是补码的2进制序列
//CPU只有加法器

//使用补码 可以将符号位和数值域统一处理
//补码取反+1也可以得到原码 可逆

//大小端
//0x11223344
//大端字节序存储  
//把一个数据高位字节序的内容存放在低地址处，把低位字节序放在高地址处
//0x 11 22 33 44
//小端字节序存储
//把一个数据高位字节序的内容存放在高地址处，把低位字节序放在低地址处
//0x 44 33 22 11
//大小端存储是硬件决定的
//x86是小端


//写代码判断机器是大端还是小端存储

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}


//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d, b=%d, c=%d", a, b, c);
//
//	return 0;
//}

//整型提升 高位补符号位
//无符号数高位补0
//char - -128-127

//int main()
//{
//	char a = -128;
//	//a本身是有符号的 整型提升需要补符号位
//	printf("%u\n", a);
//	printf("%d", a);
//
//	return 0;
//}

//signed int 和unsigned int 相加按照unsigned int进行

//unsigned char的取值范围是0-255

//strlen 求字符个数 '\0'之前的字符个数 返回值是unsigned int

//以int形式存储 以float形式取 
//或者以float 形式存储 以int 形式取 都会出错 取不到想要的值

//浮点数存储规则

//浮点数小数点后的位数无限逼近原始数 可能无法精确保存

//int main()
//{
//	float f = 5.5;
//	//5.5
//	//101.1
//	//1.011*2^2
//	//s=0 m=1.011 e=2
//	//e=e+127=129
//	// m 中的第一个1不存 后面补0 
//	//0 10000001 01100000000000000000000
//	//0x 40 b0 00 00
//
//	return 0;
//}

//写一个函数实现数组中的奇数位于数组的前半部分
//偶数位于数组的后半部分


//void move_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//从左向右找偶数
//		while ((left<right)&&arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//从右向左找奇数
//		while ((left < right) && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", arr+i);
//	}
//	move_odd_even(arr, sz);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//合并两个升序排列的序列

//int main()
//{
//	int n= 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[n];
//	int arr2[m];
//	int arr3[n + m];
//
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//
//	//比较大小并直接打印
//	int j = 0;
//	int k = 0;
//	int r = 0;
//	while (j < n && k < m)
//	{
//		if (arr1[j] < arr2[k])
//		{
//			arr3[r++]=arr1[j];
//			j++;
//		}
//		else
//		{
//			arr3[r++]=arr2[k];
//			k++;
//		}
//		//其中一个数组已经打印完毕
//	}
//	if (j < n)
//	{
//		for (; j < n; j++)
//		{
//			arr3[r++] = arr1[j];
//		}
//	}
//	else
//	{
//		for (; k< m; k++)
//		{
//			arr3[r++] = arr2[k];
//		}
//	}
//	for (i = 0; i < m+n; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//
//	return 0;
//} 

//char* p="abcdef" 把字符串首字符a的地址赋给了p

//printf("%s\n",p) %s表明打印一个字符串 p给首字母地址 可以打印整个字符串

//相同常量字符串 不会开辟两个空间 两个指针可以同时指向这个数组 即p1==p2
//但是用两个数组数组存相同两个字符串 会创建两块空间存储 即arr1!=arr2

//int* arr1[6] 存放整型指针的数组
//char* arr2[10] 存放字符指针的数组

//数组指针  指向数组的指针 存放数组的地址
// int (*p2)[10]=&arr
//int (*p2)[10] p2市数组指针 该数组有10个元素 每个元素是int类型


//数组名通常都是表示首元素地址
//但是有两个例外
//1.sizeof(arr),这里的数组名表示整个数组 计算的是整个数组的大小
//2.&arr 表示的是整个数组 所以&arr取出的是真个数组的地址

//char* (*pc)[5]=&arr

//二维数组的首元素是第一行
//即数组名表示第一行

//int arr[5]  整型数组
//int *parr1[10] 整型指针数组
//int (*paar2)[10] 数组指针
//int (*parr3[10])[5]  存放数组指针的数组

//形参的二维数组行可以省略 列不能省略
//int arr[][5]

//指针数组

//函数指针  指向函数的指针
//&函数名 取出函数的地址
//函数名 也是取出数组的地址

//int (*pf)(int ,int)=&Add
//(*pf)(2,3)

//int main()
//{
//	//指针数组
//	int* arr[4];
//	char* ch[5];
//	int** p = arr;
//
//	//数组指针
//	int arr2[5];
//	int (* pa)[5] = &arr2;
//
//	char* arr3[6];
//	char* (* p3)[6] = &arr3;
//
//	return 0;
//}

//int test(const char* str)
//{
//	return 0;
//}
//
//
//int main()
//{
//	//函数指针  也是一种指针，是指向函数的指针
//	printf("%p\n", test);
//	printf("%p\n", &test);
//
//	int (*pf)(const char*) = test;
//	(*pf)("abc");
//	pf("abc"); 
//
//	return 0;
//}


//typedef void(*pf_t)(int)  把void(*)(int)类型重命名为pf_t


//函数指针用途

//写一个计算器

//void menu()
//{
//	printf("**************************************\n");
//	printf("************ 1.Add  2.Sub ************\n");
//	printf("************ 3.Mul  4.Div ************\n");
//	printf("**************  0.退出  **************\n");
//	printf("**************************************\n");
//
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	printf("请输入两个操作数：>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//
//	do 
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	}while(input);
//
//	return 0;
//}


//把函数指针放在数组中就是函数指针数组

//int main()
//{
//	//函数指针数组
//	//转移表
//	int (*arr)(int, int)[4] = { Add,Sub,Mul,Div };
//
//	//指向函数数组的指针
//	int (*(*pparr)[4])(int,int) = &arr;
//
//	return 0;
//}

//回调函数
//通过函数指针调用的函数

//冒泡排序
//智能排序整型数据
//

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz -i-1; j++)
//		{
//			//检查是否已经有序
//			if (arr[j + 1] < arr[j])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//
//	}
//}

//比较两个整型元素
//void* 是没有具体类型的指针 可以接收任意类型的地址 不能解引用 
//也不能+-操作
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//
//int main()
//{
//	int arr[] = { 19,20.40,9,8,7,6,5,4,3,2,1,0 };
//	//把数组排成升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*bubble_sort(arr, sz);*/
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//指针数组本质上是数组 数组中存放的是指针（地址）
//int* arr[3]={&a,&b,&c};

//数组名大部分情况下表示首元素地址
//但是有两个例外
//1.sizeof(数组名) 表示整个数组的大小 算出的是整个数组的大小
//2.&数组名 取出的是整个数组的地址

//数组指针用于存数组的地址
//int (*parr)[10]=&arr;
 
//函数指针 函数也是有地址的
//函数也是有地址的 函数指针 
//int (*pf)(int,int)=&Add;
//int (*pf)(int,int)=Add;
//int sum=pf(2,3);
//int sum=(*pf)(2,3)

//函数指针存放在数组中
//函数指针数组
//int (*pfarr[10])(int,int)

//通过函数指针调用的函数就是回调函数
