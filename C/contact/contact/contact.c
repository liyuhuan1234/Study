#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


void CheckCapacity(Contact* pc)
{
	if (pc->capacity == pc->count)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			printf("AddContact::%s\n", strerror(errno));
			return;
		}
		else
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("���ݳɹ�\n");
		}
	}
}

//��̬�汾
//void InitContact(Contact* pc)
//{
//	assert(pc);
//	pc->count = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}


void LoadContact(Contact* pc)
{
	FILE* pfRead = fopen("contact.txt", "rb");
	if (pfRead == NULL)
	{
		perror("LoadContact");
		return;
	}
	PeoInfo tmp = { 0 };

	while(fread(&tmp,sizeof(PeoInfo),1,pfRead)==1);
	{
		CheckCapacity(pc);
		pc->data[pc->count] = tmp;
		pc->count++;
	}

	fclose(pfRead);
	pfRead = NULL;
}

//��̬�汾
int  InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	pc->data=(PeoInfo*)calloc(3,sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		printf("InitContact::%s\n", strerror(errno));
		return 1;
	}
	pc->capacity = DEFAULT_SZ;

	//�����ļ���Ϣ��ͨѶ¼��
	LoadContact(pc);

	return 0;
}

void DestoryContact(Contact* pc)
{
	assert(pc);
	free(pc->data);
	pc->data = NULL;
}

//��̬�汾
//void AddContact(Contact* pc)
//{
//	assert(pc);
//	//�ж�ͨѶ¼�Ƿ�����
//	if (pc->count == MAX)
//	{
//		printf("ͨѶ¼�������޷����\n");
//		return;
//	}
//
//	printf("����������:>");
//	scanf("%s", pc->data[pc->count].name);
//	printf("����������:>");
//	scanf("%d", &(pc->data[pc->count].age));
//	printf("�������Ա�:>");
//	scanf("%s", pc->data[pc->count].sex);
//	printf("������绰:>");
//	scanf("%s", pc->data[pc->count].tele);
//	printf("�������ַ:>");
//	scanf("%s", pc->data[pc->count].addr);
//
//	pc->count++;
//	printf("���ӳɹ�\n");
//}


//��̬�汾
void AddContact(Contact * pc)
{
	assert(pc);
	CheckCapacity(pc);

	printf("����������:>");
	scanf("%s", pc->data[pc->count].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->count].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->count].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->count].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("���ӳɹ�\n");

}

void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n",  pc->data[i].name, 
												pc->data[i].age, 
												pc->data[i].sex, 
												pc->data[i].tele, 
												pc->data[i].addr);
	}
}


static int FindByName(Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (0==strcmp(pc -> data[i].name, name))
			return i;
	}
	return -1;
} 


void DelContact(Contact* pc)
{
	char name[MAX_NAME]={0};
	assert(pc);
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ�û����Ϣ����ɾ��\n");
		return;
	}
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);

	//����
	int pos=FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	//ɾ��
	int i = 0;
	for (i = pos; i < pc->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	//���ɾ���������һ�� ����Ҫ���� ֱ�������С��1
	pc->count--;
}


void SearchContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	//����
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	//��ӡ
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", pc->data[pos].name,
												pc->data[pos].age,
												pc->data[pos].sex,
												pc->data[pos].tele,
												pc->data[pos].addr);
}


void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	//����
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	printf("Ҫ�޸ĵ��˵���Ϣ�Ѿ����ҵ�����������ʼ�޸�\n");
	//�޸�
	printf("����������:>");
	scanf("%s", pc->data[pos].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pos].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pos].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pos].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pos].addr);

	printf("�޸ĳɹ�\n");
}


int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

//��������������
void SortContact(Contact* pc)
{
	assert(pc);
	qsort(pc->data,pc->count,sizeof(PeoInfo), cmp_peo_by_name);
	printf("����ɹ�\n");
}


void SaveContact(const Contact* pc)
{
	assert(pc);
	FILE* pfWrite = fopen("contact.txt", "wb");
	if (pfWrite == NULL)
	{
		perror("SaveContact");
		return;
	}

	//д�ļ� ��������ʽ
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		fwrite(pc->data+i, sizeof(PeoInfo), 1, pfWrite);
	}

	fclose(pfWrite);
	pfWrite = NULL;
}
