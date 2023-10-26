//1.1 : WAP to get & print 1D array of N elements
#include <stdio.h>

int main()
{
    int N;

    // Get the number of elements from the user
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // Declare an array of size N
    int arr[N];

    // Input elements
    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Print the elements
    printf("The elements in the array are: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*

Output :

Enter the number of elements: 5
Enter 5 elements:
1
2
3
4
5
The elements in the array are: 1 2 3 4 5

*/

// 1.2 : WAP to find length of 1D array.

#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, '\0'}; // Assume \0 marks the end of the array
    int length = 0;

    // Iterate through the array until '\0' is encountered
    while (arr[length] != '\0') {
        length++;
    }

    printf("The length of the array is: %d\n", length);

    return 0;
}

/*

Output :

The length of the array is: 9

*/


//1.3 : WAP to find average of 1D array.

#include <stdio.h>

int main() {
    int length;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &length);

    if (length <= 0) {
        printf("Invalid array size. Please enter a positive number.\n");
        return 1; // Exit the program with an error code
    }

    int arr[length];
    int sum = 0;

    for (int i = 0; i < length; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float average = (float)sum / length;

    printf("Array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nAverage: %.2f\n", average);

    return 0;
}

/*

Output :

Enter the number of elements in the array: 6
Enter element 1: 1
Enter element 2: 2
Enter element 3: 3
Enter element 4: 4
Enter element 5: 5
Enter element 6: 6
Array: 1 2 3 4 5 6
Average: 3.50

*/

//1.4 : WAP to find peform addition of 1D array & store it into another.

#include <stdio.h>

int main() {
    int n;

    // Get the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare arrays
    int inputArray[n];
    int resultArray[n];

    // Input elements into the inputArray
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &inputArray[i]);
    }

    // Perform addition and store the result in the resultArray
    for (int i = 0; i < n; i++) {
        resultArray[i] = inputArray[i] + 10; // You can change the number to add as needed
    }

    // Display the original and result arrays
    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", inputArray[i]);
    }

    printf("\nResult Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", resultArray[i]);
    }

    return 0;
}

/*

Output :

Enter the number of elements: 5
Enter 5 elements:
1
2
3
4
5
Original Array: 1 2 3 4 5
Result Array: 11 12 13 14 15

*/

//1.5 : WAP to find peform merging of 1D array & store it into another.

#include <stdio.h>

int main() {
    int n1, n2;

    // Get the number of elements in the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    // Get the number of elements in the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    // Declare arrays for the first and second arrays
    int arr1[n1];
    int arr2[n2];

    // Input elements for the first array
    printf("Enter %d elements for the first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input elements for the second array
    printf("Enter %d elements for the second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Calculate the size of the merged array
    int mergedSize = n1 + n2;

    // Declare an array for the merged result
    int mergedArray[mergedSize];

    // Merge the two arrays
    for (int i = 0; i < n1; i++) {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        mergedArray[n1 + i] = arr2[i];
    }

    // Display the merged array
    printf("Merged Array: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArray[i]);
    }

    return 0;
}

/*

Output :

Enter the number of elements in the first array: 5
Enter the number of elements in the second array: 5
Enter 5 elements for the first array:
1
2
3
4
5
Enter 5 elements for the second array:
6
7
8
9
10
Merged Array: 1 2 3 4 5 6 7 8 9 10

*/