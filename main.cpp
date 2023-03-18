#pragma
#include"statement.h"

int main()
{
	char cwd[256];
	_getcwd(cwd, 256);						//用于保存的图片的当前文件目录
	double EXETIME[11][10];					//用于存储绝对执行时间的矩阵
	int MaxSize = 10001;					//数组元素最大个数
	int j = 0;								//列
	double time;							//绝对执行时间
	for (MaxSize = 10001; MaxSize <= 100001; MaxSize += 10000)
	{
		//KeyType R[MaxSize], R1[MaxSize];
		int* R = (int *)malloc(sizeof(int) * MaxSize);
		int* R1 = (int *)malloc(sizeof(int) * MaxSize);					
		printf("随机产生%d个0-1000的整数,各种排序方法的比较\n", MaxSize - 1);
		int n = MaxSize - 1;
		printf("------------------------------------------------\n");
		printf("排序方法         用时         结果验证\n");
		printf("------------------------------------------------\n");
		initial(R, 0, n);				//产生R 
		copy(R, R1, n);					//R[0..n-1]→R1[0..n-1]

		int i = 0;
		time=InsertSortTime(R1, n);
		EXETIME[i][j] = time;

		copy(R, R1, n);					//R[0..n-1]→R1[0..n-1]
		time=BinInsertSortTime(R1, n);
		i++;
		EXETIME[i][j] = time;

		copy(R, R1, n);					//R[0..n-1]→R1[0..n-1]	
		time=ShellSortTime(R1, n);
		i++;
		EXETIME[i][j] = time;

		copy(R, R1, n);					//R[0..n-1]→R1[0..n-1]
		time = BubbleSortTime(R1, n);
		i++;
		EXETIME[i][j] = time;

		copy(R, R1, n);
		time = ImprovedBubbleSortTime(R1, n);
		i++;
		EXETIME[i][j] = time;

		copy(R, R1, n);					//R[0..n-1]→R1[0..n-1]
		time = QuickSortTime(R1, n);
		i++;
		EXETIME[i][j] = time;

		copy(R, R1, n);					//R[0..n-1]→R1[0..n-1]
		time = SelectSortTime(R1, n);
		i++;
		EXETIME[i][j] = time;

		copy1(R, R1, n);				//专门的拷贝函数，用于堆排序数组的复制   R[0..n-1]→R1[1..n]
		time = HeapSortTime(R1, n);
		i++;
		EXETIME[i][j] = time;

		copy(R, R1, n);					//R[0..n-1]→R1[0..n-1]
		time = MergeSortTime(R1, n);
		i++;
		EXETIME[i][j] = time;

		copy(R, R1, n);				//R[0..n-1]→R1[0..n-1]
		time = CountingSortTime(R1, n);
		i++;
		EXETIME[i][j] = time;

		copy(R, R1, n);				//R[0..n-1]→R1[0..n-1]
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
		Select(EXETIME,&system_key,cwd);			//对矩阵数据中的查看选择
	}
	return 1;
}