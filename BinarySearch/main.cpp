#include <iostream>

int BinarySearch(int list[], int item, int len)
{
    int low = 0;
    int high = len - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int guess = list[mid];

        if (guess == item)
        {
            return mid;
        }
        else if (guess < item)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return 0;
}

int main()
{
    int list[] = {1, 3, 5, 7, 9};
    int len = sizeof(list) / sizeof(list[0]);
    int item = 3;

    int result = BinarySearch(list, item, len);

    if (result == 0)
    {
        std::cout << "Incorrect input." << std::endl;
  
    }
    else
    {

        std::cout << result << std::endl;
    }
    return 0;
}