#include <unistd.h>
#include <stdio.h>

void foo(int *x, int *y) // x = &a, y = &b
{
    (*x)++;
    (*y)++;
}
int main(void)
{
    char x[128] = "Hello World!\n";
    char *y = "Hello World!\n";

    write(1, "Hello World!\n", 14);
    write(1, x, sizeof(x));
    write(1, y, 14);


    int a = 12, b = 24;
    foo(&a, &b);
    printf("%d %d\n", a, b);
}

