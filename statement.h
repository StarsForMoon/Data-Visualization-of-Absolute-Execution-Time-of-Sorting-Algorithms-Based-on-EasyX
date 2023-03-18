#undef UNICODE
#undef _UNICODE
#define _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>
#include <time.h>	
#include <malloc.h>
#include <direct.h>      //文件目录

/*EASYX*/
#include<graphics.h>	//一定要安装Eaxy-x插件
#include<string.h>		//字符串操作函数头文件
#include<conio.h>		//getch()函数头文件
#include<stdlib.h>		//itoa()函数头文件
typedef int KeyType;

/*文件输入输出流*/
#include<fstream>//文件输入输出流


void swap(KeyType& x, KeyType& y);
void initial(int R[], int low, int high);				//产生R[low..high中的随机数
void copy(int R[], int R1[], int n);					//用于排序数据复制
void copy1(int R[], int R1[], int n);					//用于堆排序数据复制
bool test(KeyType R[], int low, int high);				//验证排序结果的正确性

void InsertSort(KeyType R[], int n);
double InsertSortTime(KeyType R[], int n);				//求直接插入排序的时间

void BinInsertSort(KeyType R[], int n);
double BinInsertSortTime(KeyType R[], int n);				//求折半插入排序的时间

void ShellSort(KeyType R[], int n);						//希尔排序算法
double ShellSortTime(KeyType R[], int n);					//求希尔排序算法的时间

void BubbleSort(KeyType R[], int n);
double BubbleSortTime(KeyType R[], int n);				//求冒泡排序算法的时间

void ImprovedBubbleSort(KeyType R[], int n);
double ImprovedBubbleSortTime(KeyType R[], int n);		//求改进冒泡排序算法的时间

int partition(KeyType R[], int s, int t);				//一趟划分
void QuickSort(KeyType R[], int s, int t);				//对R[s..t]的元素进行快速排序
double QuickSortTime(KeyType R[], int n);					//求快速排序算法的时间

void SelectSort(KeyType R[], int n);
double SelectSortTime(KeyType R[], int n);				//求简单选择排序算法的时间

void sift(KeyType R[], int low, int high);
void HeapSort(KeyType R[], int n);
double HeapSortTime(KeyType R[], int n);					//求堆排序算法的时间

void Merge(KeyType R[], int low, int mid, int high);	//归并R[low..high]
void MergePass(KeyType R[], int length, int n);			//对整个排序序列进行一趟归并
void MergeSort(KeyType R[], int n); 					//二路归并排序
double MergeSortTime(KeyType R[], int n);					//求二路归并排序算法的时间

void CountingSort(KeyType R[],int n);
double CountingSortTime(KeyType R[], int n);				//求计数排序算法的时间


int GetMax(KeyType R[], int n);
void RadixSort(KeyType R[], int n);
double RadixSortTime(KeyType R[], int n);					//求基数排序算法的时间

void Picture(double Y[11],char *loc);//画图
void DataView(double Y[][10], int choice);					//查看排序时间数据
void Visualize(double Y[][10], int choice,char *loc);		//可视化排序时间数据
void SaveData(double EXETIME[][10], int row,int col);		//保存所有数据
void Select(double Y[][10],bool *system_key,char *loc);		//菜单选择
