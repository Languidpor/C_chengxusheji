#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

#define ROW 10  //��
#define COL 10  //��
#define NUM 10  //���� 

int map[ROW][COL];  //0 

//��ʼ������ 
void GameInit()
{
	int i,j; 
	//�����������
	srand((unsigned int)time(NULL));
	 
	//�����鸳��ֵ0
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			map[i][j]=0;
		}
	} 
	//���� -1��ʾ�� NUM���� 
	int n=0;
	while(n<NUM)
	{
		//����õ��к��� 
		int r=rand()%ROW;
		int c=rand()%COL;
		
		if(map[r][c]==0)
		{
			map[r][c]=-1;
		    n++; 
		}
	} 
}

//���ƺ��� ��ӡ��ά���������е�Ԫ��
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
