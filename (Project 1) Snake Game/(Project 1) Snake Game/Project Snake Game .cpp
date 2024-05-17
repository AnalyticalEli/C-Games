//Snake Game Project //LEFT OFF ON BEGINNING OF VIDEO 1

#include <iostream>
using namespace std;
bool gameOver; //booleans are true or false statements
const int width = 20; //We're setting a constant of the width 
const int height = 20;	//Setting the height borders of the gameg
int x, y, fruitX, fruitY, score;//These variables are for our position in game
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN }; //Keymapping to game
eDirection dir;
void Setup() //The setup is how the game will look when start
{
	gameOver = false;
	dir = STOP;
	x = width / 2; //Setting our x to center for start
	y = height / 2; //Setting our y to center for start
	fruitX = rand() % width; //Create a random place + 1 for fruit placement of x axis
	fruitY = rand() % height;
	score = 0; //Starting at 0
}   
void Draw() //This sets the changes the int i and int j are setup like matricies.
{
	system("cls"); //WIll clear the console window
	for (int i = 0; i < width; i++)
			cout << "#";
	cout << endl;

	for (int i = 0; i < height; i++) //Setting the height changes
	{
		for (int j = 0; j < width; i++) //Setting the width changes

		{
			if (j == 0) //Inner J For loop for int j above
				cout << "#";
		
				cout << " "; //If J is not 0

			if (j == width - 1)
					cout << "#";
		
		}
		cout << endl; //Endline when we exit rows
	}
	for (int i = 0; i < width+2; i++)
		cout << "#";
}
void Input()
{


}
void Logic()
{


}
int main()
{
	Setup();
	while (!gameOver) //opening a while loop to apply to when its not gameover
	{
		Draw();
		Input();
		Logic();
		//Sleep(10) This slows our game abit for 10ms
	}
	return 0;
}