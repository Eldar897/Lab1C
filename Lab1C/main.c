#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    printf("Привіт, світ!\n");
    return 0;
}