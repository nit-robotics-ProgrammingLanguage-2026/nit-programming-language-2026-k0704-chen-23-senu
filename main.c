
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
    int inputNumber;
    int result = 0;

    scanf("%d", &inputNumber);

    if (inputNumber < 1 || inputNumber > 10)
    {
        printf("NG");
        return 0;
    }

    for (int number = 1; number <= inputNumber; number++)
    {
        result = addToTotal(number * 2);
    }

    printf("%d", result);

    return 0;
}
