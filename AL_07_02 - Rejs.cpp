#include <iostream>

using namespace std;

int main()
{
	int testy;
	cin >> testy;

	while (testy--)
	{
		int sx, sy, mx, my;
		int dni, ruchy = 0;
		int N = 0, E = 0, S = 0, W = 0;
		char kierunek;
		int wynik = 0;

		cin >> sx >> sy >> mx >> my;
		cin >> dni;

		int odlegloscX = mx - sx, odlegloscY = my - sy;

		for (int i = 0; i < dni; i++)
		{
			cin >> kierunek;

			wynik++;
			
			if (((sx != mx) || (sy != my)) && (i < dni))
			{
				if (odlegloscX > 0)
				{
					if (kierunek == 'E') sx++;
				}
				if (odlegloscX < 0)
				{
					if (kierunek == 'W') sx--;
				}
				if (odlegloscY > 0)
				{
					if (kierunek == 'N') sy++;
				}
				if (odlegloscY < 0)
				{
					if (kierunek == 'S') sy--;
				}
			}	

			if ((sx == mx) && (sy == my))
			{
				cout << wynik << endl;
			}
			else if ((i == dni - 1) && ((sx != mx) || (sy != my)))
			{
				cout << "NIE" << endl;
				break;
			}
		}

	}

	return 0;
}