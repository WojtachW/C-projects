#include <iostream>
#include <windows.h>
using namespace std;
string tab[9]= {" "," "," "," "," "," "," "," "," "};
string input;
bool can[9] = {1,1,1,1,1,1,1,1,1};
bool cross[2] = {1,0};
void cross10()
{
	cross[0] = 1;
	cross[1] = 0;
}
void cross01()
{
	cross[0] = 0;
	cross[1] = 1;
}
void restart()
{
	system("cls");
	tab[0]=tab[1]=tab[2]=tab[3]=tab[4]=tab[5]=tab[6]=tab[7]=tab[8]= " ";
	can[0]=can[1]=can[2]=can[3]=can[4]=can[5]=can[6]=can[7]=can[8]= 1;
}
void spawnmap()
{
	cout<<tab[0]<<"|"<<tab[1]<<"|"<<tab[2]<<endl<<"-----"<<endl<<tab[3]<<"|"<<tab[4]<<"|"<<tab[5]<<endl<<"-----"<<endl<<tab[6]<<"|"<<tab[7]<<"|"<<tab[8]<<endl;
}
void play()
{
	if (cross[0])
	{
	system("cls");
	spawnmap();
	cout << "Wybierz pole dla O" << endl;
	cin >> input;
	if (input == "r")
	{
		restart();	
	}
	if (input == "1" && can[0])
	{
		tab[0] = "O";
		can[0] = 0;
		cross01();
	}
	if (input == "2" && can[1])
	{
		tab[1] = "O";
		can[1] = 0;
		cross01();
	}
	if (input == "3" && can[2])
	{
		tab[2] = "O";
		can[2] = 0;
		cross01();
	}
	if (input == "4" && can[3])
	{
		tab[3] = "O";
		can[3] = 0;
		cross01();
	}
	if (input == "5" && can[4])
	{
		tab[4] = "O";
		can[4] = 0;
		cross01();
	}
	if (input == "6" && can[5])
	{
		tab[5] = "O";
		can[5] = 0;
		cross01();
	}
	if (input == "7" && can[6])
	{
		tab[6] = "O";
		can[6] = 0;
		cross01();
	}
	if (input == "8" && can[7])
	{
		tab[7] = "O";
		can[7] = 0;
		cross01();
	}
	if (input == "9" && can[8])
	{
		tab[8] = "O";
		can[8] = 0;
		cross01();
	}
}
if (cross[1])
{
	system("cls");
	spawnmap();
		cout << "Wybierz pole dla X" << endl;
	cin >> input;
	if (input == "r")
	{
		restart();
	}
	if (input == "1" && can[0])
	{
		tab[0] = "X";
		can[0] = 0;
		cross10();
	}
	if (input == "2" && can[1])
	{
		tab[1] = "X";
		can[1] = 0;
		cross10();
	}
	if (input == "3" && can[2])
	{
		tab[2] = "X";
		can[2] = 0;
		cross10();
	}
	if (input == "4" && can[3])
	{
		tab[3] = "X";
		can[3] = 0;
		cross10();
	}
	if (input == "5" && can[4])
	{
		tab[4] = "X";
		can[4] = 0;
		cross10();
	}
	if (input == "6" && can[5])
	{
		tab[5] = "X";
		can[5] = 0;
		cross10();
	}
	if (input == "7" && can[6])
	{
		tab[6] = "X";
		can[6] = 0;
		cross10();
	}
	if (input == "8" && can[7])
	{
		tab[7] = "X";
		can[7] = 0;
		cross10();
	}
	if (input == "9" && can[8])
	{
		tab[8] = "X";
		can[8] = 0;
		cross10();
	}
}
}
int main()
{
	play();
	main();
}
