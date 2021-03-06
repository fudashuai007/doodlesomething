/*-----------------------------------------------------------------------------------
	* FileName:sort.h
	* date:10-22-2014
	* author:doodlesomething@163.com
	* decription:排序
---------------------------------------------------------------------------------------*/



#define MAXSIZE 20
#define N 8

//关键词类型
typedef int KeyType;

typedef struct {
	KeyType key;
}ElemType;

typedef struct {
	ElemType r[MAXSIZE + 1];	//r[0]闲置或是用作哨兵
	int length;	//顺序表长度
}SqList;


//类冒泡排序
void BubbleSort_1(SqList *L);


//冒泡排序
void BubbleSort_2(SqList *L);

//冒泡排序优化
void BubbleSort_3(SqList *L);


//快速排序
void QuickSort(SqList *L);


