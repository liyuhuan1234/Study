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


//�����ͳ����ĸ���
// {}�ڲ�����ı����Ǿֲ�����
// {}�ⲿ����ı�����ȫ�ֱ��� 
//int b = 20;
//int main()
//{
//	//short age = 20;//����
//	//int height = 180;//���
//	//float weight = 88.5;//����
//
//	int a = 10;
//
//
//	return 0;
//}

//int main()
//{
//	int   num1 = 0;//��ʼ��
//	int num2 = 0;
//
//	//������������
//	scanf("%d %d", &num1, &num2);
//
//	//���
//	int sum = num1 + num2;
//
//	//���
//	printf("%d", sum);  
//
//
//	return 0;
//}

////��������������
//int main()
//{
//	int a = 10;
//	{
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n",a); 
//	return 0;
//}
////���������ⲿ�ķ���
//extern int a;
//
////��C�����У�const���ε�a�������Ǳ��������ǲ���ֱ���޸ģ��г���������
//const int a=10;
//
//#define MAX 100
//#define STR "abcdef"


//ö�ٳ���
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
//	//C������û���ַ�������
//	char arr1[] = "abcdef";//�����ص�\0��Ϊ������
//	char arr2[] = { 'a','b','c','d','e','f','\0'};//һ��Ҫ��\0���ܽ�������Ȼ��һֱ���ֱ������\0
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	int len = strlen("abc");//���ַ�������
//	printf("%d\n", len);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//  }

//%d-��ӡ�з������ͣ�������������
//%u-��ӡ�޷���������û�и�����
//%c-��ӡ�ַ�
//%s-��ӡ�ַ���
//%f-��ӡfloat���͵�����
//%.4f-��ӡfloat���͵�����,���ұ���С�������λ������������
//%lf-��ӡdouble���͵�����
//%zu-��ӡsizeof�ķ���ֵ
//%p-��ӡ��ַ

//int main()
//{
//	//��\ת��'
//	printf("%c\n",'\'');
//	//��\ȡ��\0
//	printf("abcd\\0ef\n");
//	//��ӡ�ļ�·��һ��Ҫ����\\,��ֹת��
//	printf("D:\\Laboratory\\Available\\����\\�ڶ�ƪͶ��\\physica status solidi (b) - basic solid state physics\n");
//	//�������Է�������
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
//	//C99��׼֮ǰ������Ĵ�С�����ó������߳������ʽ��ָ��
//	int arr1[10] = { 0 };
//	int arr2[] = { 1,2,3 };
//	//C99��׼֮��֧���˱䳤���飬���ʱ����������Ĵ�С�Ǳ�������������ָ����ʽ�ǲ��ܳ�ʼ����
//	int m = 100;
//	int arr3[m];//���ܳ�ʼ��
//
//	return 0;
//}


//������
//int main()
//{	
//	//int a = 7 / 2;///��ȡ��
//	//int b = 7 % 2;//%��ȡ����
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	 
//
//	//���ŵ����˶���������ʱ��ִ�е��������������������ֻҪ��һ����������ִ�и���������
//	float a = 7 / 2.0;///��ȡ��
//	//ȡģ������������ֻ��������
//	int b = 7 % 2;//%��ȡ����
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
//	//��double���͵�3.14ǿ��ת��Ϊ����3
//	int b = (int)3.14;
//
//	return 0;
//}

//���ű��ʽ���ص��ǣ������������μ��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ��

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);//b=5
//	printf("%d\n", d);
//	return 0;
//}


//��1��+2��+3��+....+n!
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

//���ֲ��ң�ʱ�临�Ӷ�Ϊo(logn),��������������
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//
//	return 0;
//}


//��д����,��ʾ����ַ��������ƶ�,���м��ۡ�
// 
//���ַ�����"welcome to bite!!!!"������strlen()�����鳤��strlen(arr1)
// ������±�right=strlen(arr1)-1
//Ҳ������sizeof(arr1)/sizeof(arr[0])
// ������±�sizeof(arr1)/sizeof(arr[0])-2
//��Ϊ������������ĩβĬ�ϴ�\0,strlen()��ͳ��\0,��sizeof()��ͳ��\0
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
//		Sleep(1000);//ֹͣ1000ms�����㿴���������ͷ�ļ�windows.h
//		//�����Ļ��һ����ʾ��system��һ���⺯��������ִ��ϵͳ���ͷ�ļ�stdlib.h
//		system("cls");
//		left++;
//		right--;
//	 }
//
//	return 0;
//}


//��д����ʵ��,ģ���û���¼�龰,����ֻ�ܵ�¼���Ρ�(ֻ����������������,���������ȷ��
//��ʾ��¼��, ������ξ��������, ���˳�����

//���鱾����ǵ�ַ�����Բ���Ҫȡ��ַ
//�Ƚ������ַ����Ƿ���ȣ�����ʹ��==����Ӧ��ʹ�ÿ⺯��strcmp
//�������ֵ��0�����������ַ������,ͷ�ļ���string.h

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i=0;i<3;i++)
//	{
//		printf("���������룺>");
//		scanf("%s",password);
//		if (strcmp(password,"abcdef") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�����������������˳�����\n");
//	}
//
//	return 0;
//}

//���鴫����ʵ�ʴ�������Ԫ�صĵ�ַ

//��������Ϸ
//���Բ���һ���������1-100��
//������
//�����´��˻��ǲ�С��


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
//	//��Ҫһ����������룬��Ҫʱ�������time����,ͷ�ļ�Ϊtime.h
//	//1.���������1-100
//	//�����������0-RAND_MAX(0-32767)
//	int ret = rand()%100+1;
//	printf("%d\n", ret);
//	while (1)
//	{
//		//2.������
//		printf("������֣�>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//�ػ�����
//1.��������������1�����ڹػ�
//2.������룺������ȡ���ػ�

//shutdown -s -t 60 ����ʱ�䵹��ʱ60s�ػ�
//shutdown -a ȡ���ػ�

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 360");
//again:	
//	printf("��ע����ĵ��Խ���60���ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}	
//	return 0;
//}

//����֪ʶ��
//   d ��ʮ������ʽ�������������(�������������)
//   o �԰˽�����ʽ����޷�������(�����ǰ׺O)
//   x ��ʮ��������ʽ����޷�������(�����ǰ׺Ox)
//   X ��ʮ��������ʽ����޷�������(�����ǰ׺OX)
//ʹ�����η���#������ǰ����ʾ:
//   # ��c��s��d��u����Ӱ�죻��o�࣬ �����ʱ��ǰ׺0����x�࣬�����ʱ��ǰ׺0x��
//ע�⣺��ĿҪ��ʮ�����ƣ���ĸ��д�����ԣ�������������X�࣬�����ʱ��ǰ׺0X��


//memset(arr,'x',5ii)

//��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���Ӱ��ʵ��


//��ֵ����  ���ı��������ֻ�ǶԱ������в���
//��ַ����  ��Ҫ�Ա���������иı�


//дһ�����������ж�һ�����ǲ�������,100-200
//�ú���ʵ��

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
//		//�ж��Ƿ�Ϊ���� ֻ�ܱ�1����������������
//		//��2��sqrt(i)����ȥ��,����ܱ���������i����д��һ��С�ڵ���sqrt(i)����һ�������
//		//����ż������������������ż����ʼ��ÿ�μ�2��������ż��
//		//��Ǳ�������1��ʾΪ����
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}


//дһ�������ж�һ���ǲ�������,1000-2000

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж��Ƿ�Ϊ����
//		//1.�ܱ�4�������Ҳ��ܱ�100����
//		//2.�ܱ�400����
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
//		//�ж��Ƿ�Ϊ����
//		//1.�ܱ�4�������Ҳ��ܱ�100����
//		//2.�ܱ�400����
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}


//дһ��������ʵ��һ��������������Ķ��ֲ���

//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (left-right) / 2;//��ֹ���
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
//	//�ҵ��˷����±꣬�Ҳ�������-1�����ܷ���0����Ԫ���±�Ϊ0
//	int ret=binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//
//
//	return 0;
//}

//��ʽ������ʵ�ʲ��������ֿ�����ͬ��Ҳ���Բ�ͬ
//���鴫��ֱ�Ӵ�������arr,���ܴ�[]��arr��ʵ��һ��ָ�����
//���鴫�δ�������Ԫ�ص�ַ����˼��������Сsz = sizeof(arr) / sizeof(arr[0])���������������У�Ȼ�󴫸��Զ��庯��


//дһ��������ÿ����һ�����������num�ͻ�����1


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

//��ʽ����
//��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���

//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	//printf�����᷵�ش�ӡ�ַ��ĸ���
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//} 


//main�������������ɲ�����
//int main(int argc,char* argv[],char* envp[])
//{
//	return 0;
//}

//�ڵ��ú���ǰ���к�������
//��������ʹ��
//��������һ����ͷ�ļ�.h��,�����Ķ������.c�У��������ļ� ����.h�ļ�
//����������.h�ļ��൱�ڽ�.h�ļ��еĺ����������������õ�.c�ļ���


//���뾲̬��
//#pragma comment(lib,"add.lib")

//�����������ı�̼��ɳ�Ϊ�ݹ�

//����һ���޷�������ֵ������˳���ӡ����ÿһλ
//���磺���룺1234 ���1 2 3 4

//�ݹ�ʵ��
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

//��д��������������ʱ���������ַ����ĳ���
//ģ��ʵ��strlen()
//�ַ������δ���������ĸ��ַ���൱�����飬�Ǹ�ָ������������Ҫָ��������β�������

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

//�ݹ������
//��n�Ľ׳�

//�ݹ�ʵ��
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

//���n��쳲���������
//1 1 2 3 5 8 13 21 34 55
//ǰ����֮�͵��ڵ�������

//�ݹ�
//int Fib(int n)
//{
//	if (n > 2)
//		return Fib(n - 1) + Fib(n - 2);
//	else
//		return 1;
//}

//����
//�ȵݹ�죬���������
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

//��ŵ������
//������̨������


//�����������Ӵ�С���


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

//��������

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

//��ӡ1-100֮��3�ı�������������

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

//�������������Լ��
//������ⷨ

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

//շת�����
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

//��󹫱�����a*b/���Լ��

//��д������һ��1-100�������������ж��ٸ�����9
//int main()
//{
//	int n = 0;
//	int count = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		//�жϸ�λ�ǲ���9
//		//�ж�ʮλ�ǲ���9
//		if (n % 10 == 9)
//			count++;
//		if (n / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5....+1/99-1/100

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

//��10�������е����ֵ
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


//����Ļ�������9*9�˷��ھ���
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

//ʵ��һ����������ӡ�˷��ھ����ھ��������������Լ�ָ��

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

//��C99��׼֮ǰ������Ĵ�С�����ǳ������߳������ʽ
//��C99��׼֮������Ĵ�С �����Ǳ�����Ϊ��֧�ֱ䳤����
//int n=10;
//int arr[n];//�������鲻�ܳ�ʼ��
//ĿǰVS��������֧�����´���
//int main()
//{
//	int n = 10;
//	int arr[n];
//	printf("%d", arr[0]);
//}

//int main()
//{
//	//����ȫ��ʼ����ʣ���Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	int arr[10] = { 1,2,3 };
//	//���ݳ�ʼ��Ԫ�ظ���ȷ�������С��3
//	int arr2[] = { 1,2,3 };
//
//	//a b c 0 0 0 0 0
//	char ch1[10] = { 'a','b','c' };
//	//a b c \0 0 0 0 0
//	char ch2[10] = "abc";
//	//����Ԫ��
//	char ch3[] = { 'a','b','c' };
//	//�ĸ�Ԫ�أ�Ĭ�϶�һ��\0
//	char ch4[] = "abc";
//
//	return 0;
//}

//�������ڴ�����������ŵ�

//��ά����
//int main()
//{
//	//3��4��
//	//int arr1[3][4]={1,2,3,4,2,3,4,5,3,4};
//	//int arr1[3][4] = { {1,2},{3,4},{2,3} };
//	//��ά�����п���ʡ�ԣ��в���ʡ��
//	//int arr1[][4] = { {1,2,3,4},{3,4}};
//	//char arr2[5][10];
//
//	//��ά�����ʼ��
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

//����Խ��
//���鴫�ζ�ʱ���β�������д��
//1.���� int arr[]
//2.ָ�� int *p
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

//ָ��
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
////ð������
////����˼�룺��������Ԫ�ؽ��бȽ�
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//ֻ������������sz��ֵ�����ε����õĺ���ֻ���������Ԫ�صĵ�ַ
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

//������ȷʵ�ܱ�ʾ��Ԫ�ص�ַ
//��������������
//1.sizeof(arr)���������������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2.&arr���������������ʾ�������飬ȡ��������������ĵ�ַ

//��ά���������������
//��ά�����������Ҳ��ʾ��Ԫ�صĵ�ַ������һ�еĵ�ַ��arr
//��ʾ��һ�еĵ�ַ�������һά����
//int main()
//{
//	int arr[3][4] = { 0 };
//	//�����ά��������
//	int n = sizeof(arr) / sizeof(arr[0]);//arr[0]�����һ��
//	//�����ά��������
//	int m = sizeof(arr[0]) / sizeof(arr[0][0]);
//	return 0;
//}


