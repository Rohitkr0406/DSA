#include <iostream>
using namespace std;

int* occurrence(int arr[1000], int s)
{
    int* occ = new int[s] {0};             // Initialize with 0
    bool* processed = new bool[s] {false}; // Track if the element has already been processed
    
    for (int i = 0; i < s; i++)
    {
        if (processed[i]) // Skip if already processed
            continue;
        
        int count = 0;
        for (int j = 0; j < s; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        
        // Mark all indices with the same value as processed
        for (int j = 0; j < s; j++)
        {
            if (arr[i] == arr[j])
                processed[j] = true;
        }
        
        occ[i] = count; // Store count at the first occurrence
    }
    
    delete[] processed; // Clean up the dynamic memory
    return occ;
}

bool uniqueocc(int* occ, int s)
{
    for (int i = 0; i < s; i++)
    {
        if (occ[i] == 0) // Ignore uninitialized values
            continue;

        for (int j = i + 1; j < s; j++)
        {
            if (occ[j] == 0) // Ignore uninitialized values
                continue;

            if (occ[i] == occ[j])
                return false; // Duplicate found
        }
    }
    return true;
}

int main()
{
    int arr[1000];
    int s;
    cout << "Enter the size of the array: ";
    cin >> s;

    while (s < 1 || s > 1000)
    {
        cout << "Invalid size, please enter the correct size of array: ";
        cin >> s;
    }

    cout << "Enter the elements of the array\n";
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }

    int* occ = occurrence(arr, s);

    if (uniqueocc(occ, s))
        cout << "The array has unique occurrences" << endl;
    else
        cout << "The array doesn't have unique occurrences" << endl;

    delete[] occ; // Clean up dynamically allocated memory
    return 0;
}
