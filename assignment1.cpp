/*Array A  [ 95 	125    165	13	1          6      ]
Array B [ 5        18      23          14	21       23  ]
*/

#include <iostream>
#include <vector>
using namespace std;

// bubble sort implementation
// ascending order
void bubbleSortAscending(vector<int> &arr, int n)
{
    int comparisons, swap = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            comparisons++;
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap++;
            }
        }
    }
    cout << "Comparisons: " << comparisons << endl;
    cout << "Swaps: " << swap << endl;
}

// bubble sort implementation
// descending order
void bubbleSortDescending(vector<int> &arr, int n)
{
    int comparisons, swap = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            comparisons++;
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap++;
            }
        }
    }
    cout << "Comparisons: " << comparisons << endl;
    cout << "Swaps: " << swap << endl;
}

// Selection sort implementation
// ascending order
void selectionSortAscending(vector<int> &arr, int n)
{
    int comparisons, swap = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            comparisons++;
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
        swap++;
    }
    cout << "Comparisons: " << comparisons << endl;
    cout << "Swaps: " << swap << endl;
}

// Selection sort implementation
// descending order
void selectionSortDescending(vector<int> &arr, int n)
{
    int comparison, swap = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            comparison++;
            if (arr[j] > arr[index])
            {
                index = j;
            }
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
            swap++;
        }
    }
    cout << "Comparisons: " << comparison << endl;
    cout << "Swaps: " << swap << endl;
}

// Insertion sort implementation
// ascending order
void insertionSortAscending(vector<int> &arr, int n)
{
    int comparisons, swap = 0;
    for (int i = 1; i < n; i++)
    {
        int index = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > index)
        {
            comparisons++;
            arr[j + 1] = arr[j];
            j = j - 1;
            swap++;
        }
        arr[j + 1] = index;
    }
    cout << "Comparisons: " << comparisons << endl;
    cout << "Swaps: " << swap << endl;
}

// Insertion sort implementation
// descending order
void insertionSortDescending(vector<int> &arr, int n)
{
    int comparisons, swap = 0;
    for (int i = 1; i < n; i++)
    {
        int index = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < index)
        {
            comparisons++;
            arr[j + 1] = arr[j];
            j = j - 1;
            swap++;
        }
        arr[j + 1] = index;
    }
    cout << "Comparisons: " << comparisons << endl;
    cout << "Swaps: " << swap << endl;
}
int main()
{

    cout << "Name: Md Jubayer Islam" << endl;
    cout << "Matric No: A23MJ4007" << endl;

    cout << "**********Bubble Sort**********" << endl;
    vector<int> A = {95, 125, 165, 13, 1, 6};
    vector<int> B = {5, 18, 23, 14, 21, 23};

    // sorting array A in ascending order
    bubbleSortAscending(A, A.size());
    // printing array A
    cout << "Array A: ";
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    // sorting array B in descending order
    bubbleSortDescending(B, B.size());

    // printing array B
    cout << "Array B: ";
    for (int i = 0; i < B.size(); i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;

    cout << "**********Selection Sort**********" << endl;
    // sorting array A in ascending order
    selectionSortAscending(A, A.size());

    // printing array A
    cout << "Array A: ";
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    // sorting array B in descending order
    selectionSortDescending(B, B.size());
    // printing array B
    cout << "Array B: ";
    for (int i = 0; i < B.size(); i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;

    cout << "**********Insertion Sort**********" << endl;
    // sorting array A in ascending order
    insertionSortAscending(A, A.size());

    // printing array A
    cout << "Array A: ";
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    // sorting array B in descending order
    insertionSortDescending(B, B.size());
    // printing array B
    cout << "Array B: ";
    for (int i = 0; i < B.size(); i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}