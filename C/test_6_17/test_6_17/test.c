#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stddef.h>
#include<ctype.h>
#include<assert.h>
#include<limits.h>





//�ṹ�崫��

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
//	//��ֵ����
//	print1(s);
//	//��ַ����
//	print2(&s);
//
//	return 0;
//}


//λ/wangluo
// int unsigned int signed int char
//����������ʡ�ռ�
//ÿ�ΰ���4���ֽڣ�int������1���ֽڣ�char����ʽ������
//struct A
//{
//	 //aֻռ����bitλ
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};


 //ö��
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


//���� ������
//����ͬһ��ռ�
//�����ռ䲻��ͬʱʹ�� ����
// �����ڴ���� 
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

//�жϵ�ǰ�����洢��ʽ�Ǵ�˻���С��


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
//		printf("С��\n");
//	else
//		printf("���\n");
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


//��̬�ڴ����
//1.malloc
//2.calloc
//3.realloc
//4.free

//void* malloc(size_t size)
//���ܻῪ��ʧ�� ����ʧ�ܷ���NULL
//INT_MAX

//C99֧�ֱ䳤����
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
//	//û��free
//	//�������˳�ʱ��ϵͳ���Զ������ڴ�ռ�
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


//free�����ͷŶ�̬���ٳ����Ŀռ�

//calloc
//void* calloc(size_t num,size_t size)
//�ڿ��ٿռ�ʱ�Զ�������Ԫ�س�ʼ��Ϊ0
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
//size ׷�Ӻ��ܿռ��С

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
//	//����ԭָ��ֱ�ӽ��� ��������ʧ�� ����ԭ�ȿռ䶪ʧ
//	int* ptr=(int*)realloc(p, 80);
//	//������ݳɹ� �Ž���ַ��ԭ����ָ��
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



//�ڴ��
//int main()
//{
//	//�ȼ���malloc
//	realloc(NULL, 40);
//	return 0;
//}


//������̬�ڴ����
//1.�Կ�ָ��NULL�Ľ����ò���

//int mian()
//{
//	int* p = (int*)malloc(40);
//	//һ��Ҫ�ж��Ƿ񿪱ٳɹ�
//	if (p == NULL)
//		return 1;
//
//	*p = 20;
//	return 0;
//}
//
////2.�Զ�̬�ڴ�ռ��Խ�����
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

//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//freeֻ�ܶ�malloc realloc calloca�����ڶ����ϵĿռ�����ͷ�

//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
//ʹ����p++,pָ�����ʼλ���Ѿ��ı�
//ѡ��ʹ��*��p+i�� p[i]

//5.��ͬһ��ռ�Ķ���ͷ�
//����free(p)

//6.�����ͷŶ�̬�ڴ�
//�ڴ�й¶
//��������ĩβ�ͷ�

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

//�ں˿ռ�
//ջ
//�ڴ�ӳ���
//��
//���ݶ�
//�����

//��������
//C99�� �ṹ���е����һ��Ԫ����δ֪��С������
//��������ǰ������һ��������Ա
//sizeof���ص����ֽṹ��С����������������ڴ�
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
//	//��������
//	struct S* ptr=realloc(ps, sizeof(struct S) + 80);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//		ptr == NULL;
//	}
//
//	//�ͷſռ�  ptr����Ҫ�ͷ� ��������һ���е�ptr==NULL
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}


//�ļ�����
//�ļ�ָ��
//FILE
//FILE* fopen(const char* filename,const char* mode)
//r w 

//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//���ļ�
//
//
//	//�ر��ļ�
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
//	//д�ļ�
//	/*int i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);
//	}*/
//
//	//���ļ�
//	//int ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//int ch = 0;
//	//while ((ch = fgetc(pf)) != EOF)
//	//{
//	//	printf("%c\n", ch);
//	//}
//
//	//дһ������
//	//��w�򿪻Ὣ�����������������Ϣ
//	/*fputs("hello bit",pf\n);*/
//
//	//��һ������
//	char arr[20];
//	//ʵ����Чλ��Ϊ4��Ĭ�����һλ������\0
//	fgets(arr,5, pf);
//	printf("%s\n", arr);
//
//
//	//�ر��ļ�
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

//д
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

//��
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

//�κ�һ��C����ֻҪ�������� �ͻ�Ĭ�ϴ�3����
//FILE* stdin  -��׼�����������̣�
//FILE* stdout - ��׼���������Ļ��
//FILE* stderr - ��׼����������Ļ��

  
//sprintf ��һ����ʽ��������д���ַ����� �������Ǹ�ʽ���ַ���
//scanf ��һ���ַ�����ת����һ����ʽ������

//int main()
//{
//	struct S s = { "zhangsan",20,55.5f };
//	struct S tmp = { 0 };
//	char buf[100] = { 0 };
//	//��s�еĸ�ʽ������ת�����ַ����ŵ�buf��
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.score);
//
//	printf("%s\n", buf);
//
//	//���ַ���buf�л�ȡһ����ʽ�����ݵ�tmp��
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.score));
//	printf("%s %d %f\n", tmp.arr, tmp.age, tmp.score);
//	
//	return 0; 
//}

//fseek �ļ��������д �����ļ�ָ��λ�ú�ƫ��������λ
//ftell �����ļ�ָ���������ʼλ�õ�ƫ����
//rewind �ļ�ָ��ص���ʼλ��

//�ı��ļ��Ͷ������ļ�
//�������ڴ����Զ����ƴ洢���������ת������������ ���Ƕ������ļ�
//��ASCII��洢�����ı��ļ�

//feof ���ļ���ȡ�����У�������feof�����ķ���ֱֵ�����ж��ļ��Ƿ����
//����Ӧ���ڵ��ļ���ȡ������ʱ���ж��Ƕ�ȡʧ�ܻ����ļ�����
//ferror

//�ļ�������

//���� ����
//Ԥ���� ���� ��� ����
// 
// 
//Ԥ���� �ı����� gcc test.c -E -o test.i
//1.ͷ�ļ��İ��� include
//2.define������ŵ��滻
//3.ע�͵�ɾ��

//���� gcc test.i -S ��C���Դ���ת��Ϊ������ 
//gcc test.c -S(����Ԥ����)

//��� gcc test.s -c ����test.o�ļ�
//1.�ѻ��ָ��ת��Ϊ�����ƴ���
//2.�γɷ��ű�

//����  ����test.exe
//1.�ϲ��α�
//2.���ű�ĺϲ����ض�λ
//Linux������elf��ʽ


//ĩβ�޷ֺţ�
//#define MAX 1000
//#define STR "hello bit"
//#define print printf("hehe\n")

//#define����� �겻�ܵݹ�  ����ȫ��д
//#define SQUARE(X) ((X)*(X))

//��������

//��ֹ��ΰ���ͷ�ļ�
//#pragma once
//<>��""�ǲ��Ҳ��Բ�ͬ
//<>���Ҳ�����ֱ��ȥ��Ŀ¼��ȥ����
//""�������ڵ�ǰ�ļ����²��ң�����Ҳ�����ȥ��Ŀ¼�²���


//offsetof���ʵ��
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


//�ҵ���
// һ��������ֻ�����������ǳ���һ�Σ��������ֶ�����������
//��дһ�������ҳ�������ֻ����һ�ε�����

//void find_sigle_dog(int arr[], int sz, int* pd1, int* pd2)
//{
//	int i = 0;
//	int ret = 0;
//	//1.���
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//2.����ret�ж��������ұߵڼ�λ��1
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
//	//����
// 	//2.�ҳ��������������һλΪ1
//	//3.�Ե�nλΪ1��һ�飬�Ե�nλΪ0��һ��
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int dog1 = 0;
//	int dog2 = 0;
//	find_sigle_dog(arr, sz,&dog1,&dog2);
//	printf("%d %d\n", dog1, dog2);
//
//	return 0;
//}


//atoi �������ַ���ת��Ϊ����

//1.��ָ��
//2.���ַ���
//3.�ո�
//4.+-
//5.Խ��
//6.�������ַ�

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
//	//�����հ��ַ�
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
//			//Խ��
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
//		printf("�Ƿ����أ�%d\n", ret);
//	}
//	else if (sta == VALID)
//	{
//		printf("�Ϸ����أ�%d\n", ret);
//	}
//
//	return 0;
//}

 //дһ���꣬��һ�������Ķ�����λ������λ��ż��λ����
//��Ҫ�õ�����λ�����ж�����λ�͸�����λ��������1��ż��λ��0
//��Ҫ�õ�ż��λ�����ж�����λ�͸�ż��λ��������1������λ��0
//Ȼ������λ��������һλ��ż��λ��������һλ
//���������ӵõ����


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