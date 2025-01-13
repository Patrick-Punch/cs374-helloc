#include <unistd.h>

int main(void)
{
    char x[128] = "Hello World!\n";
    char *y = "Hello World!\n";

    write(1, "Hello World!\n", 14);
    write(1, x, sizeof(x));
    write(1, y, 14);
}
