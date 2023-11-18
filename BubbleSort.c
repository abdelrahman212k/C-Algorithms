#include <stdio.h>

void BubbleSort(int arr[], int size);

int main(void)
{
    int array[6] = {51, 46, 12, 98, 1, 36};
    BubbleSort(array, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%i\t", array[i]);
    }
}

void BubbleSort(int arr[], int size)
{
    int Temp, SortFlag;
    for (int Counter = 0; Counter < (size - 1); Counter++)
    {
        SortFlag = 1;
        for (int Iterator = (size-1); Iterator > Counter; Iterator--)
        {
            if(arr[Iterator] < arr[Iterator-1])
            {
                Temp              = arr[Iterator];
                arr[Iterator]     = arr[Iterator - 1];
                arr[Iterator - 1] = Temp;
                SortFlag = 0;
            }
        }
        if (SortFlag == 1)
        {
            break;
        }
    }
}