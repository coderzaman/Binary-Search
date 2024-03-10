#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool binarySearch(vector<int> list, int number)
{
    int left = 0;
    int right = list.size() - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (list[mid] == number)
        {
            return true;
        }
        else if (list[mid] > number)
        {

            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return false;
}

int main()
{
    vector<int> list = {44, 6, 23, 36, 77, 97, 43, 12, 5};
    sort(list.begin(), list.end());

    cout << "Please Insert Finding Number: ";
    int findN;
    cin >> findN;

    if (binarySearch(list, findN))
    {
        cout << findN << " is Found" << endl;
    }
    else
    {
        cout << findN << " is not Found" << endl;
    }
}