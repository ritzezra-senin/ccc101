#include "stdio.h"
#include "windows.h"

void gotoxy (int x, int y) {
    COORD c = {(SHORT)x, (SHORT)y};
    SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), c);
}
int main () {
    char name [] = "RITZ EZRA";
    int x, y;
    system ("cls");

    for (x = 0; x <= 123; x++) {
        system ("cls");
        gotoxy (x, 0);
        printf ("%s", name);
        Sleep (10);
    }
    for (y = 0; y <= 34; y++) {
        system ("cls");
        gotoxy (123, y);
        printf ("%s", name);
        Sleep (10);
    }
    for (x = 123; x >= 0; x--) {
        system ("cls");
        gotoxy (x, 34);
        printf ("%s", name);
        Sleep (10);
    }
    for (y = 34; y >= 0; y--) {
        system ("cls");
        gotoxy (0, y);
        printf ("%s", name);
        Sleep (10);
    }
    gotoxy (0, 34);
    getchar ();

    return 0;
}