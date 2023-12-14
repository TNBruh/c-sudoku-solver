#include <stdio.h>

#include "headers/main.h"
#include "headers/utils.h"
#include "headers/board.h"


void main() {
    char *inp = read_file("sample.txt");


    printf("%c %x %d", inp[90], inp[90], inp[90] == 0);
    printf("\n");
    Board board = parse(inp);
    // print_board(&board);

}