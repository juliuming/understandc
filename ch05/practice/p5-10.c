#include<stdio.h>
int main(void) {
    int a[4][3];
    int b[3][4];
    int c[4][4];
    int temp = 0;
    puts("请输入a的元素:");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("a[%d][%d]:\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    puts("请输入b的元素:");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("a[%d][%d]:\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }


    for (int k = 0; k < 4; k++) {
    	
        for (int i = 0; i < 4; i++) {
        	temp=0;
            for (int j = 0; j < 3; j++) {
                temp += a[i][j] * a[j][k];

                printf("%d.  ", temp);
            }
            c[k][i]=temp;
        }

        
    }




    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d ", c[i][j]);
        }

        puts("\n");
    }

    return 0;
}