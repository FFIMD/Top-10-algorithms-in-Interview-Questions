#include <bits/stdc++.h>
//#include <iostream>
//#include <cstring>

using namespace std;

int palPrint(char *arr, int begin = -1, int end = -1);

int main()
{
    char word[100];
    cin >> word;
    cout << endl;

    int wordlen = strlen(word);

    palPrint(word);

    int mid = (int)((double)wordlen / 2.0);
    int center = mid;
    int _i = 0;
    int i = 0;
    bool con = false;

    //if ((wordlen % 2) == 0)
        if (word[mid] == word[mid - 1])
            palPrint(word, mid - 1, mid);

    while (mid < wordlen - 1)
    {
        //for (int i = mid - 1; _i < wordlen; i--, _i++)
        i = mid - 1;
        _i = mid + 1;
        con = true;
        while ((i >= 0) && (_i <= wordlen - 1) && con)
        {
            cout << i << " " << _i << endl;
            if ((word[mid] == word[mid + 1]) && con)
            {
                palPrint(word, mid, mid + 1);
                con = false;
            }
            if (word[i] == word[_i])
            palPrint(word, i, _i);
            else
                break;
        i--;
        _i++;
        }
        mid++;
    }

    //if ((wordlen % 2) == 0)
    //    mid = center - 1;
    //else
    mid = center - 1;
    _i = 0;
    i = 0;
    while (mid > 0)
    {
        //for (int i = mid - 1; _i < wordlen; i--, _i++)
        i = mid - 1;
        _i = mid + 1;
        con = true;
        while ((i >= 0) && (_i <= wordlen - 1))
        {
            cout << i << " " << _i << endl;
            if ((word[mid - 1] == word[mid]) && con)
            {
                palPrint(word, mid - 1, mid);
                con = false;
            }
            if (word[i] == word[_i])
            palPrint(word, i, _i);
            else
                break;
        i--;
        _i++;
        }
        mid--;
    }

    if ((wordlen % 2) == 0)
    {
        _i = wordlen - 1;
        i = 0;
        bool palindrom = true;
        while (i < _i)
        {
            if (word[i] != word[_i])
            {
                break;
                palindrom = false;
            }
            i++;
            _i--;
        }
        if (palindrom)
            palPrint(word, 0, wordlen - 1);
    }  

    cout << endl;

    return 0;
}

int palPrint(char *arr, int begin, int end)
{
    int wordlen = strlen(arr);
    if (begin == -1)
        for (int i = 0; i < wordlen; i++)
        {
            if (wordlen != end)
                cout << arr[i] << " ";
        }
    else if ((begin > -1) && (end > begin) && (end < wordlen) && (begin < wordlen))
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
        cerr << endl
             << "Incorect argue in palPrint" << endl;
        return -1;
    }

    cout << endl << endl;
}