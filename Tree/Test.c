#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//树的度为N
//#define N 5
//
//struct TreeNode
//{
//	struct TreeNode* childrenA[N];//指针数组
//	int data;
//};

//不知道度是多少
//struct TreeNode
//{
//	int data;
//};

//孩子兄弟表示法
typedef int DataType;
struct Node
{
	struct Node* LeftChild; // 第一个孩子结点
	struct Node* RightBrother; // 指向其下一个兄弟结点
	DataType _data; // 结点中的数据域
};
