#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char s[101] = {0};
	int i = 0;
	int _i = 0;
	
	for (;;)
	{
		cin >> s;
		
		i = 0;
		_i = strlen(s) - 1;
		char temp;
		
		if (strcmp(s, "break") == 0) break;
		
		for (;;)
		{
			if (i > _i) break;
			if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
				if ((s[_i] > 64 && s[_i] < 91) || (s[_i] > 96 && s[_i] < 123))
					{
						temp = s[_i];
						s[_i] = s[i];
						s[i] = temp;
					}
			i++;
			_i--;
		}
		cout << s << endl << endl;
	}
	
	
	return 0;
}

