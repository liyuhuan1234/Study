#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

//ʵ�õ��Լ���
// Debug�ǵ��԰汾
//Release�Ƿ����汾
//F5��ʼ���� ����ȫ������ ���е��ϵ㴦
//F10ÿ����һ��
//F9��ϵ� ȡ���ϵ�
//F11���뺯���ڲ�

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

//1.ջ���ڴ��ʹ��ϰ������ʹ�øߵ�ַ���Ŀռ䣬��ʹ�õ͵�ַ�Ŀռ�
//2.���������±���������ַ���ɵ͵��߱仯
//3.���i��arr֮�����ʵ��Ŀռ䣬���������Խ��������ܻḲ�ǵ�i
//���ܻᵼ����ѭ��
// ��Ҫԭ���Ƕ����������Խ����ʣ����Ҫ��������Խ�����
//����ͨ���ȴ������飬�ٴ���i������������øߵ�ַ�����õ͵�ַ

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

//strcpy�Ὣԭ�ַ����е�\0Ҳ������ȥ
//strcpy�������ص���Ŀ��ռ����ʼ��ַ


//const ���εı��������޸�
//���ǿ���ͨ��ȡ��ַ��
//const ����ָ�����
//1.const����*�����
//��ʾpָ��Ķ��󲻶���ͨ��p���ı�  ����p����ָ��ĵ�ַ���Ըı�
//const int* p
//int const* p

//2.const����*���ұ�
//int* const p
//��ʾpָ��Ķ������ͨ��p���ı䣬���ǲ����޸�pָ��ĵ�ַ


//int main()
//{
//	const int num = 0;
//	int* p=&num;
//	*p = 20;
//
//	return 0;
//}


//���ַ�������

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


//�ж���������Ȳ���ʹ��a==b==c
//��Ӧ��ʹ��a==b&&b==c

//�������ڴ��д��ʱ�����մ�С���ֽ���洢
//����

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


//�κ�һ���������߱��ʽ������������
//1.ֵ����
//2.��������

//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
// //%x 16���ƴ�ӡ
//	printf("%x\n", a);
//	return 0;
//}

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ��

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

//дһ�����������ַ���

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
//	//scanf�����ո�Ͳ�������
//	//gets
//	gets(arr);
//	int len = strlen(arr);
//	Reverse(arr, len);
//	printf("%s\n", arr);
//
//	return 0;
//}

//����Sn=a+aa+aaa+aaaa+aaaaa��ǰ����֮�ͣ�����a��һ������

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

//�ж�һ����λ���Ƿ���ˮ�ɻ���
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


//��ӡ����

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//��
//	for (i = 0; i < line-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * (line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//����ˮ һƿ��ˮһԪ��2����ƿ���Ի�һƿ��ˮ ��20Ԫ ���Ժȶ�����ˮ

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
//	//ʵ������2n-1
//	//if(money>0)
//	//printf("%d\n",2*money-1);
//	//else
//	//printf("%d\n",0)
//	printf("%d\n", total);
//
//	return 0;
//}

//����С������
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

//�����ַ���
//I like beijing.
//beijing. like I
//1���������ַ�������
//2����ÿ����������

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