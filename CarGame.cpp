#include<iostream>
#include<conio.h>
#include<dos.h>
#include <windows.h>
#include <time.h>

#define SCREEN_WIDTH 90
#define SCREEN_HEIGHT 26
#define WIN_WIDTH 70

/// using namespace std; /// Inefficient
///using std::cout;
///using std:: endl;


HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int enemyY[3];
int enemyX[3];
int enemyFlag[3];
char car[4][4] = { ' ','±','±',' ',
					'±','±','±','±',
					' ','±','±',' ',
					'±','±','±','±' };

int carPos = WIN_WIDTH/2;
int score = 0;

void gotoxy(int x, int y){
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}
void setcursor(bool visible, DWORD size) {
	if(size == 0)
		size = 20;

	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo(console,&lpCursor);
}
void drawBorder(){
	for(int i=0; i<SCREEN_HEIGHT; i++){
		for(int j=0; j<17; j++){
			gotoxy(0+j,i); std::cout<<"±";
			gotoxy(WIN_WIDTH-j,i); std::cout<<"±";
		}
	}
	for(int i=0; i<SCREEN_HEIGHT; i++){
		gotoxy(SCREEN_WIDTH,i); std::cout<<"±";
	}
}
void genEnemy(int ind){
	enemyX[ind] = 17 + rand()%(33);
}
void drawEnemy(int ind){
	if( enemyFlag[ind] == true ){
		gotoxy(enemyX[ind], enemyY[ind]);   std::cout<<"****";
		gotoxy(enemyX[ind], enemyY[ind]+1); std::cout<<" ** ";
		gotoxy(enemyX[ind], enemyY[ind]+2); std::cout<<"****";
		gotoxy(enemyX[ind], enemyY[ind]+3); std::cout<<" ** ";
	}
}
void eraseEnemy(int ind){
	if( enemyFlag[ind] == true ){
		gotoxy(enemyX[ind], enemyY[ind]); std::cout<<"    ";
		gotoxy(enemyX[ind], enemyY[ind]+1); std::cout<<"    ";
		gotoxy(enemyX[ind], enemyY[ind]+2); std::cout<<"    ";
		gotoxy(enemyX[ind], enemyY[ind]+3); std::cout<<"    ";
	}
}
void resetEnemy(int ind){
	eraseEnemy(ind);
	enemyY[ind] = 1;
	genEnemy(ind);
}

void drawCar(){
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			gotoxy(j+carPos, i+22); std::cout<<car[i][j];
		}
	}
}
void eraseCar(){
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			gotoxy(j+carPos, i+22); std::cout<<" ";
		}
	}
}

int collision(){
	if( enemyY[0]+4 >= 23 ){
		if( enemyX[0] + 4 - carPos >= 0 && enemyX[0] + 4 - carPos < 9  ){
			return 1;
		}
	}
	return 0;
}
void gameover(){
	system("cls");
	std::cout<<std::endl;
	std::cout<<"\t\t--------------------------"<<std::endl;
	std::cout<<"\t\t-------- Game Over -------"<<std::endl;
	std::cout<<"\t\t--------------------------"<<std::endl<<std::endl;
	std::cout<<"\t\tPress any key to go back to menu.";
	getch();
}
void updateScore(){
	gotoxy(WIN_WIDTH + 7, 5);std::cout<<"Score: "<<score<<std::endl;
}

void instructions(){

	system("cls");
	std::cout<<"Instructions";
	std::cout<<"\n----------------";
	std::cout<<"\n Avoid Cars by moving left or right. ";
	std::cout<<"\n\n Press 'a' to move left";
	std::cout<<"\n Press 'd' to move right";
	std::cout<<"\n Press 'escape' to exit";
	std::cout<<"\n\nPress any key to go back to menu";
	getch();
}

void play(){
	carPos = -1 + WIN_WIDTH/2;
	score = 0;
	enemyFlag[0] = 1;
	enemyFlag[1] = 0;
	enemyY[0] = enemyY[1] = 1;

	system("cls");
	drawBorder();
	updateScore();
	genEnemy(0);
	genEnemy(1);

	gotoxy(WIN_WIDTH + 7, 2);std::cout<<"Car Game";
	gotoxy(WIN_WIDTH + 6, 4);std::cout<<"----------";
	gotoxy(WIN_WIDTH + 6, 6);std::cout<<"----------";
	gotoxy(WIN_WIDTH + 7, 12);std::cout<<"Control ";
	gotoxy(WIN_WIDTH + 7, 13);std::cout<<"-------- ";
	gotoxy(WIN_WIDTH + 2, 14);std::cout<<" A Key - Left";
	gotoxy(WIN_WIDTH + 2, 15);std::cout<<" D Key - Right";

	gotoxy(18, 5);std::cout<<"Press any key to start";
	getch();
	gotoxy(18, 5);std::cout<<"                      ";

	while(1){
		if(kbhit()){
			char ch = getch();
			if( ch=='a' || ch=='A' ){
				if( carPos > 18 )
					carPos -= 4;
			}
			if( ch=='d' || ch=='D' ){
				if( carPos < 50 )
					carPos += 4;
			}
			if(ch==27){
				break;
			}
		}

		drawCar();
		drawEnemy(0);
		drawEnemy(1);
		if( collision() == 1  ){
			gameover();
			return;
		}
		Sleep(50);
		eraseCar();
		eraseEnemy(0);
		eraseEnemy(1);

		if( enemyY[0] == 10 )
			if( enemyFlag[1] == 0 )
				enemyFlag[1] = 1;

		if( enemyFlag[0] == 1 )
			enemyY[0] += 1;

		if( enemyFlag[1] == 1 )
			enemyY[1] += 1;

		if( enemyY[0] > SCREEN_HEIGHT-4 ){
			resetEnemy(0);
			score++;
			updateScore();
		}
		if( enemyY[1] > SCREEN_HEIGHT-4 ){
			resetEnemy(1);
			score++;
			updateScore();
		}
	}
}

int main()
{
	setcursor(0,0);
	srand( (unsigned)time(NULL));

	do{
		system("cls");
		gotoxy(10,5); std::cout<<" -------------------------- ";
		gotoxy(10,6); std::cout<<" |        Car Game        | ";
		gotoxy(10,7); std::cout<<" --------------------------";
		gotoxy(10,9); std::cout<<"1. Start Game";
		gotoxy(10,10); std::cout<<"2. Instructions";
		gotoxy(10,11); std::cout<<"3. Quit";
		gotoxy(10,13); std::cout<<"Select option: ";
		char op = getche();

		if( op=='1') play();
		else if( op=='2') instructions();
		else if( op=='3') exit(0);

	}while(1);

	return 0;
}
