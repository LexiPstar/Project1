#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	//����ָ��
//	int* arr1[10];
//	char* ch[5];
//
//	//ָ������
//	int arr2[10];
//	int (*pa) = &arr2;
//
//	char* arr3[6];
//	char* (*pa)[6] = &arr3;
//
//	return 0;
//}

//int test(const char* str)
//{
//	printf("test()\n");
//	return 0;
//}
//
//int main()
//{
//	//����ָ��
//	printf("%p\n", test);
//	printf("%p\n", &test);
//
//	int (*pf)(const char*) = test;
//	//pfָ��������
//	(*pf)("abc");
//	return 0;
//}


//typedef void(*pf_t)(int);//��void(*)(int)����������Ϊpf_t
//
//int main()
//{
//	( *( void (*)() )0 )();
//	// 0 int����ǿ��ת�� void������ַ
//	// *����0��ַ�ĺ���
//	void(*signal(int, void(*)(int)))(int);
//	pf_t signal(int, pf_t);
//	return 0;
//}


//����ָ��>������Ӧ��
// 
//void menu()
//{
//	printf("********************\n");
//	printf("*** 1.add  2.sub ***\n");
//	printf("*** 3.mul  4.div ***\n");
//	printf("*****  0.exit ******\n");
//	printf("********************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("������2��������:->");
//	scanf("%d %d", &x, &y);
//	int ret = pf(x, y);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	do {
//		menu();
//		printf("��ѡ��:->");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//void menu()
//{
//	printf("********************\n");
//	printf("*** 1.add  2.sub ***\n");
//	printf("*** 3.mul  4.div ***\n");
//	printf("*****  0.exit ******\n");
//	printf("********************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int (*pfarr[5])(int, int) = { 0,add,sub,mul,div };
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int ret = 0;
//	do {
//		menu();
//		printf("��ѡ��:->");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("������2��������:->");
//			scanf("%d %d", &x, &y);
//			int ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else 
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}


//int main()
//{
//	//����ָ������
//	int (*pfArr[5])(int, int) = { 0,'add','sub','mul','div'};
//	
//	//ָ�򡾺���ָ�����顿��ָ��
//	int(* (*ppfArr)[5])(int,int) = &pfArr;
//
//	return 0;
//}



//ð������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//��������Ϊ����
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//����
//void qsort(void* base,//����������ʼλ��
//	size_t num,//�������ݸ���
//	size_t width,//���ݴ�С���ֽڣ�
//	int(*compare)(const void* elem1, const void* elem2))



//int cmp(const void* elem1, const void* elem2)//void* ָ���ǽ����������͵ĵ�ַ�����������������
//{
//	return *(int*)elem1 - *(int*)elem2;
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_name(const void* elem1, const void* elem2)
//{
//	return strcmp(((struct Stu*)elem1)->name,((struct Stu*)elem2)->name);
//}
//
//void test()
//{
//	struct Stu s[] = { {"zhangsan",18},{"lisi",20},{"wangwu",60} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	test();
//	return 0;
//}

void Swap(char* buf1, char* buf2, int width) 
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

int cmp(const void* elem1, const void* elem2)//void* ָ���ǽ����������͵ĵ�ַ�����������������
{
	return *(int*)elem1 - *(int*)elem2;
}

void bubble_sort(void* base,int sz,int width,int (*cmp)(const void* elem1, const void* elem2))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//��������Ϊ����
		//һ��ð������
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

void test()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz,sizeof(arr[0]),cmp);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	test();
	return 0;
}