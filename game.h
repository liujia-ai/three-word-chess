//
// Created by Lenovo on 2026/5/14.
//

#ifndef GAME_GAME_H
#define GAME_GAME_H

#endif //GAME_GAME_H
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
void InitBoard(char board[ROW][COL],int row,int col);
void Display(char board[ROW][COL],int row,int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void PlayerMove2(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL],int row,int col);
char Iswin(char board[ROW][COL],int row,int col);