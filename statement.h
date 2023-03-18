#undef UNICODE
#undef _UNICODE
#define _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>
#include <time.h>	
#include <malloc.h>
#include <direct.h>      //�ļ�Ŀ¼

/*EASYX*/
#include<graphics.h>	//һ��Ҫ��װEaxy-x���
#include<string.h>		//�ַ�����������ͷ�ļ�
#include<conio.h>		//getch()����ͷ�ļ�
#include<stdlib.h>		//itoa()����ͷ�ļ�
typedef int KeyType;

/*�ļ����������*/
#include<fstream>//�ļ����������


void swap(KeyType& x, KeyType& y);
void initial(int R[], int low, int high);				//����R[low..high�е������
void copy(int R[], int R1[], int n);					//�����������ݸ���
void copy1(int R[], int R1[], int n);					//���ڶ��������ݸ���
bool test(KeyType R[], int low, int high);				//��֤����������ȷ��

void InsertSort(KeyType R[], int n);
double InsertSortTime(KeyType R[], int n);				//��ֱ�Ӳ��������ʱ��

void BinInsertSort(KeyType R[], int n);
double BinInsertSortTime(KeyType R[], int n);				//���۰���������ʱ��

void ShellSort(KeyType R[], int n);						//ϣ�������㷨
double ShellSortTime(KeyType R[], int n);					//��ϣ�������㷨��ʱ��

void BubbleSort(KeyType R[], int n);
double BubbleSortTime(KeyType R[], int n);				//��ð�������㷨��ʱ��

void ImprovedBubbleSort(KeyType R[], int n);
double ImprovedBubbleSortTime(KeyType R[], int n);		//��Ľ�ð�������㷨��ʱ��

int partition(KeyType R[], int s, int t);				//һ�˻���
void QuickSort(KeyType R[], int s, int t);				//��R[s..t]��Ԫ�ؽ��п�������
double QuickSortTime(KeyType R[], int n);					//����������㷨��ʱ��

void SelectSort(KeyType R[], int n);
double SelectSortTime(KeyType R[], int n);				//���ѡ�������㷨��ʱ��

void sift(KeyType R[], int low, int high);
void HeapSort(KeyType R[], int n);
double HeapSortTime(KeyType R[], int n);					//��������㷨��ʱ��

void Merge(KeyType R[], int low, int mid, int high);	//�鲢R[low..high]
void MergePass(KeyType R[], int length, int n);			//�������������н���һ�˹鲢
void MergeSort(KeyType R[], int n); 					//��·�鲢����
double MergeSortTime(KeyType R[], int n);					//���·�鲢�����㷨��ʱ��

void CountingSort(KeyType R[],int n);
double CountingSortTime(KeyType R[], int n);				//����������㷨��ʱ��


int GetMax(KeyType R[], int n);
void RadixSort(KeyType R[], int n);
double RadixSortTime(KeyType R[], int n);					//����������㷨��ʱ��

void Picture(double Y[11],char *loc);//��ͼ
void DataView(double Y[][10], int choice);					//�鿴����ʱ������
void Visualize(double Y[][10], int choice,char *loc);		//���ӻ�����ʱ������
void SaveData(double EXETIME[][10], int row,int col);		//������������
void Select(double Y[][10],bool *system_key,char *loc);		//�˵�ѡ��























