#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>

//int main()
//{
//	int a[] = { 1,2,3,4 };
//
//	//16 sizeof（数组名）计算的是整个数组的大小
//	printf("%d\n", sizeof(a));
//	//4 表示指向数组首元素地址的大小
//	printf("%d\n", sizeof(a+0));
//	//*a是首元素地址
//	printf("%d\n", sizeof(*a));
//	//4 第二个指针的大小
//	printf("%d\n", sizeof(a+1));
//	//4 第二个元素的大小
//	printf("%d\n", sizeof(a[1]));
//	//4 存放数组的地址 
//	printf("%d\n", sizeof(&a));
//	//16 整个数组的大小
//	printf("%d\n", sizeof(*&a));
//	//4 跳过整个数组，但是依然存一个地址 4个字节
//	printf("%d\n", sizeof(&a+1));
//	//4
//	printf("%d\n", sizeof(&a[0]));
//	//4
//	printf("%d\n", sizeof(&a[0]+1));
//
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	//6
//	printf("%d\n", sizeof(arr));
//	//4
//	printf("%d\n", sizeof(arr+0));
//	//1
//	printf("%d\n", sizeof(*arr));
//	//1
//	printf("%d\n", sizeof(arr[1]));
//	//4
//	printf("%d\n", sizeof(&arr));
//	//4
//	printf("%d\n", sizeof(&arr+1));
//	//4
//	printf("%d\n", sizeof(&arr[0] + 1));
//
//	return 0;
//}


//strlen接收的是首元素地址 遇到\0停止
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	//随机 遇到\0才停止
//	printf("%d\n", strlen(arr));
//	//随机 首元素地址
//	printf("%d\n", strlen(arr+0));
//	//strlen('a') 接收的是指针 野指针
//	printf("%d\n", strlen(*arr));
//	//strlen('b')
//	printf("%d\n", strlen(arr[1]));
//	//随机
//	printf("%d\n", strlen(&arr));
//	//随机
//	printf("%d\n", strlen(&arr+1));
//	//随机
//	printf("%d\n", strlen(&arr[0] + 1));
//
//	return 0;
//}


//sizeof计算变量所占内存空间的大小 
//strlen用于求字符串长度 计算\0之前的元素个数 只针对字符串
//int main()
//{
//	//默认自动存入一个\0
//	char arr[] = "abcdef";
//
//	//7 sizeof会计算最后的\0
//	printf("%d\n", sizeof(arr));
//	//4
//	printf("%d\n", sizeof(arr+0));
//	//1
//	printf("%d\n", sizeof(*arr));
//	//1
//	printf("%d\n", sizeof(arr[1]));
//	//4
//	printf("%d\n", sizeof(&arr));
//	//4
//	printf("%d\n", sizeof(&arr+1));
//	//4
//	printf("%d\n", sizeof(&arr[0] + 1));
//
//	return 0;
//}


//int main()
//{
//	//默认自动存入一个\0
//	char arr[] = "abcdef";
//
//	//6
//	printf("%d\n", strlen(arr));
//	//6
//	printf("%d\n", strlen(arr + 0));
//	//无法
//	printf("%d\n", strlen(*arr));
//	//无法
//	printf("%d\n", strlen(arr[1]));
//	//6
//	printf("%d\n", strlen(&arr));
//	//随机 跳过数组 
//	printf("%d\n", strlen(&arr + 1));
//	//5
//	printf("%d\n", strlen(&arr[0] + 1));
//
//	return 0;
//}

//int main()
//{
//	//默认自动存入一个\0
//	char* p = "abcdef";
//
//	//4
//	printf("%d\n", sizeof(p));
//	//4
//	printf("%d\n", sizeof(p+1));
//	//1
//	printf("%d\n", sizeof(*p));
//	//1
//	printf("%d\n", sizeof(p[0]));
//	//4
//	printf("%d\n", sizeof(&p));
//	//4
//	printf("%d\n", sizeof(&p+1));
//	//4
//	printf("%d\n", sizeof(&p[0] + 1));
//
//
//	//6
//	printf("%d\n", strlen(p));
//	//5
//	printf("%d\n", strlen(p + 1));
//	//无法
//	printf("%d\n", strlen(*p));
//	//无法
//	printf("%d\n", strlen(p[0]));
//	//随机  指针p存在单独的栈区 与数组所在的常量区无关 p的地址 后面元素位置
//	printf("%d\n", strlen(&p));
//	//随机
//	printf("%d\n", strlen(&p + 1));
//	//5
//	printf("%d\n", strlen(&p[0] + 1));
//
//	return 0;
//}


//int main()
//{
//	int a[3][4] = {0};
//
//	//二维数组的首元素是第一行
//	//48
//	printf("%d\n", sizeof(a));
//	//4
//	printf("%d\n", sizeof(a[0][0]));
//	//16
//	printf("%d\n", sizeof(a[0]));
//	//4  a[0]没有单独放在sizeof内 这里的a[0]代表第一行的首元素地址
//	printf("%d\n", sizeof(a[0]+1));
//	//4
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	//4
//	printf("%d\n", sizeof(a + 1));
//	//16
//	printf("%d\n", sizeof(*(a + 1)));
//	//4
//	printf("%d\n", sizeof(&a[0] + 1));
//	//16
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	//16 a表示首元素第一行的地址
//	printf("%d\n", sizeof(*a));
//	//16  没有越界 代表第4行 并没有访问
//	printf("%d\n", sizeof(a[3]));
//
//	return 0;
//}


//strlen 传入的是字符串首地址的指针 计算\0之前的元素个数
//返回值是size_t  无符号整型 unsigned int
//因为无法通过两个strlen相减来比较字符串长度
//两个unsigned int 相减仍然是unsigned int 取值范围是0-255
//可以强转为int  也可使用strcmp


//模拟实现strlen

//1.计数器方法
//2.指针—指针
//3.递归
//my_strlen(const char* str)
//{
//	assert(str);
//	size_t count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t n = my_strlen(arr);
//	printf("%u\n", n);
//	return 0;
//}


//name="zhangsan" name数组名是首字母地址 地址是常量值 不能被赋值
//strcpy拷贝\0及以前的字符串 包括\0 
//被拷贝的字符串一定要有\0
//接收的字符串大小一定要大于等于源字符串
//目标空间必须可以修改
//strcpy(destination,source)

//
//int main()
//{
//	char name[20] = { 0 };
//	strcpy(name, "zhangsan");
//	printf("%s", name);
//
//	return 0;
//}


//char* my_strcpy(char* des, const char* src)
//{
//	int ret = des;
//	assert(des&& src);
//	while (*des++ = *src++)
//		;
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//字符串追加
//strcat 
//源字符串必须有\0


//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//		;
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[20] = "Hello ";
//	my_strcat(arr1, "World");
//
//	printf("%s\n", arr1);
//
//	return 0;
//}


//字符串比较
//strcmp
//逐个比较ASCII码值 
//arr1==arr2 这是在比较两个字符串的首地址


//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1-*str2;
//}
//
//
//int main()
//{
//	char arr1[] = "abcedf";
//	char arr2[] = "abc";
//
//	int ret = my_strcmp(arr1,arr2);
//
//	if (ret < 0)
//		printf("<\n");
//	else if (ret == 0)
//		printf("==\n");
//	else
//		printf(">\n");
//
//	return 0;
//}

//长度受限制的字符串函数
//strncpy
//strncat  末尾自动补一个\0
//strncmp

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "hello bit";
//
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//strstr
//查找子串

//strtok
//切割字符串 


//strerror
//返回错误码对对应的错误信息
//errno C语言设置的一个全局的错误码存放的变量

//memcpy 负责拷贝两块独立空间中的数据  从前往后拷 拷贝同一个数组的数据会造成重叠
//memmove 重叠内存的拷贝  从后往前拷  避免覆盖

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)dest)++;
//		((char*)src)++;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1,40);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}

//有时候需要从前往后处理数据
//有时候需要从后往前处理数据
//前提是要避免拷贝过程中数据被覆盖  具体情况具体分析
//dest<src 采用从前向后
//dest>src采用从后向前

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	//从前向后拷
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	//从后往前拷
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//
//}
//
//
//int main()
//{
//	int arr1[] = { 1,2, 3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	my_memmove(arr1+2, arr1, 20);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}


//memcmp
//比较任意大小

//memset
//memset(arr,'x',5)

//小乐乐改数字


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int k = 0;
//    int ret = 0;
//    while (n)
//    {
//        k++;
//        int i = 0;
//        if (n % 10 % 2 == 0)
//        {
//            i = 0;
//        }
//        else
//        {
//            i = 1;
//        }
//        ret+=i * pow(10, k - 1);
//        n = n / 10;
//    }
//    printf("%ld", ret);
//
//    return 0;
//}


//int main() 
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (j < n - 1 - i)
//                {
//                    printf("  ");
//                }
//                else
//                {
//                    printf("* ");
//                }
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}

//逻辑判断名次
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 0; b <= 5; b++)
//		{
//			for (c = 0; c <= 5; c++)
//			{
//				for (d = 0; d <= 5; d++)
//				{
//					for (e = 0; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//
//	return 0;
//}

//打印杨辉三角

//int main()
//{
//	int arr[10][10]={0};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//实现一个函数 左旋字符
//ABCD BCDA CDAB


//void left_rotate(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	k %= len;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = arr[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_rotate(arr,k);
//	printf("%s\n", arr);
//
//	return 0;
//}

//通过三次逆序实现


//
//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//void left_rotate(char arr[], int k)
//{
//	int len = strlen(arr);
//	k %= len;
//	reverse(arr,arr+k-1);
//	reverse(arr+k,arr+len-1);
//	reverse(arr,arr+len-1);
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_rotate(arr,k);
//	printf("%s\n", arr);
//
//	return 0;
//}


//杨氏矩阵
//每行从左到右递增 每列从上到下递增
//要求时间复杂度小于o(N)

//struct Point
//{
//	int x;
//	int y;
//};
//
//
//struct Point find_num(int arr[3][3], int row, int col, int k)
//{
//	int x = 0;
//	int y = col-1;
//	struct Point p = { -1,-1 };
//	while (x <= row - 1 && y >= 0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			p.x=x;
//			p.y = y;
//			return p;
//		}
//	}
//	return p;
//}
//
//
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	struct Point ret=find_num(arr,3,3,k);
//	printf("%d %d\n", ret.x,ret.y);
//
//	return 0;
//}



//int find_num(int arr[3][3], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	*px = -1;
//	*py = -1;
//	return 0;
//}
//
//
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int x = 3;
//	int y = 3;
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int  ret = find_num(arr, &x, &y, k);
//	if (ret == 1)
//		printf("%d %d\n", x, y);
//	else
//		printf("找不到");
//	return 0;
//}

//int is_left_move(char arr1[], char arr2[])
//{
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = arr1[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//
//		if (strcmp(arr2, arr1) == 0)
//			return 1;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//
//	int ret=is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("ok\n");
//	else
//		printf("no\n");
//
//	return 0;
//}


//int is_left_move(char arr1[], char arr2[])
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//		return 0;
//
//	strncat(arr1, arr1, len1);
//	char* ret=strstr(arr1, arr2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//
//
//int main()  
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "cdefab";
//
//	int ret=is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("ok\n");
//	else
//		printf("no\n");
//
//	return 0;
//}


//矩阵转置

//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr[n][m];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (i = 0; i < m; j++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//上三角矩阵判定

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n][n];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	
//	int flag = 1;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				//不是上三角矩阵
//				flag = 0;
//				goto end;
//			}
//		}
//	}
//	end:
//	if (flag == 0)
//		printf("NO\n");
//	else
//		printf("YES\n");
//
//	return 0;
//}

//结构体的定义方式
//结构体只是定义了一个类型 相当于一个int 或者char 不能初始化


//struct Stu
//{
//	char name[20];
//	int age;
//}s1, s2;
////s1,s2是全局变量
//
////匿名结构体类型 只能创建类型的时候使用一次
//struct
//{
//	char name[20];
//	int age;
//}s4;
//
////结构体的自引用
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//
//int main()
//{
//	//s3是局部变量 类型是struct Stu
//	struct Stu s3;
//
//	return 0;
//}

//数据结构
//数据在内存中的存储结构、
//线形 顺序表 链表 树形 二叉树

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}* linklist;
//
//struct Point
//{
//	int x;
//	int y;
//}p1={2,3};
//
//struct Point p2 = { 3,4 };


//结构体内存对齐
//offsetof()
//VS默认对齐数为8
//以空间换取时间
//将占用空间小的变量放在一起  可以节约空间

//#pragma pack(4)

//#pragma once 在头文件中使用 防止头文件被多次引用
