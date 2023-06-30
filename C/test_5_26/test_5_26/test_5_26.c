#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h> 
#include<stdlib.h>
#include<time.h>
#include<math.h>

//int main()
//{
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//
//	return 0; 
//}


//int main()
//{
//	int age = 20;
//	double price = 66.6;
//	
//	return 0;
//}


//变量和常量的概念
// {}内部定义的变量是局部变量
// {}外部定义的变量是全局变量 
//int b = 20;
//int main()
//{
//	//short age = 20;//年龄
//	//int height = 180;//身高
//	//float weight = 88.5;//体重
//
//	int a = 10;
//
//
//	return 0;
//}

//int main()
//{
//	int   num1 = 0;//初始化
//	int num2 = 0;
//
//	//输入两个整数
//	scanf("%d %d", &num1, &num2);
//
//	//求和
//	int sum = num1 + num2;
//
//	//输出
//	printf("%d", sum);  
//
//
//	return 0;
//}

////变量的生命周期
//int main()
//{
//	int a = 10;
//	{
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n",a); 
//	return 0;
//}
////声明来自外部的符号
//extern int a;
//
////在C语言中，const修饰的a，本质是变量，但是不能直接修改，有常量的属性
//const int a=10;
//
//#define MAX 100
//#define STR "abcdef"


//枚举常量
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	enum Color c = RED;
//	return 0;
//}

//int main()
//{
//	'a';
//	char ch = 'w';
//	"abcdef";
//	//C语言中没有字符串类型
//	char arr1[] = "abcdef";//有隐藏的\0作为结束符
//	char arr2[] = { 'a','b','c','d','e','f','\0'};//一定要加\0才能结束，不然会一直向后直到出现\0
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	int len = strlen("abc");//求字符串长度
//	printf("%d\n", len);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//  }

//%d-打印有符号整型（会有正负数）
//%u-打印无符号整数（没有负数）
//%c-打印字符
//%s-打印字符串
//%f-打印float类型的数据
//%.4f-打印float类型的数据,并且保留小数点后四位并且四舍五入
//%lf-打印double类型的数据
//%zu-打印sizeof的返回值
//%p-打印地址

//int main()
//{
//	//用\转义'
//	printf("%c\n",'\'');
//	//用\取消\0
//	printf("abcd\\0ef\n");
//	//打印文件路径一定要两个\\,阻止转义
//	printf("D:\\Laboratory\\Available\\论文\\第二篇投稿\\physica status solidi (b) - basic solid state physics\n");
//	//触发电脑蜂鸣警告
//	printf("\a");
//
//	printf("%c\n", '\130');
//
//	printf("%c\n", '\x80');
//
//	return 0;
//}

//int main()
//{
//	//C99标准之前，数组的大小都是用常量或者常量表达式来指定
//	int arr1[10] = { 0 };
//	int arr2[] = { 1,2,3 };
//	//C99标准之后，支持了变长数组，这个时候允许数组的大小是变量，但是这种指定方式是不能初始化的
//	int m = 100;
//	int arr3[m];//不能初始化
//
//	return 0;
//}


//操作符
//int main()
//{	
//	//int a = 7 / 2;///号取商
//	//int b = 7 % 2;//%号取余数
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	 
//
//	//除号的两端都是整数的时候，执行的是整数除法，如果两端只要有一个浮点数就执行浮点数除法
//	float a = 7 / 2.0;///号取商
//	//取模操作符的两端只能是整数
//	int b = 7 % 2;//%号取余数
//	printf("%.2f\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{	
//	int a=0
//	a = a + 3;
//	a += 3;
//
//	//将double类型的3.14强制转换为整型3
//	int b = (int)3.14;
//
//	return 0;
//}

//逗号表达式的特点是：从左向右依次计算，整个表达式的结果是最后一个表达式的结果

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);//b=5
//	printf("%d\n", d);
//	return 0;
//}


//求1！+2！+3！+....+n!
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//二分查找，时间复杂度为o(logn),条件是数组有序
//int main()
//{	
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int k = 7;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1; 
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//
//	return 0;
//}


//编写代码,演示多个字符从两端移动,向中间汇聚。
// 
//求字符数组"welcome to bite!!!!"可以用strlen()求数组长度strlen(arr1)
// 最左侧下标right=strlen(arr1)-1
//也可以用sizeof(arr1)/sizeof(arr[0])
// 最左侧下标sizeof(arr1)/sizeof(arr[0])-2
//因为这种字数数组末尾默认带\0,strlen()不统计\0,而sizeof()会统计\0
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//
//	int left = 0;
//	int right = strlen(arr2) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//停止1000ms，方便看清楚，引用头文件windows.h
//		//清空屏幕，一行显示，system是一个库函数，可以执行系统命令，头文件stdlib.h
//		system("cls");
//		left++;
//		right--;
//	 }
//
//	return 0;
//}


//编写代码实现,模拟用户登录情景,并且只能登录三次。(只允许输入三次密码,如果密码正确则
//提示登录成, 如果三次均输入错误, 则退出程序。

//数组本身就是地址，所以不需要取地址
//比较两个字符串是否相等，不能使用==，而应该使用库函数strcmp
//如果返回值是0，表明两个字符串相等,头文件是string.h

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i=0;i<3;i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s",password);
//		if (strcmp(password,"abcdef") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均输入错误，退出程序\n");
//	}
//
//	return 0;
//}

//数组传参是实际传的是首元素的地址

//猜数字游戏
//电脑产生一个随机数（1-100）
//猜数字
//反馈猜大了还是猜小了


//void menu()
//{
//	printf("*******************************\n");
//	printf("*********** 1.play ************\n");
//	printf("*********** 0.exit ************\n");
//	printf("*******************************\n");
//
//}
//
//void game()
//{
//	int guess = 0;
//	//需要一个随机数传入，需要时间戳，用time函数,头文件为time.h
//	//1.生成随机数1-100
//	//生成随机数，0-RAND_MAX(0-32767)
//	int ret = rand()%100+1;
//	printf("%d\n", ret);
//	while (1)
//	{
//		//2.猜数字
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
// 
//int main()
//{	
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择！\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//关机程序
//1.电脑运行起来后，1分钟内关机
//2.如果输入：我是猪，取消关机

//shutdown -s -t 60 设置时间倒计时60s关机
//shutdown -a 取消关机

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 360");
//again:	
//	printf("请注意你的电脑将在60秒内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}	
//	return 0;
//}

//补充知识：
//   d 以十进制形式输出带符号整数(正数不输出符号)
//   o 以八进制形式输出无符号整数(不输出前缀O)
//   x 以十六进制形式输出无符号整数(不输出前缀Ox)
//   X 以十六进制形式输出无符号整数(不输出前缀OX)
//使用修饰符“#”控制前导显示:
//   # 对c，s，d，u类无影响；对o类， 在输出时加前缀0。对x类，在输出时加前缀0x；
//注意：题目要求，十六进制，字母大写，所以，，，，，，对X类，在输出时加前缀0X。


//memset(arr,'x',5ii)

//当实参传递给形参的时候，形参是实参的一份临时拷贝
//对形参的修改不会影响实参


//传值调用  不改变变量本身，只是对变量进行操作
//传址调用  需要对变量本身进行改变


//写一个函数可以判断一个属是不是素数,100-200
//用函数实现

//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200;i+=2)
//	{
//		//判断是否为素数 只能被1和它本身整除的数
//		//用2到sqrt(i)的数去除,如果能被整除，则i可以写成一个小于等于sqrt(i)和另一个数相乘
//		//并且偶数不可能是素数，从偶数开始，每次加2跳过所有偶数
//		//标记变量，是1表示为素数
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}


//写一个函数判断一年是不是闰年,1000-2000

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断是否为闰年
//		//1.能被4整除并且不能被100整除
//		//2.能被400整除
//		if (year % 4 == 0)
//		{
//			if (year % 100 !=0)
//			{
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year); 
//		}
//	}
//
//	return 0;
//}


//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断是否为闰年
//		//1.能被4整除并且不能被100整除
//		//2.能被400整除
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}


//写一个函数，实现一个整形有序数组的二分查找

//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (left-right) / 2;//防止溢出
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		} 
//	}
//	return -1;
//
//}
//
//int main() 
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//找到了返回下标，找不到返回-1，不能返回0，首元素下标为0
//	int ret=binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//
//	return 0;
//}

//形式参数与实际参数的名字可以相同，也可以不同
//数组传参直接传数组名arr,不能带[]，arr其实是一个指针变量
//数组传参传的是首元素地址，因此计算数组大小sz = sizeof(arr) / sizeof(arr[0])必须在主函数进行，然后传给自定义函数


//写一个函数，每调用一次这个函数，num就会增加1


//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//
//
//
//	return 0;
//}

//链式访问
//把一个函数的返回值作为另一个函数的参数

//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	//printf函数会返回打印字符的个数
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//} 


//main函数本质上是由参数的
//int main(int argc,char* argv[],char* envp[])
//{
//	return 0;
//}

//在调用函数前进行函数声明
//先声明后使用
//函数声明一般在头文件.h中,函数的定义放在.c中，主函数文件 包含.h文件
//主函数包含.h文件相当于将.h文件中的函数声明拷贝到调用的.c文件中


//导入静态库
//#pragma comment(lib,"add.lib")

//程序调用自身的编程技巧称为递归

//接收一个无符号整型值，按照顺序打印它的每一位
//例如：输入：1234 输出1 2 3 4

//递归实现
//void print(unsigned int n)
//{
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//
//
//	return 0;
//}

//编写函数不允许创建临时变量，求字符串的长度
//模拟实现strlen()
//字符串传参传的是首字母地址，相当于数组，是个指针变量，因此需要指针变量的形参来接收

//int my_strlen(char str[])
//int my_strlen(char* str) 
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
 

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//递归与迭代
//求n的阶乘

//递归实现
//int fac(int i)
//{
//	if (i > 1)
//		return i * fac(i - 1);
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret=fac(n);
//	printf("fac(%d)=%d", n, ret);
//
//	return 0;
//}

//求第n个斐波那契数列
//1 1 2 3 5 8 13 21 34 55
//前两数之和等于第三个数

//递归
//int Fib(int n)
//{
//	if (n > 2)
//		return Fib(n - 1) + Fib(n - 2);
//	else
//		return 1;
//}

//迭代
//比递归快，但是有溢出
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("Fib(%d)=%d", n, ret);
//}

//汉诺塔问题
//青蛙跳台阶问题


//将三个整数从大到小输出


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int tmp = 0;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}

//函数方法

//void Swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int tmp = 0;
//	if (a < b)
//		Swap(&a, &b);
//	if (a < c)
//		Swap(&a, &c);
//	if (b < c)
//		Swap(&b, &c);
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}

//打印1-100之间3的倍数的所有数字

//int main()
//{
//	int i = 0;
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//求两个数的最大公约数
//暴力求解法

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = (a < b) ? a : b;
//	while (1)
//	{
//		if (a % min == 0 && b % min == 0)
//		{
//			printf("%d", min);
//			break;
//		}
//		min--;
//	}
//	
//
//	return 0; 
//}

//辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//
//	while (c=a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//
//	return 0;
//}

//最大公倍数，a*b/最大公约数

//编写程序数一下1-100的所有整数中有多少个数字9
//int main()
//{
//	int n = 0;
//	int count = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		//判断个位是不是9
//		//判断十位是不是9
//		if (n % 10 == 9)
//			count++;
//		if (n / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5....+1/99-1/100

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}

//求10个整数中的最大值
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("%d", max);
//
//	return 0;
//}


//在屏幕上你输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for(j=1;j<=i;j++)
//			printf("%d*%d=%2d ", i,j,i*j);
//		printf("\n");
//	}
//
//
//	return 0;
//}

//实现一个函数，打印乘法口诀表，口诀的行数和列数自己指定

//void print_table(int n)
//{
//	int i = 0;
//
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%2d ", i, j, i * j);
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//
//
//	return 0;
//}

//在C99标准之前，数组的大小必须是常量或者常量表达式
//在C99标准之后，数组的大小 可以是变量，为了支持变长数组
//int n=10;
//int arr[n];//这种数组不能初始化
//目前VS编译器不支持以下代码
//int main()
//{
//	int n = 10;
//	int arr[n];
//	printf("%d", arr[0]);
//}

//int main()
//{
//	//不完全初始化，剩余的元素默认初始化为0
//	int arr[10] = { 1,2,3 };
//	//根据初始化元素个数确定数组大小，3
//	int arr2[] = { 1,2,3 };
//
//	//a b c 0 0 0 0 0
//	char ch1[10] = { 'a','b','c' };
//	//a b c \0 0 0 0 0
//	char ch2[10] = "abc";
//	//三个元素
//	char ch3[] = { 'a','b','c' };
//	//四个元素，默认多一个\0
//	char ch4[] = "abc";
//
//	return 0;
//}

//数组在内存中是连续存放的

//二维数组
//int main()
//{
//	//3行4列
//	//int arr1[3][4]={1,2,3,4,2,3,4,5,3,4};
//	//int arr1[3][4] = { {1,2},{3,4},{2,3} };
//	//二维数组行可以省略，列不能省略
//	//int arr1[][4] = { {1,2,3,4},{3,4}};
//	//char arr2[5][10];
//
//	//二维数组初始化
//
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//数组越界
//数组传参额时候，形参有两种写法
//1.数组 int arr[]
//2.指针 int *p
//void bubble_sort(int arr[], int k)
//{
//	int i = 0;
//	for (i = k-1; i >=0; i--)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			if (arr[j] < arr[j - 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j - 1];
//				arr[j - 1] = tmp;
//			}
//		}
//	}
//}

//指针
//void bubble_sort(int *p, int k)
//{
//	int i = 0;
//	for (i = k - 1; i >= 0; i--)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			if (*(p+j) < *(p+j-1))
//			{
//				int tmp = *(p + j);
//				*(p + j) = *(p + j - 1);
//				*(p + j - 1) = tmp;
//			}
//		}
//	}
//}
//
////冒泡排序
////核心思想：两个相邻元素进行比较
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//只能在主函数算sz的值，传参到调用的函数只有数组的首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr,sz);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//数组名确实能表示首元素地址
//但是有两个例外
//1.sizeof(arr)，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&arr，这里的数组名表示整个数组，取出的是整个数组的地址

//二维数组数组名的理解
//二维数组的数组名也表示首元素的地址，即第一行的地址，arr
//表示第一行的地址，想象成一维数组
//int main()
//{
//	int arr[3][4] = { 0 };
//	//计算二维数组行数
//	int n = sizeof(arr) / sizeof(arr[0]);//arr[0]代表第一行
//	//计算二维数组列数
//	int m = sizeof(arr[0]) / sizeof(arr[0][0]);
//	return 0;
//}


