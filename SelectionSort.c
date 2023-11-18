#include<stdio.h>

void SelectionSort(int arr[], int size);

int main(void)
{
    int array[6] = {51, 46, 12, 98, 1, 36};
    SelectionSort(array, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%i\t", array[i]);
    }
}

void SelectionSort(int arr[], int size)
{
    int MinIndex, Temp;
    for (int Counter = 0; Counter < (size - 1); Counter++)
    {
        MinIndex = Counter;
        for (int Iterator = (Counter+1); Iterator < size; Iterator++)
        {
            if(arr[Iterator] < arr[MinIndex])
            {
                MinIndex = Iterator;
            }
        }
        if (MinIndex != Counter)
        {
            Temp          = arr[MinIndex];
            arr[MinIndex] = arr[Counter];
            arr[Counter]  = Temp;
        }
    }
}