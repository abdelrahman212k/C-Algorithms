#include <stdio.h>

void InsertionSort(int arr[], int size);

int main(void)
{
    int array[6] ={51, 46, 12, 98, 1, 36};
    InsertionSort(array, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%i\t", array[i]);
    }
}

void InsertionSort(int arr[], int size)
{
    int Temp, Counter, Iterator;
    for (Counter = 1; Counter < size; Counter++)
    {
        Temp = arr[Counter];
        for (Iterator=Counter-1; (Iterator>=0) && (arr[Iterator] > Temp); Iterator--)
        {
            arr[Iterator + 1] = arr[Iterator];
        }
        arr[Iterator+1] = Temp;
    }
}