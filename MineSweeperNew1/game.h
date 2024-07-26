#ifndef __GAME_H__
#define __GAME_H__

//#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//设置显示棋盘的大小
#define ROW 5
#define COL 5
//存储棋盘的大小
#define ROWS ROW+2
#define COLS COL+2

//设置雷的个数
#define EASY_COUNT 5

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//布雷
void SetMine(char board[ROWS][COLS], int row, int col);
//排雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//判断周围是否有无雷区
void ExpandBlank(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);

#endif
