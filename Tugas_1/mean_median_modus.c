#include <stdio.h>
#include <stdlib.h>

float mean(int arr[], int n)
{
    float sum = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}


float median(int arr[], int n)
{
    int sorted[n];
    int i = 0;
    int j = 0;
    int k = 0;
    int temp = 0;
    for (i = 0; i < n; i++)
    {
        sorted[i] = arr[i];
    }
    // Inserting sort
    int key;
    for (i = 1; i < n; i++)
    {
        key = sorted[i];
        j = i - 1;
        while (j >= 0 && sorted[j] > key)
        {
            sorted[j + 1] = sorted[j];
            j--;
        }
        sorted[j + 1] = key;
    }
    float median;
    if (n % 2 == 0)
    {
        median = (sorted[n / 2 - 1] + sorted[n / 2]) / 2.0;
    }
    else
    {
        median = sorted[n / 2];
    }
    return median;
}

int modus(int arr[], int n)
{
    int modus = arr[0], maxCount = 0;
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        int count = 0;
        for (j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            modus = arr[i];
        }
    }
    return modus;
}

int main()
{
    int A[] = {82, 69, 82, 90, 75, 73, 82, 80, 65, 79, 74, 94, 89, 90, 76, 92, 79, 74, 75, 91, 90, 84, 81, 69, 89, 77, 90, 81, 86, 83};
    int nA = sizeof(A) / sizeof(A[0]);
    float meanA = mean(A, nA);
    float medianA = median(A, nA);
    int modusA = modus(A, nA);
    printf("Mean Kelas A: %.2f\n", meanA);
    printf("Median Kelas A: %.2f\n", medianA);
    printf("Modus Kelas A: %d\n", modusA);

    return 0;
}