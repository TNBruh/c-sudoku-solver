#include <stdio.h>

#include "headers/main.h"
#include "headers/utils.h"
#include "headers/board.h"


void main() {
    char *inp = read_file("sample.txt");
    // printf("\n");
    Board board = parse(inp);
    print_board(&board);

}