#ifndef __GAME_H__
#define __GAME_H__

//#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//������ʾ���̵Ĵ�С
#define ROW 5
#define COL 5
//�洢���̵Ĵ�С
#define ROWS ROW+2
#define COLS COL+2

//�����׵ĸ���
#define EASY_COUNT 5

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//����
void SetMine(char board[ROWS][COLS], int row, int col);
//����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//�ж���Χ�Ƿ���������
void ExpandBlank(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);

#endif
