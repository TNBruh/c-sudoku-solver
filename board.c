#include "headers/board.h"
#include <stdlib.h>
#include <stdio.h>

Board parse(char *inp) {
    
    int line_count = 0;
    int char_count = 0;
    char current_char = '*';
    Board board;
    
    // exit(EXIT_FAILURE);

    while (current_char != 0) {
        current_char = '*';
        char_count = 0;

        while (current_char != ' ' && current_char != 0) {
            current_char = inp[char_count+line_count * 10];
            // printf("%d %c /\n", current_char == 0, inp[char_count+line_count * 10]);
            char_count++;
            // if (char_count > 11) { exit(EXIT_FAILURE); }
        }
        // if (char_count != 10) { printf("AMOGUS %d %d %c", line_count, char_count, inp[char_count+line_count * 10]);exit(EXIT_FAILURE); }
        if (current_char == 0) { return board; }

        for (int i = 0; i < char_count-1; i++) {
            int num = inp[i+line_count * 10] - '0';
            board.board[line_count][i] = num;
        }

        line_count++;
    }
}

void print_board(const Board *b) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%d", b->board[i][j]);
        }
        printf("\n");
    }
}