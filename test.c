#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	//数组指针
//	int* arr1[10];
//	char* ch[5];
//
//	//指针数组
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
//	//函数指针
//	printf("%p\n", test);
//	printf("%p\n", &test);
//
//	int (*pf)(const char*) = test;
//	//pf指向函数参数
//	(*pf)("abc");
//	return 0;
//}


//typedef void(*pf_t)(int);//把void(*)(int)类型重命名为pf_t
//
//int main()
//{
//	( *( void (*)() )0 )();
//	// 0 int类型强制转换 void函数地址
//	// *调用0地址的函数
//	void(*signal(int, void(*)(int)))(int);
//	pf_t signal(int, pf_t);
//	return 0;
//}


//函数指针>计算器应用
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
//	printf("请输入2个操作数:->");
//	scanf("%d %d", &x, &y);
//	int ret = pf(x, y);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	do {
//		menu();
//		printf("请选择:->");
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
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
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
//		printf("请选择:->");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入2个操作数:->");
//			scanf("%d %d", &x, &y);
//			int ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else 
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}


//int main()
//{
//	//函数指针数组
//	int (*pfArr[5])(int, int) = { 0,'add','sub','mul','div'};
//	
//	//指向【函数指针数组】的指针
//	int(* (*ppfArr)[5])(int,int) = &pfArr;
//
//	return 0;
//}



//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设数组为有序
//		//一趟冒泡排序
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


//快排
//void qsort(void* base,//排序数据起始位置
//	size_t num,//排序数据个数
//	size_t width,//数据大小（字节）
//	int(*compare)(const void* elem1, const void* elem2))



//int cmp(const void* elem1, const void* elem2)//void* 指针是接收任意类型的地址，但不能随意解引用
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

int cmp(const void* elem1, const void* elem2)//void* 指针是接收任意类型的地址，但不能随意解引用
{
	return *(int*)elem1 - *(int*)elem2;
}

void bubble_sort(void* base,int sz,int width,int (*cmp)(const void* elem1, const void* elem2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设数组为有序
		//一趟冒泡排序
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