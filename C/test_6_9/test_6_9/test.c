#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>




//��дһ������
//ʵ�ֽ������ַ��е��ַ��������У����������ӡ
//˫ָ��ʵ��

//int main() 
//{
//	char arr[] = "abcdef";//a b c d e f \0
//	//��Ҫ��ȥ\0��������Ԫ�ظ���
//	// strlen()���ַ����鳤�Ȳ������\0,����ֱ����
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


//�ݹ�ʵ��,��һ������
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
//	//���鴫�ι�����ָ�����������strken()���ַ�������
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


//�ݹ�ʵ�� �����ƴ��θ���

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


//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�

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

//дһ������ʵ��n��k�η�
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

//sizeof��һ��������
//������������������ͣ���ռ�ڴ�ռ�Ĵ�С������ע�ڴ��д�ŵľ�������
//��λ���ֽ�

//strlen��һ���⺯������ר������ַ������ȵģ�ֻ������ַ���
//�Ӳ��������ĵ�ַ���һֱ��\0,ͳ��\0֮ǰ���ֵ��ַ�����


//������A�е����ݺ�����B�е����ݽ��н���������һ����
//��������ѭ������
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
//	//��ѭ�����ܴ�ӡ����
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


//����һ���������飬��ɶ�����Ĳ���
//1.ʵ�ֺ���init()��ʼ������Ϊȫ0
//2.ʵ��print()��ӡ�����ÿ��Ԫ��
//3.ʵ��reverse()�����������Ԫ�ص�����

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

//���εĳ��� 1/2-->0
//�����͵ĳ��� 1.0/2-->0.5  ��������������һ����С��
//%���������˱���������

//<<���Ʋ����� �ƶ����Ƕ�����λ
//�����Ķ����Ʊ�ʾ������
//ԭ��
//����
//����
//������ԭ�� ���� ������ͬ
//������ԭ�� ���� ������Ҫ����
//7
//00000000000000000000000000000111-ԭ��
//00000000000000000000000000000111-����
//00000000000000000000000000000111-����
//-7
//10000000000000000000000000000111-ԭ��
//11111111111111111111111111111000-���루ԭ������λ���䣬����λ��λȡ����
//11111111111111111111111111111001-���루�����1��

//�������ڴ��д洢���ǲ���
//��λ�������ƶ������ڴ��еĲ���
//���Ʋ�������߶���һλ���ұ߲�0
//�������Ʋ�����ֻ���������

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


//���Ʋ�����
//������λ:�ұ߶�������߲�����λ
//�߼���λ���ұ߶�������߲�0
//vs���������õ�����������
// ��λ����� �����ƶ�����λ
// ����nλ�൱�ڽ�������2^n
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

//&-��λ�루2����λ��   ȫΪ1��Ϊ1������Ϊ0
//|-��λ��2����λ��   ��1Ϊ1��ȫΪ0Ϊ0
//^-��λ���2����λ�� ��ͬΪ0������Ϊ1

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//
//	//00000000000000000000000000000011 -3�Ĳ���
//	//10000000000000000000000000000101 - -5��ԭ��
//	//11111111111111111111111111111010- -5�ķ���
//	//11111111111111111111111111111011- -5�Ĳ���
//	//00000000000000000000000000000011 -3�Ĳ���
//	//00000000000000000000000000000011
//	
//	//��
//
//	//%d ��ζ�Ŵ�ӡһ���з��ŵ�����
//
//	printf("c=%d", c);
//	printf("d=%d", d);
//	printf("e=%d", e);
//}


//���ܴ�����ʱ������ʵ���������Ľ���
//3^3=0
// a^a=0
//011
//011
//0^a=a
//3^5^3=5
//3^3^5=5
//���֧�ֽ�����

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//
//	//���ܴ������
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������a=%d b=%d", a, b);
//
//	return 0;
//}

//��һ�������洢���ڴ��еĶ�������1�ĸ���
//�����ж�������1�ĸ���
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
//	printf("%d�洢���ڴ��е�2����λ��1�ĸ���=%d",b,count);
//
//	return 0;
//}

//=��ֵ
//==�ж����
//������������ֵ

//a=a+5
//a+=5
//a=a>>1
//a>>=1

//��Ŀ������
// !a(ȡ�����ٱ��� ����) 
//-a
//+a
//&a  ȡ�����Ǳ�����ַ���׵�ַ
//sizeof �ǲ����� ���Ǻ���
//~��2����λ��λȡ��
//*p �Ե�ַ������ ָ��p��ַ��ı���
//(����) ǿ������ת��

//˫Ŀ������  ������������
// a+b  a*b a-b

//C������0��ʾ�� ��0��ʾ��

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	//00000000000000000000000000000000 - ����
//	//11111111111111111111111111111111 - ~a�Ĳ���
//	//10000000000000000000000000000001 - ~a��ԭ��
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
//	//ǰ��++����++,��ʹ��
//	//int b = ++a;
//	//����++����ʹ�ã���++
//	//int b=a++;
//
//	return 0;
//}

//for(i=0;i<10;i++)��for(i=0;i<10;++i)Ч���ϲ�û������
//����++iЧ�ʸ���

//int main()
//{
//	//ǿ��ת��Ϊint 3.14f��Ϊ��float���ͣ�3.14����Ϊ��double����
//	int a = (int)3.14;
//	char ch = 's';
//
//	srand((unsigned int)time(NULL));
//
//	printf("%d\n", a);
//	//�ַ���ռ�ֽ�Ϊ1
//	printf("%zu", sizeof(ch));
//
//	return 0;
//}

//if("abc"=="abcde")����д�ǱȽ������ַ������ַ��ĵ�ַ �����÷�
//ʵ�������ַ����Ƚ����Ӧ��ʹ��strcmp�⺯��


//a&&b ����  һ��Ϊ�پ��Ǽ� ȫ���Ϊ��
//a||b ���� ֻҪһ��Ϊ���Ϊ��

//&& ���Ϊ�� �ұ߾Ͳ�������
//|| ���Ϊ�� �ұ߾Ͳ�������

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//����&&����·���� ��һ��a++Ϊ0��ȫΪ0�������ټ�������������
//	i = a++ && ++b && d++;
//	//ͬ��a++Ϊ�� ����Ͳ�����
//	//i = a++ || ++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//
//
//	return 0;
//}

//��������������Ŀ��������
//a>b?a:b

//���ű��ʽ
//���������μ��� �������ʽ��ֵ�����һ�����ʽ��ֵ
//arr[7]==7[arr] []�ǲ�����

//arr[7]-->*(arr+7)-->*(7+arr)-->7[arr]



//�ṹ��ָ��->��Ա  �൱��*���ṹ��ָ�룩.��Ա
//�ṹ�����.��Ա
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