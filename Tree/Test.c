#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//���Ķ�ΪN
//#define N 5
//
//struct TreeNode
//{
//	struct TreeNode* childrenA[N];//ָ������
//	int data;
//};

//��֪�����Ƕ���
//struct TreeNode
//{
//	int data;
//};

//�����ֵܱ�ʾ��
typedef int DataType;
struct Node
{
	struct Node* LeftChild; // ��һ�����ӽ��
	struct Node* RightBrother; // ָ������һ���ֵܽ��
	DataType _data; // ����е�������
};
