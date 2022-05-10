#include <stdio.h>

void printspace(int n) {
    for(int i = 0; i < n; i++) printf(" ");
}

void printstar(int n) {
    for(int i = 0; i < n; i++) printf("*");
}


int main() {
    int n; scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
    printspace(n - i);
    printf("*");
    if (i > 1 && i < n) {
        printspace(i * 2 - 3);
        printf("*");
    }
    else if (i == n) printstar(i * 2 - 2);
    printf("\n");
    }
}