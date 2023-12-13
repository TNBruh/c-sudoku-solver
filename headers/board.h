#ifndef BOARD_H
#define BOARD_H
typedef struct {
    int board[9][9];
} Board;
Board parse(char *inp);
#endif