#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>

//int main()
//{
//	int a[] = { 1,2,3,4 };
//
//	//16 sizeof�������������������������Ĵ�С
//	printf("%d\n", sizeof(a));
//	//4 ��ʾָ��������Ԫ�ص�ַ�Ĵ�С
//	printf("%d\n", sizeof(a+0));
//	//*a����Ԫ�ص�ַ
//	printf("%d\n", sizeof(*a));
//	//4 �ڶ���ָ��Ĵ�С
//	printf("%d\n", sizeof(a+1));
//	//4 �ڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(a[1]));
//	//4 �������ĵ�ַ 
//	printf("%d\n", sizeof(&a));
//	//16 ��������Ĵ�С
//	printf("%d\n", sizeof(*&a));
//	//4 �����������飬������Ȼ��һ����ַ 4���ֽ�
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


//strlen���յ�����Ԫ�ص�ַ ����\0ֹͣ
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	//��� ����\0��ֹͣ
//	printf("%d\n", strlen(arr));
//	//��� ��Ԫ�ص�ַ
//	printf("%d\n", strlen(arr+0));
//	//strlen('a') ���յ���ָ�� Ұָ��
//	printf("%d\n", strlen(*arr));
//	//strlen('b')
//	printf("%d\n", strlen(arr[1]));
//	//���
//	printf("%d\n", strlen(&arr));
//	//���
//	printf("%d\n", strlen(&arr+1));
//	//���
//	printf("%d\n", strlen(&arr[0] + 1));
//
//	return 0;
//}


//sizeof���������ռ�ڴ�ռ�Ĵ�С 
//strlen�������ַ������� ����\0֮ǰ��Ԫ�ظ��� ֻ����ַ���
//int main()
//{
//	//Ĭ���Զ�����һ��\0
//	char arr[] = "abcdef";
//
//	//7 sizeof���������\0
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
//	//Ĭ���Զ�����һ��\0
//	char arr[] = "abcdef";
//
//	//6
//	printf("%d\n", strlen(arr));
//	//6
//	printf("%d\n", strlen(arr + 0));
//	//�޷�
//	printf("%d\n", strlen(*arr));
//	//�޷�
//	printf("%d\n", strlen(arr[1]));
//	//6
//	printf("%d\n", strlen(&arr));
//	//��� �������� 
//	printf("%d\n", strlen(&arr + 1));
//	//5
//	printf("%d\n", strlen(&arr[0] + 1));
//
//	return 0;
//}

//int main()
//{
//	//Ĭ���Զ�����һ��\0
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
//	//�޷�
//	printf("%d\n", strlen(*p));
//	//�޷�
//	printf("%d\n", strlen(p[0]));
//	//���  ָ��p���ڵ�����ջ�� ���������ڵĳ������޹� p�ĵ�ַ ����Ԫ��λ��
//	printf("%d\n", strlen(&p));
//	//���
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
//	//��ά�������Ԫ���ǵ�һ��
//	//48
//	printf("%d\n", sizeof(a));
//	//4
//	printf("%d\n", sizeof(a[0][0]));
//	//16
//	printf("%d\n", sizeof(a[0]));
//	//4  a[0]û�е�������sizeof�� �����a[0]�����һ�е���Ԫ�ص�ַ
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
//	//16 a��ʾ��Ԫ�ص�һ�еĵ�ַ
//	printf("%d\n", sizeof(*a));
//	//16  û��Խ�� �����4�� ��û�з���
//	printf("%d\n", sizeof(a[3]));
//
//	return 0;
//}


//strlen ��������ַ����׵�ַ��ָ�� ����\0֮ǰ��Ԫ�ظ���
//����ֵ��size_t  �޷������� unsigned int
//��Ϊ�޷�ͨ������strlen������Ƚ��ַ�������
//����unsigned int �����Ȼ��unsigned int ȡֵ��Χ��0-255
//����ǿתΪint  Ҳ��ʹ��strcmp


//ģ��ʵ��strlen

//1.����������
//2.ָ�롪ָ��
//3.�ݹ�
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


//name="zhangsan" name������������ĸ��ַ ��ַ�ǳ���ֵ ���ܱ���ֵ
//strcpy����\0����ǰ���ַ��� ����\0 
//���������ַ���һ��Ҫ��\0
//���յ��ַ�����Сһ��Ҫ���ڵ���Դ�ַ���
//Ŀ��ռ��������޸�
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

//�ַ���׷��
//strcat 
//Դ�ַ���������\0


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


//�ַ����Ƚ�
//strcmp
//����Ƚ�ASCII��ֵ 
//arr1==arr2 �����ڱȽ������ַ������׵�ַ


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

//���������Ƶ��ַ�������
//strncpy
//strncat  ĩβ�Զ���һ��\0
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
//�����Ӵ�

//strtok
//�и��ַ��� 


//strerror
//���ش�����Զ�Ӧ�Ĵ�����Ϣ
//errno C�������õ�һ��ȫ�ֵĴ������ŵı���

//memcpy ���𿽱���������ռ��е�����  ��ǰ���� ����ͬһ����������ݻ�����ص�
//memmove �ص��ڴ�Ŀ���  �Ӻ���ǰ��  ���⸲��

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

//��ʱ����Ҫ��ǰ����������
//��ʱ����Ҫ�Ӻ���ǰ��������
//ǰ����Ҫ���⿽�����������ݱ�����  ��������������
//dest<src ���ô�ǰ���
//dest>src���ôӺ���ǰ

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	//��ǰ���
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	//�Ӻ���ǰ��
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
//�Ƚ������С

//memset
//memset(arr,'x',5)

//С���ָ�����


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

//�߼��ж�����
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

//��ӡ�������

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

//ʵ��һ������ �����ַ�
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

//ͨ����������ʵ��


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


//���Ͼ���
//ÿ�д����ҵ��� ÿ�д��ϵ��µ���
//Ҫ��ʱ�临�Ӷ�С��o(N)

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
//		printf("�Ҳ���");
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


//����ת��

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

//�����Ǿ����ж�

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
//				//���������Ǿ���
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

//�ṹ��Ķ��巽ʽ
//�ṹ��ֻ�Ƕ�����һ������ �൱��һ��int ����char ���ܳ�ʼ��


//struct Stu
//{
//	char name[20];
//	int age;
//}s1, s2;
////s1,s2��ȫ�ֱ���
//
////�����ṹ������ ֻ�ܴ������͵�ʱ��ʹ��һ��
//struct
//{
//	char name[20];
//	int age;
//}s4;
//
////�ṹ���������
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//
//int main()
//{
//	//s3�Ǿֲ����� ������struct Stu
//	struct Stu s3;
//
//	return 0;
//}

//���ݽṹ
//�������ڴ��еĴ洢�ṹ��
//���� ˳��� ���� ���� ������

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


//�ṹ���ڴ����
//offsetof()
//VSĬ�϶�����Ϊ8
//�Կռ任ȡʱ��
//��ռ�ÿռ�С�ı�������һ��  ���Խ�Լ�ռ�

//#pragma pack(4)

//#pragma once ��ͷ�ļ���ʹ�� ��ֹͷ�ļ����������
