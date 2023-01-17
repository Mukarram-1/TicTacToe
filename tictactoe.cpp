#include<iostream>
#include<cstring>
using namespace std;
char grid[3][3] = { {'*','*','*'},{'*','*','*'},{'*','*','*'} };
char row;
char col;
void interface();
void player1();
void player2();
bool win1();
bool win2();
int main()
{
	cout << "\t\t\t\t\tWelcome to Tic Tac Toe" << endl << "\t\t\t\t\tInstructions!!!!" << endl << "\t\t\t\t\t* means empty spaces" << endl << "\t\t\t\t\tPlayer 1 has X mark\n\t\t\t\t\tPlayer 2 has O mark\n";


	while (win1() || win2())
	{

		interface();
		player1();
		if (win1() == true)
		{
			cout << "Player 1 Won the game";
			break;
		}
		if (grid[0][0] != '*' && win1() != true && grid[0][1] != '*' && grid[0][2] != '*' && grid[1][0] != '*' && grid[1][1] != '*' && grid[1][2] != '*' && grid[2][0] != '*' && grid[2][1] != '*' && grid[2][2] != '*')
		{
			cout << "DRAW" << endl;
			break;
		}
		player2();
		if (win2() == true)
		{
			cout << "Player 2 Won the game";
			break;
		}
		if (grid[0][0] != '*' && win2() != true && grid[0][1] != '*' && grid[0][2] != '*' && grid[1][0] != '*' && grid[1][1] != '*' && grid[1][2] != '*' && grid[2][0] != '*' && grid[2][1] != '*' && grid[2][2] != '*')
		{
			cout << "DRAW" << endl;
			break;
		}
		system("cls");
	}
	return 0;
}
void interface()
{
	cout << "\t\t\t\t\t    |    |    " << endl;
	cout << "\t\t\t\t\t  " << grid[0][0] << " | " << grid[0][1] << "  |" << grid[0][2] << endl;
	cout << "\t\t\t\t\t____|____|____" << endl;
	cout << "\t\t\t\t\t    |    |    " << endl;
	cout << "\t\t\t\t\t  " << grid[1][0] << " | " << grid[1][1] << "  |" << grid[1][2] << endl;
	cout << "\t\t\t\t\t____|____|____" << endl;
	cout << "\t\t\t\t\t  " << grid[2][0] << " | " << grid[2][1] << "  |" << grid[2][2] << endl;
	cout << "\t\t\t\t\t    |    |    " << endl;
	cout << "\t\t\t\t\t    |    |    " << endl;
}
void player1()
{
	cout << "Player 1's Turn: " << endl << "Enter row and Col: ";
	cin >> row >> col;
	if (row == '1' && col == '1' && grid[0][0] == '*')
	{
		grid[0][0] = 'X';
		system("cls");
		interface();

	}
	else if (row == '1' && col == '2' && grid[0][1] == '*')
	{
		grid[0][1] = 'X';
		system("cls");
		interface();

	}
	else if (row == '1' && col == '3' && grid[0][2] == '*')
	{
		grid[0][2] = 'X';
		system("cls");
		interface();

	}
	else if (row == '2' && col == '1' && grid[1][0] == '*')
	{
		grid[1][0] = 'X';
		system("cls");
		interface();

	}
	else if (row == '2' && col == '2' && grid[1][1] == '*')
	{
		grid[1][1] = 'X';
		system("cls");
		interface();

	}
	else if (row == '2' && col == '3' && grid[1][2] == '*')
	{
		grid[1][2] = 'X';
		system("cls");
		interface();

	}
	else if (row == '3' && col == '1' && grid[2][0] == '*')
	{
		grid[2][0] = 'X';
		system("cls");
		interface();

	}
	else if (row == '3' && col == '2' && grid[2][1] == '*')
	{
		grid[2][1] = 'X';
		system("cls");
		interface();

	}
	else if (row == '3' && col == '3' && grid[2][2] == '*')
	{
		grid[2][2] = 'X';
		system("cls");
		interface();
	}
	else
	{
		cout << "Invalid input" << endl;
		cout << "Enter again" << endl;
		player1();
	}
}void player2()
{
	cout << "Player 2's turn" << endl << "Enter row and col: " << endl;
	cin >> row >> col;
	if (row == '1' && col == '1' && grid[0][0] == '*')
	{
		grid[0][0] = 'O';
		system("cls");
		interface();

	}
	else if (row == '1' && col == '2' && grid[0][1] == '*')
	{
		grid[0][1] = 'O';
		system("cls");
		interface();

	}
	else if (row == '1' && col == '3' && grid[0][2] == '*')
	{
		grid[0][2] = 'O';
		system("cls");
		interface();

	}
	else if (row == '2' && col == '1' && grid[1][0] == '*')
	{
		grid[1][0] = 'O';
		system("cls");
		interface();

	}
	else if (row == '2' && col == '2' && grid[1][1] == '*')
	{
		grid[1][1] = 'O';
		system("cls");
		interface();

	}
	else if (row == '2' && col == '3' && grid[1][2] == '*')
	{
		grid[1][2] = 'O';
		system("cls");
		interface();

	}
	else if (row == '3' && col == '1' && grid[2][0] == '*')
	{
		grid[2][0] = 'O';
		system("cls");
		interface();

	}
	else if (row == '3' && col == '2' && grid[2][1] == '*')
	{
		grid[2][1] = 'O';
		system("cls");
		interface();

	}
	else if (row == '3' && col == '3' && grid[2][2] == '*')
	{
		grid[2][2] = 'O';
		system("cls");
		interface();

	}
	else
	{
		cout << "Invalid input" << endl;
		cout << "Enter again " << endl;
		player2();
	}
}
bool win1()
{
	for (int i = 0;i < 3;i++)
	{
		if (grid[i][0] == 'X' && grid[i][1] == 'X' && grid[i][2] == 'X')
		{
			return true;
		}
	}
	for (int i = 0;i < 3;i++)
	{
		if (grid[0][i] == 'X' && grid[1][i] == 'X' && grid[2][i] == 'X')
		{
			return true;
		}
	}
	if (grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X')
	{
		return true;
	}
	if (grid[0][2] == 'X' && grid[1][1] == 'X' && grid[2][0] == 'X')
	{
		return true;
	}
}
bool win2()
{
	for (int i = 0;i < 3;i++)
	{
		if (grid[i][0] == 'O' && grid[i][1] == 'O' && grid[i][2] == 'O')
		{
			return true;
		}
	}
	for (int i = 0;i < 3;i++)
	{
		if (grid[0][i] == 'O' && grid[1][i] == 'O' && grid[2][i] == 'O')
		{
			return true;
		}
	}
	if (grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O')
	{
		return true;
	}if (grid[0][2] == 'O' && grid[1][1] == 'O' && grid[2][0] == 'O')
	{
		return true;
	}
}