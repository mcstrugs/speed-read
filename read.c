#include <ncurses.h>

int main(int argc, char *argv[])
{
    if (argc == 1) {
        printf("[error] not enough arguments\n");
        return 1;
    }
    char *t;

    initscr();
    for(int i = 1; i < argc; i++)
    {
        t = argv[i];
        while(*t)
        {
            addch(*t);
            t++;
            refresh();
            napms(100);
        }
        addch(' ');
        napms(100);
    }
    getch();


    endwin();
    return 0;
}
