#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*
	kkjuwPstbuoahgdilnnucicdfmomzexgzkamxwphbieryzmafrfal
	hyrnr(xzkyuCedsiioyvszpvhjnawitbclsdhahjh-hmbcm1vshus9waeok)posks
	rapxbjxflkvevjeylslvrvxtzyrmo
	lxbqgjuxmvkasujojktphrf
	ficrbwujiztocgvzojxrijdnlcalaawidpy
	brnemsgbfapwjpjamilkdfdazcuvwtsscwsorvtqnwggcbvapimza,qfvgb
	uvhzwzmlzlv
	smrpithrvptaqsdft
	qnlsqripkvyoesawozyusnpntzqlaivjlrickcsjcahfjvj,xdqpn
	yvlazzdhbhlemucby
	qqotywrzdnqspuiepztndytyjarwsscqmsocnfukryorprm
	hvxsgwrqyjraqkwirlpzczpcfyeguzdaeczycyrhfmwspzqyjrpan
	rbflmpiagkbojania
	yamycjqvwzxelawkvdynhjmnnprdkesurnljjqenr
	jujmgswyxlrtqasqcrdagafoxtsbbnjgngjitvdabeitszj.
	*/


	/*

	kkjuw P stbuo a hgdil n nucic d fmomz e xgzka m xwphb i eryzm a frfal
				PANDEMIA
	*/

	string napis;
	getline(cin, napis);

	int liczba = 0;
	char* wyjscie = new char[10000];
	

	napis.erase(0, 5);

	for (int i = 0; i < napis.length(); i++)
	{	
		if (i % 6 == 0)
		{
			wyjscie[liczba] = napis[i];
			liczba++;
		}
	}

	for (int i = 0; i < liczba; i++)
	{
		cout << wyjscie[i];
	}
	cout << endl;

	return 0;
}