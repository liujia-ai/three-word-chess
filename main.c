#include<stdio.h>
#include"game.h"
void menu() {
    printf("********************\n");
    printf("****1.play 0.exit***\n");
    printf("********************\n");
}
void game() {
    char ret=0;
    char board[ROW][COL]={0};
    InitBoard(board,ROW,COL);
    Display(board,ROW,COL);
    while (1) {

        PlayerMove(board,ROW,COL);
        ret=Iswin(board,ROW,COL);
        if (ret!='C')
        {
            break;
        }
        Display(board,ROW,COL);
        ComputerMove(board,ROW,COL);
        Display(board,ROW,COL);
        ret=Iswin(board,ROW,COL);
        if (ret!='C')
        {
            break;
        }
    }
    if (ret=='*')
    {
        printf("玩家赢\n");
    }
    else if (ret=='#')
    {
        printf("电脑赢\n");
    }
    else
    {
        printf("平局\n");
    }
    Display(board,ROW,COL);
}
void game2() {
    char ret=0;
    char board[ROW][COL]={0};
    InitBoard(board,ROW,COL);
    Display(board,ROW,COL);
    while (1) {

        PlayerMove(board,ROW,COL);
        ret=Iswin(board,ROW,COL);
        if (ret!='C')
        {
            break;
        }
        Display(board,ROW,COL);
        PlayerMove2(board,ROW,COL);
        ret=Iswin(board,ROW,COL);
        if (ret!='C')
        {
            break;
        }
        Display(board,ROW,COL);
    }
    if (ret=='*')
    {
        printf("玩家1赢\n");
    }
    else if (ret=='#')
    {
        printf("玩家2赢\n");
    }
    else
    {
        printf("平局\n");
    }
    Display(board,ROW,COL);
}
int main() {
    system("chcp 65001 >nul");
    srand((unsigned int)time(NULL));
    int input=0;
    do {
        menu();
        printf("choose:>");
        scanf("%d",&input);
        switch (input) {
        case 1:
            game();
            break;
        case 2:
            game2();
            break;
        case 0:
            printf("exit\n");
            break;
        default:
            printf("error\n");
            break;
        }
    }
    while (input);
}
