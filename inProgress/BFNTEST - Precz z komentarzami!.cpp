#include <iostream>
#include <string>

using namespace std;

// kompiluje ale dostaje 0.5 pkt
// nie wykrywa fake komentarzy!!!

int main()
{
	string line;

	int comment = 0;
	int fake_comment = 0;
	int comment_start, comment_end;

	while (getline(cin, line))
	{
		for (int i = 0; i < line.length(); i++)
		{
			if (line[i] == '/')
			{
				//if (line[i - 1] == '(' || line[i - 2] == '(') fake_comment = 1;

				if (line[i + 1] == '/') // find and erase line comment
				{
					line.erase(i, line.length());
				}
				else if (line[i + 1] == '*') // find multi-line comment
				{
					comment = 1;
					if (comment == 0) comment_start = i + 1;
				}
			}

			if (comment == 1)
			{
				if (line[i] == '*' && line[i + 1] == '/') 
				{
					line.erase(i, 2);
					comment = 0;
				}
				else
				{
					line.erase(i, 1);
					i--;
				}
			}
		}

		cout << line << endl;
	}

	return 0;
}