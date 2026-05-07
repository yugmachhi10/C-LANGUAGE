#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int chars=0, spaces=0, tabs=0, lines=0;

    fp = fopen("test.txt", "r");
if (fp == NULL) {
        printf("The file is not opened.");
    }

    while((ch = fgetc(fp)) != EOF) {
        chars++;
        if(ch == ' ') spaces++;
        if(ch == '\t') tabs++;
        if(ch == '\n') lines++;
    }

    fclose(fp);

    printf("Characters = %d\n", chars);
    printf("Spaces = %d\n", spaces);
    printf("Tabs = %d\n", tabs);
    printf("Newlines = %d\n", lines);

    return 0;
}
