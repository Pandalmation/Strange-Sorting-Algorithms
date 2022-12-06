#include<iostream>
#include<vector>
using namespace std;

// Function to sort the array
void variationStalinsort(vector<int> arr)
{
    int j = 0;

    while (true)
    {
        int moved = 0;

        for (int i = 0;
            i < (arr.size() - 1 - j); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                vector<int>::iterator index;
                int temp;
                index = arr.begin() + i + 1;
                temp = arr[i + 1];
                arr.erase(index);
                arr.insert(arr.begin() + moved, temp);
                moved++;
            }
        }

        j++;

        if (moved == 0)
        {
            break;
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

// Driver Code
int main()
{
    vector<int> arr = { 1, 3, 2, 5, 3, 8, 7, 9 };

    // Function call
    variationStalinsort(arr);
}