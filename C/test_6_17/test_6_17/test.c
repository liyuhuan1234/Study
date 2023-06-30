#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stddef.h>
#include<ctype.h>
#include<assert.h>
#include<limits.h>





//结构体传参

//struct S
//{
//	int data[1000];
//	int num;
//};
//
//void print1(struct S ss)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ",ss.data[i]);
//	}
//	printf("%d\n", ss.num);
//}
//
//
//void print2(const struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", ps->data[i]);
//	}
//	printf("%d\n", ps->num);
//}
//
//int main()
//{
//	struct S s = { {1,2,3},100 };
//	//传值调用
//	print1(s);
//	//传址调用
//	print2(&s);
//
//	return 0;
//}


//位/wangluo
// int unsigned int signed int char
//可以用来节省空间
//每次按照4个字节（int）或者1个字节（char）方式来开辟
//struct A
//{
//	 //a只占两个bit位
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};


 //枚举
//enum Day
//{
//	//Mon=1,
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//
//
////#define Mon 1
////#define Tues 2
//
//int main()
//{
//	enum Dar d = Fri;
//	printf("%d\n", Mon);
//	printf("%d\n", Tues);
//	printf("%d\n", Wed);
//	printf("%d\n", Thur);
//	printf("%d\n", Fri);
//	printf("%d\n", Sat);
//	printf("%d\n", Sun);
//}


//联合 共用体
//共用同一块空间
//变量空间不会同时使用 共享
// 存在内存对齐 
//union Un
//{
//	int a;
//	char c;
//
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.c));
//
//	return 0;
//}

//判断当前机器存储方式是大端还是小端


//int check_sys()
//{
//	int a = 1;
//	return *((char*)& a);
//}


//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
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


//union Un
//{
//	char arr[5];
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//
//	return 0;
//}


//动态内存管理
//1.malloc
//2.calloc
//3.realloc
//4.free

//void* malloc(size_t size)
//可能会开辟失败 开辟失败返回NULL
//INT_MAX

//C99支持变长数组
//int n=0;
//scanf("%d",&n);
//int arr[n];

//int main()
//{
//	int arr[10] = { 0 };
//	int* p=(int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//没有free
//	//当程序退出时，系统会自动回收内存空间
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//
//	return 0;
//}


//free必须释放动态开辟出来的空间

//calloc
//void* calloc(size_t num,size_t size)
//在开辟空间时自动将所有元素初始化为0
//calloc=malloc+memset

//int main()
//{
//	int* p=calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//realloc
//void* realloc(void* ptr,size_t size)
//size 追加后总空间大小

//int main()
//{
//	int* p=(int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//不用原指针直接接收 可能申请失败 导致原先空间丢失
//	int* ptr=(int*)realloc(p, 80);
//	//如果扩容成功 才将地址给原来的指针
//	if (ptr != NULL)
//	{
//		p=ptr;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}



//内存池
//int main()
//{
//	//等价于malloc
//	realloc(NULL, 40);
//	return 0;
//}


//常见动态内存错误
//1.对空指针NULL的解引用操作

//int mian()
//{
//	int* p = (int*)malloc(40);
//	//一定要判断是否开辟成功
//	if (p == NULL)
//		return 1;
//
//	*p = 20;
//	return 0;
//}
//
////2.对动态内存空间的越界访问
//int mian()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//		return 1;
//
//	int i = 0;
//	//for (i = 0; i < =10; i++)
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//3.对非动态开辟内存使用free释放
//free只能对malloc realloc calloca开辟在堆区上的空间进行释放

//4.使用free释放动态开辟内存的一部分
//使用了p++,p指向的起始位置已经改变
//选择使用*（p+i） p[i]

//5.对同一块空间的多次释放
//两次free(p)

//6.忘记释放动态内存
//内存泄露
//在主函数末尾释放

//test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//		return p;
//	return p;
//}
//
//int main()
//{
//	int* ret = test();
//
//	return 0;
//}

//内核空间
//栈
//内存映射段
//堆
//数据段
//代码段

//柔性数组
//C99中 结构体中的最后一个元素是未知大小的数组
//柔性数组前必须有一个其它成员
//sizeof返回的这种结构大小不包括柔性数组的内存
//

//struct S
//{
//	int n;
//	int arr[0];
// };

//struct S
//{
//	int n;
//	int a[];
//};

//int main()
//{
//	//
//	struct S* ps=(struct S*)malloc(sizeof(struct S) + 40);
//	if (ps == NULL)
//		return 1;
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}
//
//	//增加容量
//	struct S* ptr=realloc(ps, sizeof(struct S) + 80);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//		ptr == NULL;
//	}
//
//	//释放空间  ptr不需要释放 可以在上一步中的ptr==NULL
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}


//文件操作
//文件指针
//FILE
//FILE* fopen(const char* filename,const char* mode)
//r w 

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//读文件
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	/*int i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);
//	}*/
//
//	//读文件
//	//int ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//int ch = 0;
//	//while ((ch = fgetc(pf)) != EOF)
//	//{
//	//	printf("%c\n", ch);
//	//}
//
//	//写一行数据
//	//用w打开会将内容销毁重新添加信息
//	/*fputs("hello bit",pf\n);*/
//
//	//读一行数据
//	char arr[20];
//	//实际有效位数为4，默认最后一位放入了\0
//	fgets(arr,5, pf);
//	printf("%s\n", arr);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};

//写
//int main()
//{
//	struct S s = { "zhangsan",25,50.5f };
//
//	FILE* pf=fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fprintf(pf,"%s %d %f",s.arr,s.age,s.score);
//
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//读
//int main()
//{
//	struct S s = { 0 };
//
//	FILE* pf=fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fscanf(pf,"%s %d %f",s.arr,&(s.age),&(s.score));
//	printf("%s %d %f\n", s.arr, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//任何一个C程序只要运行起来 就会默认打开3个流
//FILE* stdin  -标准输入流（键盘）
//FILE* stdout - 标准输出流（屏幕）
//FILE* stderr - 标准错误流（屏幕）

  
//sprintf 把一个格式化的数据写到字符串中 本质上是格式化字符串
//scanf 从一个字符串中转换出一个格式化数据

//int main()
//{
//	struct S s = { "zhangsan",20,55.5f };
//	struct S tmp = { 0 };
//	char buf[100] = { 0 };
//	//把s中的格式化数据转换成字符串放到buf中
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.score);
//
//	printf("%s\n", buf);
//
//	//从字符串buf中获取一个格式化数据到tmp中
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.score));
//	printf("%s %d %f\n", tmp.arr, tmp.age, tmp.score);
//	
//	return 0; 
//}

//fseek 文件的随机读写 根据文件指针位置和偏移量来定位
//ftell 返回文件指针相对于起始位置的偏移量
//rewind 文件指针回到起始位置

//文本文件和二进制文件
//数据在内存中以二进制存储，如果不加转换的输出到外存 就是二进制文件
//以ASCII码存储就是文本文件

//feof 在文件读取过程中，不能用feof函数的返回值直接来判断文件是否结束
//而是应用于当文件读取结束的时候，判断是读取失败还是文件结束
//ferror

//文件缓冲区

//编译 链接
//预编译 编译 汇编 链接
// 
// 
//预编译 文本操作 gcc test.c -E -o test.i
//1.头文件的包含 include
//2.define定义符号的替换
//3.注释的删除

//编译 gcc test.i -S 把C语言代码转换为汇编代码 
//gcc test.c -S(跳过预编译)

//汇编 gcc test.s -c 生成test.o文件
//1.把汇编指令转换为二进制代码
//2.形成符号表

//链接  生成test.exe
//1.合并段表
//2.符号表的合并和重定位
//Linux环境下elf格式


//末尾无分号；
//#define MAX 1000
//#define STR "hello bit"
//#define print printf("hehe\n")

//#define定义宏 宏不能递归  宏名全大写
//#define SQUARE(X) ((X)*(X))

//条件编译

//防止多次包含头文件
//#pragma once
//<>和""是查找策略不同
//<>查找策略是直接去库目录下去查找
//""是首先在当前文件夹下查找，如果找不到再去库目录下查找


//offsetof宏的实现
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//
//#define OFFSETOF(type,m_name)  (size_t)&(((type*)0)->m_name)
//
//int main()
//{
//	struct S s={0};
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, c2));
//
//
//	//printf("%d\n", offsetof(struct S, c1));
//	//printf("%d\n", offsetof(struct S, i));
//	//printf("%d\n", offsetof(struct S, c2));
//
//	return 0;
//}


//找单身狗
// 一个数组中只有两个数字是出现一次，其它数字都出现了两次
//编写一个函数找出这两个只出现一次的数字

//void find_sigle_dog(int arr[], int sz, int* pd1, int* pd2)
//{
//	int i = 0;
//	int ret = 0;
//	//1.异或
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//2.计算ret中二进制中右边第几位是1
//	int pos = 0;
//	for (pos = 0; pos < 32; pos++)
//	{
//		if (((ret >> pos) & 1) == 1)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			*pd1 ^= arr[i];
//		}
//		else
//		{
//			*pd2 ^= arr[i];
//		}
//	}
//
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	//分组
// 	//2.找出异或结果数字中哪一位为1
//	//3.以第n位为1分一组，以第n位为0分一组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int dog1 = 0;
//	int dog2 = 0;
//	find_sigle_dog(arr, sz,&dog1,&dog2);
//	printf("%d %d\n", dog1, dog2);
//
//	return 0;
//}


//atoi 将数字字符串转换为整型

//1.空指针
//2.空字符串
//3.空格
//4.+-
//5.越界
//6.非数字字符

//enum Status
//{
//	VALID,
//	INVALID
//}sta=INVALID;
//
//int my_atoi(const char* str)
//{
//	int flag = 1;
//	assert(str);
//	if (*str == '\0')
//		return 0;
//	//跳过空白字符
//	while (isspace(*str))
//	{
//		str++;
//	}
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	else if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	long long ret = 0;
//	while (*str)
//	{
//		if (isdigit(*str))
//		{
//			//越界
//			ret = ret * 10 + flag*(*str - '0');
//			if (ret > INT_MAX || ret < INT_MIN)
//			{
//				return 0;
//			}
//		}
//		else
//			return ret;
//		str++;
//	}
//	if (*str == '\0')
//	{
//		sta = VALID;
//	}
//	return (int)ret;
//}
//
//
//int main()
//{
//	char arr[20] = "+123456abc";
//	int ret = my_atoi(arr);
//	if (sta == INVALID)
//	{
//		printf("非法返回：%d\n", ret);
//	}
//	else if (sta == VALID)
//	{
//		printf("合法返回：%d\n", ret);
//	}
//
//	return 0;
//}

 //写一个宏，将一个整数的二进制位的奇数位和偶数位交换
//想要得到奇数位的所有二进制位就给奇数位的数字与1，偶数位与0
//想要得到偶数位的所有二进制位就给偶数位的数字与1，奇数位与0
//然后奇数位整体右移一位，偶数位整体左移一位
//最后两数相加得到结果


//#define SWAP_BIT(n) (((n&0x55555555)<<1)+((n&0xaaaaaaaa)>>1))
//
//int main()
//{
//	int n = 0; 
//	scanf("%d", &n);
//	int ret=SWAP_BIT(n);
//	printf("%d\n", ret);
//
//	return 0;
//}