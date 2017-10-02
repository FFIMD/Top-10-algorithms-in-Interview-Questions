#include<bits/stdc++.h>
//#include <iostream>
//#include <cstring>

using namespace std;

int palPrint (char *arr, int begin = -1, int end = -1);

int main()
{
    char word[100];
    cin >> word;
    cout << endl;

    int wordlen = strlen(word);

    palPrint(word);

    //if (((wordlen) % 2) != 0)
    {
        int mid = (int)((double)wordlen / 2.0);
        int origMid = mid;
        int _i = mid + 1;

        if (word[mid] == word[mid - 1])
        palPrint(word, mid - 1, mid);

        while (mid < wordlen - 1)
        {
            for (int i = mid - 1; _i < wordlen; i--, _i++)
            {
                cout << i << " " << _i << endl;
                if (word[i] == word[_i])
                    palPrint(word, i, _i);
                else
                    if (word[mid] == word[mid + 1])
                        palPrint(word, mid, mid + 1);
                    else
                        break;
            }
            mid++;
        }

        mid = origMid - 1;
        _i = mid + 1;
        while (mid > 0)
        {
            for (int i = mid - 1; i >= 0; i--, _i++)
            {
                cout << i << " " << _i << endl;
                if (word[i] == word[_i])
                    palPrint(word, i, _i);
                else
                    if (word[mid] == word[mid - 1])
                        palPrint(word, mid - 1, mid);
                    else
                        break;
            }
            mid--;
        }

        cout << endl;
    }

    return 0;
}

int palPrint (char *arr, int begin, int end)
{
    int wordlen = strlen(arr);
    if (begin == -1)
    for (int i = 0; i < wordlen; i++)
    {
        if (wordlen != end)
        cout << arr[i] << " ";
    }
    else
        if ((begin > -1) && (end > begin) && (end < wordlen) && (begin < wordlen))
        {
            for (int i = 0; i < begin; i++)
                cout << arr[i] << " ";

            for (int i = begin; i < end; i++)
                cout << arr[i];

            for (int i = end; i < wordlen; i++)
                cout << arr[i] << " ";
        }
        else
        {
            cerr << endl << "Incorect argue in palPrint" << endl;
            return -1;
        }

    cout << endl << endl;
}