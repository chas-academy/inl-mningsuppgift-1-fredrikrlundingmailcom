#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);
   
    // Your code goes here

    int numbers[6] = {0};
    int number;
    int sum = 0;

    for (int i = 0; i < 100; i++)
    {
        number = (rand() % 6) + 1;

        sum += number;

        if (number == 1)
        {
            numbers[0]++;
        }
        else if (number == 2)
        {
            numbers[1]++;
        }
        else if (number == 3)
        {
            numbers[2]++;
        }
        else if (number == 4)
        {
            numbers[3]++;
        }
        else if (number == 5)
        {
            numbers[4]++;
        }
        else
        {
            numbers[5]++;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", numbers[i]);
    }

    printf("%d\n", sum);
    
    float average = (float)sum / 100;

    printf("%.1f\n", average);

    return 0;
}
