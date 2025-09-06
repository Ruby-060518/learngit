#include <stdio.h>

int main()
{
    int number;
    int count = 0;
    int sum = 0;

    scanf("%d", &number);
    while (number != -1) {
        sum += number;
        count++;
        scanf("%d", &number); // 修正：传递 &number 而不是 number
    }
    printf("%f\n", 1.0 * sum / count);

    return 0;
}