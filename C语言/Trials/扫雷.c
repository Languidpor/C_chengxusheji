#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

#define ROW 10  //行
#define COL 10  //列
#define NUM 10  //个数 

int map[ROW][COL];  //0 

//初始化函数 
void GameInit()
{
	int i,j; 
	//随机数的种子
	srand((unsigned int)time(NULL));
	 
	//给数组赋初值0
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			map[i][j]=0;
		}
	} 
	//布雷 -1表示雷 NUM个雷 
	int n=0;
	while(n<NUM)
	{
		//随机得到行和列 
		int r=rand()%ROW;
		int c=rand()%COL;
		
		if(map[r][c]==0)
		{
			map[r][c]=-1;
		    n++; 
		}
	} 
}

//绘制函数 打印二维数组中所有的元素
void GameDraw()
{
	int i,j;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("%3d",map[i][j]);
		}
		printf("\n");
	}
} 

int main()
{
	GameInit();
	GameDraw();
	
	return 0;
}
