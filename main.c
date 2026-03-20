#include <stdio.h>

int conta_pares(int mat[][100], int n) {
    /* TODO: Implemente esta função.
     * Para verificar se um número é par, use a expressão (x % 2 == 0) */
}

int main() {
    int n;
    scanf("%d", &n);

    int mat[100][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            scanf("%d", &mat[i][j]);

    printf("%d\n", conta_pares(mat, n));
    return 0;
}
