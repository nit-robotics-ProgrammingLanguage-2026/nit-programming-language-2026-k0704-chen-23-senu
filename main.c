
#include <stdio.h>

int addToTotal(int value)
{
    // static変数は関数終了後も値を保持する
    static int total = 0;

    // 呼び出されるたびに値を加算する
    total += value;

    return total;
}

int main(void)
{
    int n;
    int result = 0;

    scanf("%d", &n);

    if (n < 1 || n > 10)
    {
        printf("NG");
        return 0;
    }

    for (int number = 1; number <= n; number++)
    {
        result = addToTotal(number * 2);
    }

    printf("%d", result);

    return 0;
}
