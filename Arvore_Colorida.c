#include <stdio.h>
#include <curses.h>

void trocar_cor(int t);
int t; //tamanho (simplificado)
int x, y; //coordenadas

void desenha_arvore(int t);

int main() {
    initscr();
    start_color();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);

    // cores
    init_pair(1, COLOR_RED, COLOR_BLACK);
    init_pair(2, COLOR_GREEN, COLOR_BLACK);
    init_pair(3, COLOR_YELLOW, COLOR_BLACK);
    init_pair(4, COLOR_BLUE, COLOR_BLACK);
    init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
    init_pair(6, COLOR_CYAN, COLOR_BLACK);
    init_pair(7, COLOR_WHITE, COLOR_BLACK);

    printw("QUAL TAMANHO DA ARVORE?\n");
    scanw("%i", &t);

    desenha_arvore(t);

    int ch;
    while ((ch = getch()) != 'q') { // sai do programa quando pressionado 'q'
        if (ch == 'c') {
            timeout(1000); // espera 1 segundo
            while (1) {
                trocar_cor(t); // troca a cor quando pressionado 'c'
                ch = getch();
                if (ch == 'q') {
                    break;
                }
            }
            timeout(-1); // desativa o timeout
        } else if (ch == KEY_UP) {
            if (t > 1) t--; // diminui o tamanho da árvore
            desenha_arvore(t);
        } else if (ch == KEY_DOWN) {
            t++; // aumenta o tamanho da árvore
            desenha_arvore(t);
        }
    }

    endwin();
    return 0;
}

void desenha_arvore(int t) {
    clear();
    printw("PRESSIONE c PARA A ARVORE PISCAR\n");
    printw("PRESSIONE q PARA SAIR\n\n");
    for (x = 0; x < t; x++) {
        for (y = 0; y < t - x - 1; y++) {
            printw(" ");
        }
        printw("*");
        for (y = 0; x > y; y++) {
            printw("I*");
        }
        printw("\n");
    }
    refresh();
}

void trocar_cor(int t) {
    static int color_index = 1;
    color_index = (color_index % 7) + 1; //muda as cores
    attron(COLOR_PAIR(color_index)); // iterar as cores

    clear();
    printw("PRESSIONE c PARA A ARVORE PISCAR\n");
    printw("PRESSIONE q PARA CONGELAR PARA MUDAR TAMANHO\n\n");

    // desenha a arvore colorida
    for (x = 0; x < t; x++) {
        for (y = 0; y < t - x - 1; y++) {
            printw(" ");
        }
        printw("*");
        for (y = 0; y < x; y++) {
            printw("I*");
        }
        printw("\n");
    }
    refresh();
}
