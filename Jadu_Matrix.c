#include <stdio.h>

int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    
    int arr[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int flag = 1;
    
    if (row != col) {
        flag = 0;
    }
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == j && arr[i][j] != 1) {
                flag = 0;
                break;
            }
            if (i + j == row - 1 && arr[i][j] != 1) {
                flag = 0;
                break;
            }
            if (i==j)
            {
                /* code */
            continue;            }
            
            if ( i + j != row - 1 && arr[i][j] != 0) {
                flag = 0;
                break;
            }
        }
    }
    
    if (flag == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
