#pragma
#include"statement.h"

int main()
{
	char cwd[256];
	_getcwd(cwd, 256);						//���ڱ����ͼƬ�ĵ�ǰ�ļ�Ŀ¼
	double EXETIME[11][10];					//���ڴ洢����ִ��ʱ��ľ���
	int MaxSize = 10001;					//����Ԫ��������
	int j = 0;								//��
	double time;							//����ִ��ʱ��
	for (MaxSize = 10001; MaxSize <= 100001; MaxSize += 10000)
	{
		//KeyType R[MaxSize], R1[MaxSize];
		int* R = (int *)malloc(sizeof(int) * MaxSize);
		int* R1 = (int *)malloc(sizeof(int) * MaxSize);					
		printf("�������%d��0-1000������,�������򷽷��ıȽ�\n", MaxSize - 1);
		int n = MaxSize - 1;
		printf("------------------------------------------------\n");
		printf("���򷽷�         ��ʱ         �����֤\n");
		printf("------------------------------------------------\n");
		initial(R, 0, n);				//����R 
		copy(R, R1, n);					//R[0..n-1]��R1[0..n-1]

		int i = 0;
		time=InsertSortTime(R1, n);
		EXETIME[i][j] = time;

		copy(R, R1, n);					//R[0..n-1]��R1[0..n-1]
		time=BinInsertSortTime(R1, n);
		i++;
		EXETIME[i][j] = time;

		copy(R, R1, n);					//R[0..n-1]��R1[0..n-1]	
		time=ShellSortTime(R1, n);
		i++;
		EXETIME[i][j] = time;

		copy(R, R1, n);					//R[0..n-1]��R1[0..n-1]
		time = BubbleSortTime(R1, n);
		i++;
		EXETIME[i][j] = time;

		copy(R, R1, n);
		time = ImprovedBubbleSortTime(R1, n);
		i++;
		EXETIME[i][j] = time;

		copy(R, R1, n);					//R[0..n-1]��R1[0..n-1]
		time = QuickSortTime(R1, n);
		i++;
		EXETIME[i][j] = time;

		copy(R, R1, n);					//R[0..n-1]��R1[0..n-1]
		time = SelectSortTime(R1, n);
		i++;
		EXETIME[i][j] = time;

		copy1(R, R1, n);				//ר�ŵĿ������������ڶ���������ĸ���   R[0..n-1]��R1[1..n]
		time = HeapSortTime(R1, n);
		i++;
		EXETIME[i][j] = time;

		copy(R, R1, n);					//R[0..n-1]��R1[0..n-1]
		time = MergeSortTime(R1, n);
		i++;
		EXETIME[i][j] = time;

		copy(R, R1, n);				//R[0..n-1]��R1[0..n-1]
		time = CountingSortTime(R1, n);
		i++;
		EXETIME[i][j] = time;

		copy(R, R1, n);				//R[0..n-1]��R1[0..n-1]
		time =RadixSortTime(R1, n);
		i++;
		EXETIME[i][j] = time;

		printf("------------------------------------------------\n");
		free(R1);
		free(R);
		j++;
	}
	bool system_key = 1;
	while (system_key)
	{
		Select(EXETIME,&system_key,cwd);			//�Ծ��������еĲ鿴ѡ��
	}
	return 1;
}