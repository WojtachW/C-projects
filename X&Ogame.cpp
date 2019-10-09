#include <iostream>
#include<windows.h>

using namespace std;

	int input;
	string tab[9] = {" "," "," "," "," "," "," "," "," "};
	bool can[9]= {1,1,1,1,1,1,1,1,1};
	bool mov=1;
	bool owon;

void won()
{
		if(owon)
		{
			cout << "Player with O WON!!!!!"<< endl;
		}
		if(!owon)
		{
			cout << "Player with X WON!!!!!"<< endl;
		}
}

void map()
{
	cout<<tab[0]<<"|"<<tab[1]<<"|"<< tab[2]<<endl<<"-----"<<endl<<tab[3]<<"|"<<tab[4]<<"|"<<tab[5]<<endl<<"-----"<<endl<<tab[6]<<"|"<<tab[7]<<"|"<<tab[8]<<endl;
}

void check()
{
	if(tab[0]==tab[1]&& tab[1]==tab[2])
	{
		if(tab[0]=="O")
		{
			owon = 1;
			won();
		}
		if(tab[0]=="X")
		{
			owon = 0;
			won();
		}
	}
		if(tab[3]==tab[4]&& tab[4]==tab[5])
	{
		if(tab[3]=="O")
		{
			owon = 1;
			won();
		}
		if(tab[3]=="X")
		{
			owon = 0;
			won();
		}
	}
		if(tab[6]==tab[7]&& tab[7]==tab[8])
	{
		if(tab[6]=="O")
		{
			owon = 1;
			won();
		}
		if(tab[6]=="X")
		{
			owon = 0;
			won();
		}
	}
	if(tab[0]==tab[3]&& tab[3]==tab[6])
	{
		if(tab[0]=="O")
		{
			owon = 1;
			won();
		}
		if(tab[0]=="X")
		{
			owon = 0;
			won();
		}
	}
	if(tab[1]==tab[4]&& tab[4]==tab[7])
	{
		if(tab[1]=="O")
		{
			owon = 1;
			won();
		}
		if(tab[1]=="X")
		{
			owon = 0;
			won();
		}
	}
	if(tab[2]==tab[5]&& tab[5]==tab[8])
	{
		if(tab[2]=="O")
		{
			owon = 1;
			won();
		}
		if(tab[2]=="X")
		{
			owon = 0;
			won();
		}
	}
	if(tab[0]==tab[4]&& tab[4]==tab[8])
	{
		if(tab[0]=="O")
		{
			owon = 1;
			won();
		}
		if(tab[0]=="X")
		{
			owon = 0;
			won();
		}
	}
	if(tab[2]==tab[4]&& tab[4]==tab[6])
	{
		if(tab[2]=="O")
		{
			owon = 1;
			won();
		}
		if(tab[2]=="X")
		{
			owon = 0;
			won();
		}
	}
}

int main()
{
	system("cls");
	map();
	check();
	if (mov)
	{
		cout << "Player with O move" <<endl;
		cin >> input;
		if (can[input-1]==1)
		{
			tab[input -1] = "O";
			mov=0;
			can[input-1]=0;
		}
		main();
	}
	if (!mov)
	{
		cout << "Player with X move" <<endl;
		cin >> input;
		if (can[input-1]==1)
		{
			tab[input -1] = "X";
			mov=1;
			can[input-1]=0;
		}
		main();
	}
}
