#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//C���Խ���
//sizeof(long)>=sizeof(int)
//long 32λ4�ֽ� 64λ8�ֽ�
//char 1
//short 1
//int 4
//float 4
//double 8
//long long 8

//�ַ��ñ�����ASCII��ֵ �����ͣ����Ի��ֵ����ͼ���
//char  ��signed char����unsigned char�Ǳ�׼δ�涨�� ȡ���ڱ�������ʵ��
// 
//signed char
//unsigned char

//int  int a -> signed int �ȼ�
//signed int 
//unsigned int 

//short -> singed short

//long -> signed long

//long long -> signed long long

//��������Щ������û�и����� 
//��� ���� ����
//int a
//a��һ������ �з��ŵ����� ���λ������������
//����λ��0��ʾ����
//����λ��1��ʾ����

//unsigned int ���λ����ʾ����

//�����ͼ���
//float  ���ȵ� �洢�����ݷ�Χ��С
//double  ���ȸ� �洢�����ݷ�Χ����

//void test(void)   ��һ��void��ʾ�������᷵��ֵ
//�ڶ���void ��ʾ��������Ҫ���κβ���

//��ֵ�в�ͬ�ı�ʾ��ʽ
//2����
//8����
//10����
//16����

//������2����Ҳ�����ֱ�ʾ��ʽ
// 1.������ ԭ�뷴�벹����ͬ
// 2.������ ԭ�뷴�벹����Ҫ����
//ԭ�� ����λ1��ʾ���� 0��ʾ����
//���� ����λ���� ����λ��λȡ��
//���� ����+1

//20
//00000000 00000000 00000000 00010100 - ԭ�� ���� ������ͬ
// 0x00 00 00 14 16����
//-10
//10000000000000000000000000001010 - ԭ��
//11111111111111111111111111110101 - ����
//11111111111111111111111111110110 - ����

//�ڴ��д����2����
//�������ڴ��д���ǲ����2��������
//CPUֻ�мӷ���

//ʹ�ò��� ���Խ�����λ����ֵ��ͳһ����
//����ȡ��+1Ҳ���Եõ�ԭ�� ����

//��С��
//0x11223344
//����ֽ���洢  
//��һ�����ݸ�λ�ֽ�������ݴ���ڵ͵�ַ�����ѵ�λ�ֽ�����ڸߵ�ַ��
//0x 11 22 33 44
//С���ֽ���洢
//��һ�����ݸ�λ�ֽ�������ݴ���ڸߵ�ַ�����ѵ�λ�ֽ�����ڵ͵�ַ��
//0x 44 33 22 11
//��С�˴洢��Ӳ��������
//x86��С��


//д�����жϻ����Ǵ�˻���С�˴洢

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
//		printf("С��\n");
//	else
//		printf("���\n");
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

//�������� ��λ������λ
//�޷�������λ��0
//char - -128-127

//int main()
//{
//	char a = -128;
//	//a�������з��ŵ� ����������Ҫ������λ
//	printf("%u\n", a);
//	printf("%d", a);
//
//	return 0;
//}

//signed int ��unsigned int ��Ӱ���unsigned int����

//unsigned char��ȡֵ��Χ��0-255

//strlen ���ַ����� '\0'֮ǰ���ַ����� ����ֵ��unsigned int

//��int��ʽ�洢 ��float��ʽȡ 
//������float ��ʽ�洢 ��int ��ʽȡ ������� ȡ������Ҫ��ֵ

//�������洢����

//������С������λ�����ޱƽ�ԭʼ�� �����޷���ȷ����

//int main()
//{
//	float f = 5.5;
//	//5.5
//	//101.1
//	//1.011*2^2
//	//s=0 m=1.011 e=2
//	//e=e+127=129
//	// m �еĵ�һ��1���� ���油0 
//	//0 10000001 01100000000000000000000
//	//0x 40 b0 00 00
//
//	return 0;
//}

//дһ������ʵ�������е�����λ�������ǰ�벿��
//ż��λ������ĺ�벿��


//void move_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//����������ż��
//		while ((left<right)&&arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//��������������
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

//�ϲ������������е�����

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
//	//�Ƚϴ�С��ֱ�Ӵ�ӡ
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
//		//����һ�������Ѿ���ӡ���
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

//char* p="abcdef" ���ַ������ַ�a�ĵ�ַ������p

//printf("%s\n",p) %s������ӡһ���ַ��� p������ĸ��ַ ���Դ�ӡ�����ַ���

//��ͬ�����ַ��� ���Ὺ�������ռ� ����ָ�����ͬʱָ��������� ��p1==p2
//���������������������ͬ�����ַ��� �ᴴ������ռ�洢 ��arr1!=arr2

//int* arr1[6] �������ָ�������
//char* arr2[10] ����ַ�ָ�������

//����ָ��  ָ�������ָ�� �������ĵ�ַ
// int (*p2)[10]=&arr
//int (*p2)[10] p2������ָ�� ��������10��Ԫ�� ÿ��Ԫ����int����


//������ͨ�����Ǳ�ʾ��Ԫ�ص�ַ
//��������������
//1.sizeof(arr),�������������ʾ�������� ���������������Ĵ�С
//2.&arr ��ʾ������������ ����&arrȡ�������������ĵ�ַ

//char* (*pc)[5]=&arr

//��ά�������Ԫ���ǵ�һ��
//����������ʾ��һ��

//int arr[5]  ��������
//int *parr1[10] ����ָ������
//int (*paar2)[10] ����ָ��
//int (*parr3[10])[5]  �������ָ�������

//�βεĶ�ά�����п���ʡ�� �в���ʡ��
//int arr[][5]

//ָ������

//����ָ��  ָ������ָ��
//&������ ȡ�������ĵ�ַ
//������ Ҳ��ȡ������ĵ�ַ

//int (*pf)(int ,int)=&Add
//(*pf)(2,3)

//int main()
//{
//	//ָ������
//	int* arr[4];
//	char* ch[5];
//	int** p = arr;
//
//	//����ָ��
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
//	//����ָ��  Ҳ��һ��ָ�룬��ָ������ָ��
//	printf("%p\n", test);
//	printf("%p\n", &test);
//
//	int (*pf)(const char*) = test;
//	(*pf)("abc");
//	pf("abc"); 
//
//	return 0;
//}


//typedef void(*pf_t)(int)  ��void(*)(int)����������Ϊpf_t


//����ָ����;

//дһ��������

//void menu()
//{
//	printf("**************************************\n");
//	printf("************ 1.Add  2.Sub ************\n");
//	printf("************ 3.Mul  4.Div ************\n");
//	printf("**************  0.�˳�  **************\n");
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
//	printf("������������������>");
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
//		printf("��ѡ��>");
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
//			printf("�˳�������\n");
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//	}while(input);
//
//	return 0;
//}


//�Ѻ���ָ����������о��Ǻ���ָ������

//int main()
//{
//	//����ָ������
//	//ת�Ʊ�
//	int (*arr)(int, int)[4] = { Add,Sub,Mul,Div };
//
//	//ָ���������ָ��
//	int (*(*pparr)[4])(int,int) = &arr;
//
//	return 0;
//}

//�ص�����
//ͨ������ָ����õĺ���

//ð������
//����������������
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
//			//����Ƿ��Ѿ�����
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

//�Ƚ���������Ԫ��
//void* ��û�о������͵�ָ�� ���Խ����������͵ĵ�ַ ���ܽ����� 
//Ҳ����+-����
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//
//int main()
//{
//	int arr[] = { 19,20.40,9,8,7,6,5,4,3,2,1,0 };
//	//�������ų�����
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

//ָ�����鱾���������� �����д�ŵ���ָ�루��ַ��
//int* arr[3]={&a,&b,&c};

//�������󲿷�����±�ʾ��Ԫ�ص�ַ
//��������������
//1.sizeof(������) ��ʾ��������Ĵ�С ���������������Ĵ�С
//2.&������ ȡ��������������ĵ�ַ

//����ָ�����ڴ�����ĵ�ַ
//int (*parr)[10]=&arr;
 
//����ָ�� ����Ҳ���е�ַ��
//����Ҳ���е�ַ�� ����ָ�� 
//int (*pf)(int,int)=&Add;
//int (*pf)(int,int)=Add;
//int sum=pf(2,3);
//int sum=(*pf)(2,3)

//����ָ������������
//����ָ������
//int (*pfarr[10])(int,int)

//ͨ������ָ����õĺ������ǻص�����
