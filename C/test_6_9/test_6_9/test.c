#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>




//编写一个函数
//实现将参数字符中的字符反向排列，不是逆序打印
//双指针实现

//int main() 
//{
//	char arr[] = "abcdef";//a b c d e f \0
//	//需要减去\0菜蔬数组元素个数
//	// strlen()求字符数组长度不会包括\0,可以直接用
//	//int right=strlen(arr)-1;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//void reverse(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";//a b c d e f \0
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//递归实现,传一个参数
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse(char* str)
//{
//	char tmp = *str;
//	//数组传参过来的指针变量可以用strken()求字符串长度
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str+len - 1)='\0';
//	if (strlen(str + 1) >= 2)
//	{
//		reverse(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}


//int main()
//{
//	char arr[] = "abcdef";//a b c d e f \0
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//递归实现 不限制传参个数

//void reverse(char arr[], int head,int tail)
//{
//	if (head < tail)
//	{
//		char tmp = arr[head];
//		arr[head] = arr[tail];
//		arr[tail] = tmp;
//		head++;
//		tail--;
//		reverse(arr, head, tail);
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	int left = 0;
//	int right = sz - 1;
//	reverse(arr, left,right);
//	printf("%s\n", arr);
//
//	return 0;
//}


//计算一个数的每位之和（递归实现）

//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//		return n;
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//
//	return 0;
//}

//写一个函数实现n的k次方
//k>0,n*Pow(n,k-1)
//k=0,1
//k<0,1.0/Pow(n,-k)

//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k);
//}
//
//int main() 
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret=Pow(n, k);
//	printf("%lf\n", ret);
//
//	return 0;
//}

//sizeof是一个操作符
//是用来计算变量（类型）所占内存空间的大小，不关注内存中存放的具体内容
//单位是字节

//strlen是一个库函数，是专门针对字符串长度的，只能针对字符串
//从参数给定的地址向后一直找\0,统计\0之前出现的字符个数


//将数组A中的内容和数组B中的内容进行交换（数组一样大）
//遍历数组循环交换
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	//用循环才能打印数组
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//
//	return 0;
//}


//创建一个整形数组，完成对数组的操作
//1.实现函数init()初始化数组为全0
//2.实现print()打印数组的每个元素
//3.实现reverse()函数完成数组元素的逆置

//void init(int arr[], int sz) 
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr,sz);
//	print(arr,sz);
//
//	return 0;
//}

//整形的除法 1/2-->0
//浮点型的除法 1.0/2-->0.5  除号两边至少有一个是小数
//%操作符两端必须是整数

//<<左移操作符 移动的是二进制位
//整数的二进制表示有三种
//原码
//反码
//补码
//正整数原码 反码 补码相同
//负整数原码 反码 补码需要计算
//7
//00000000000000000000000000000111-原码
//00000000000000000000000000000111-反码
//00000000000000000000000000000111-补码
//-7
//10000000000000000000000000000111-原码
//11111111111111111111111111111000-反码（原码的最高位不变，其他位按位取反）
//11111111111111111111111111111001-补码（反码加1）

//整数在内存中存储的是补码
//移位操作符移动的是内存中的补码
//左移操作符左边丢弃一位，右边补0
//左移右移操作符只能针对整数

//int main()
//{
//	int a = 7;
//	int b = a << 1;
//
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = - 7;
//	int b = a << 1;
//
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}


//右移操作符
//算术移位:右边丢弃，左边补符号位
//逻辑移位：右边丢弃，左边补0
//vs编译器采用的是算术右移
// 移位运算符 不能移动负数位
// 左移n位相当于将数乘以2^n
//int main()
//{
//	int a =  7;
//	int b = a >> 1;
//
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = -7;
//	int b = a >> 1;
//
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}

//&-按位与（2进制位）   全为1才为1，其余为0
//|-按位或（2进制位）   有1为1，全为0为0
//^-按位异或（2进制位） 相同为0，相异为1

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//
//	//00000000000000000000000000000011 -3的补码
//	//10000000000000000000000000000101 - -5的原码
//	//11111111111111111111111111111010- -5的反码
//	//11111111111111111111111111111011- -5的补码
//	//00000000000000000000000000000011 -3的补码
//	//00000000000000000000000000000011
//	
//	//或
//
//	//%d 意味着打印一个有符号的整数
//
//	printf("c=%d", c);
//	printf("d=%d", d);
//	printf("e=%d", e);
//}


//不能创建临时变量，实现两个数的交换
//3^3=0
// a^a=0
//011
//011
//0^a=a
//3^5^3=5
//3^3^5=5
//异或支持交换律

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前：a=%d b=%d\n", a, b);
//
//	//可能存在溢出
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a=%d b=%d", a, b);
//
//	return 0;
//}

//求一个整数存储在内存中的二进制中1的个数
//求补码中二进制中1的个数
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = a;
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 32; i++)
//	{
//		if (a & 1 == 1)
//		{
//			count++;
//		}
//		a=a >> 1;
//	}
//	printf("%d存储在内存中的2进制位中1的个数=%d",b,count);
//
//	return 0;
//}

//=赋值
//==判断相等
//不建议连续赋值

//a=a+5
//a+=5
//a=a>>1
//a>>=1

//单目操作符
// !a(取反，假变真 真变假) 
//-a
//+a
//&a  取出的是变量地址的首地址
//sizeof 是操作符 不是函数
//~对2进制位按位取反
//*p 对地址解引用 指向p地址存的变量
//(类型) 强制类型转换

//双目操作符  有两个操作数
// a+b  a*b a-b

//C语言中0表示假 非0表示真

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	//00000000000000000000000000000000 - 补码
//	//11111111111111111111111111111111 - ~a的补码
//	//10000000000000000000000000000001 - ~a的原码
//
//	int b = 3;
//	//00000000000000000000000000000011
//	//11111111111111111111111111111100
//	//10000000000000000000000000000100
//	printf("%d\n", ~b);
//
//	int c = 13;
//	c |= (1 << 4);
//	//00000000000000000000000000001101 - 13
//	// 1<<4
//	//00000000000000000000000000010000 
//	//00000000000000000000000000011101 - 29
//	printf("%d\n", c);
//
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	//前置++，先++,后使用
//	//int b = ++a;
//	//后置++，先使用，再++
//	//int b=a++;
//
//	return 0;
//}

//for(i=0;i<10;i++)与for(i=0;i<10;++i)效果上并没有区别
//但是++i效率更高

//int main()
//{
//	//强制转换为int 3.14f认为是float类型，3.14被认为是double类型
//	int a = (int)3.14;
//	char ch = 's';
//
//	srand((unsigned int)time(NULL));
//
//	printf("%d\n", a);
//	//字符所占字节为1
//	printf("%zu", sizeof(ch));
//
//	return 0;
//}

//if("abc"=="abcde")这样写是比较两个字符串首字符的地址 错误用法
//实际两个字符串比较相等应该使用strcmp库函数


//a&&b 并且  一个为假就是假 全真才为真
//a||b 或者 只要一个为真就为真

//&& 左边为假 右边就不计算了
//|| 左边为真 右边就不计算了

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//两个&&，短路运算 第一个a++为0就全为0，不会再继续算后面的内容
//	i = a++ && ++b && d++;
//	//同样a++为真 后面就不算了
//	//i = a++ || ++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//
//
//	return 0;
//}

//条件操作符（三目操作符）
//a>b?a:b

//逗号表达式
//从左到右依次计算 整个表达式的值是最后一个表达式的值
//arr[7]==7[arr] []是操作符

//arr[7]-->*(arr+7)-->*(7+arr)-->7[arr]



//结构体指针->成员  相当于*（结构体指针）.成员
//结构体对象.成员
struct Stu
{
	char name[20];
	int age;
	double score;
};


void set_stu(struct Stu* ps)
{
	/*strcpy(((*ps).name, "zhangsan");
	(* ps).age = 20;
	(*ps).score=100.0;*/

	strcpy(ps->name, "zhangsan");
	ps->age = 20;
	ps->score=100.0;

}

void print_stu(struct Stu* ps)
{
	printf("%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
}


int main()
{
	struct Stu s = { 0 };
	set_stu(&s);
	print_stu(&s);

	return 0;
}