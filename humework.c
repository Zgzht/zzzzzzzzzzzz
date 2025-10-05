/*#include <stdio.h>
int main()
{
    char c;
    printf("请输入一个大写字母：");
    scanf("%c", &c);
    // 大写字母转小写字母，ASCII 码差值为 32
    char l = c + 32;
    printf("对应的小写字母是：%c\n", l);
    return 0;
}*/

/*#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, dis, x1, x2;
    printf("请输入 a, b, c 的值：");
    scanf("%f %f %f", &a, &b, &c);
    dis = b * b - 4 * a * c;
    if (dis > 0) {
        // 两个不同的实根
        x1 = (-b + sqrt(dis)) / (2 * a);
        x2 = (-b - sqrt(dis)) / (2 * a);
        printf("两个不同的实根：x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (dis == 0) {
        // 两个相同的实根
        x1 = x2 = -b / (2 * a);
        printf("两个相同的实根：x1 = x2 = %.2f\n", x1);
    } else {
        printf("无实数解\n");
    }
    return 0;
}*/

/*#include <stdio.h>
#include <math.h>
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int c=0;
    printf("100 到 200 之间的素数有：\n");
    for (int i = 100; i <= 200; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            c++;
            if (c%5==0){
                printf("\n");
            }

        }
    }
    printf("\n");
    return 0;
}*/

/*#include <stdio.h>
int main() {
    int matrix[3][4], row=0, col=0, max;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    max = matrix[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                row = i;
                col = j;
            }
        }
    }
    printf("最大值是：%d，位于第 %d 行，第 %d 列\n", max, row + 1, col + 1);
    return 0;
}*/

/*#include <stdio.h>
int fun(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fun(n - 1);
    }
}
int main() {
    int n;
    printf("请输入一个整数 n：");
    scanf("%d", &n);
    printf("%d! = %d\n", n, fun(n));
    return 0;
}*/

/*#include <stdio.h>
int main() {
    int arr[10];
    printf("请输入 10 个整数：\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 10-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    printf("排序后的数组：\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}*/

/*#include <stdio.h>     //用指针实现
void sort(int *a, int *b, int *c) {
    int temp;
    if (*a < *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a < *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b < *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}
int main() {
    int a, b, c;
    printf("请输入三个整数 a, b, c：");
    scanf("%d %d %d", &a, &b, &c);
    sort(&a, &b, &c);
    printf("从大到小排序后：%d %d %d\n", a, b, c);
    return 0;
}*/

#include <stdio.h>
int main()
{
    int arr[10];
    printf("请输入 10 个整数：\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *p = arr;
    printf("数组的元素：\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");
    return 0;
}