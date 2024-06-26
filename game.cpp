//NAME: Syed Ata ul Muhaimen Ahmad
//Roll no: i21-0888 



//============================================================================
// Name        : .cpp
// Author      : FAST CS Department
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Rush Hour...
//============================================================================

#ifndef RushHour_CPP_
#define RushHour_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;

// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();

}
int xz=320, yz=70;	
		//Drawing a car

void drawCarz() 
{
	DrawSquare(xz+3, yz+5, 40, colors[BLACK]);
	DrawRectangle(xz-30, yz+5, 35,25, colors[CRIMSON]);
	DrawSquare(xz+8, yz+28, 12, colors[WHITE]);
	DrawSquare(xz+25, yz+28, 12, colors[WHITE]);
	DrawCircle(xz-27,yz+20,4,colors[WHITE]);
	DrawCircle(xz-27,yz+3,4,colors[WHITE]);
	DrawCircle(xz+36,yz+15,4,colors[RED]);
	DrawCircle(xz-20,yz,6,colors[BLACK]);
	DrawCircle(xz+32,yz,6,colors[BLACK]);
	glutPostRedisplay();
}
bool flagz = true;
void moveCarz() 
	{
	
	if (xz > 200 && flagz) {
		xz -= 5;
		cout << "going left";
		if(xz < 250)
			
			flagz = false;

	}
	else if (xz < 1010 && !flagz) {
		cout << "going right";
		xz += 5;
		if (xz > 850)
			flagz = true;
	}
	}
	


		//opening window
bool openwindow = true;
void menu()
{
	glClearColor(0,0,0,0);
	glClear(GL_COLOR_BUFFER_BIT);
	DrawString(370,600,"***************  ",colors[RED]);
	DrawString(370,700,"***************  ",colors[RED]);
	DrawString(370,610,"*",colors[RED]);
	DrawString(370,620,"*",colors[RED]);
	DrawString(370,630,"*",colors[RED]);
	DrawString(370,640,"*",colors[RED]);
	DrawString(370,650,"*",colors[RED]);
	DrawString(370,660,"*",colors[RED]);
	DrawString(370,670,"*",colors[RED]);
	DrawString(370,680,"*",colors[RED]);
	DrawString(370,690,"*",colors[RED]);
	DrawString(370,699,"*",colors[RED]);
	
	DrawString(607,610,"*",colors[RED]);
	DrawString(607,620,"*",colors[RED]);
	DrawString(607,630,"*",colors[RED]);
	DrawString(607,640,"*",colors[RED]);
	DrawString(607,650,"*",colors[RED]);
	DrawString(607,660,"*",colors[RED]);
	DrawString(607,670,"*",colors[RED]);
	DrawString(607,680,"*",colors[RED]);
	DrawString(607,690,"*",colors[RED]);
	DrawString(607,699,"*",colors[RED]);
	
	
	
	
	drawCarz();
	moveCarz();
	
	
	
	
	DrawString(400,650," Rush Hour ",colors[RED]);
	
	DrawRectangle(230,300,500,200,colors[RED]);
	DrawString(250,400,"Press 'y' to select yellow Taxi",colors[WHITE]);
	DrawString(250,350,"Press 'r' to select Red Taxi",colors[WHITE]);
	glutSwapBuffers();
}
int xI = 60, yI = 800;
int x2 = 800, y2 = 400;
int x3 = 500 , y3 =200 ;
int x4 = 150 , y4 =650 ;
int t=180;
		//Collisions

void collision1()
{
	if(xI>=70 && xI<=200 && yI>=70 && yI<=200)
	{
		if(xI>70 && xI <100)
		{
			xI=25;
		}
		if(xI<=200)
		{
			xI+=10;
		}
		if(xI>72 && xI<198 && yI==70)
		{
			yI-=10;
		}
		if(xI>72 && xI<198 && yI==200)
		{
			yI+=10;
		}	
	}
}

void collision2()
{
	if(xI>=220 && xI<=310 && yI>=20 && yI<=350)
	{
		if(xI>220 && xI <250)
		{
			xI=200;
		}
		if(xI<=310)
		{
			xI+=10;
		}
		if(xI>222 && xI<308 && yI==20)
		{
			yI-=10;
		}
		if(xI>222 && xI<308 && yI==350)
		{
			yI+=10;
		}	
	}
}

void collision3()
{
	if(xI>=270 && xI<=550 && yI>=120 && yI<=200)
	{
		if(xI>270 && xI <300)
		{
			xI=250;
		}
		if(xI<=550)
		{
			xI+=10;
		}
		if(xI>272 && xI<548 && yI==120)
		{
			yI-=10;
		}
		if(xI>272 && xI<548 && yI==200)
		{
			yI+=10;
		}	
	}
}

void collision4()
{
	if(xI>=370 && xI<=450 && yI>=0 && yI<=100)
	{
		if(xI>370 && xI <400)
		{
			xI=350;
		}
		if(xI<=450)
		{
			xI+=10;
		}
		if(xI>372 && xI<448 && yI==0)
		{
			yI-=10;
		}
		if(xI>372 && xI<448 && yI==100)
		{
			yI+=10;
		}	
	}
}

void collision5()
{
	if(xI>=70 && xI<=250 && yI>=670 && yI<=750)
	{
		if(xI>70 && xI <100)
		{
			xI=50;
		}
		if(xI<=250)
		{
			xI+=10;
		}
		if(xI>72 && xI<248 && yI==670)
		{
			yI-=10;
		}
		if(xI>72 && xI<248 && yI==750)
		{
			yI+=10;
		}	
	}
}

void collision6()
{
	if(xI>=470 && xI<=1000 && yI>=670 && yI<=750)
	{
		if(xI>470 && xI <500)
		{
			xI=450;
		}
		if(xI<=1000)
		{
			xI+=10;
		}
		if(xI>472 && xI<998 && yI==670)
		{
			yI-=10;
		}
		if(xI>472 && xI<998 && yI==750)
		{
			yI+=10;
		}	
	}
}

void collision7()
{
	if(xI>=70 && xI<=200 && yI>=470 && yI<=550)
	{
		if(xI>70 && xI <100)
		{
			xI=50;
		}
		if(xI<=200)
		{
			xI+=10;
		}
		if(xI>72 && xI<198 && yI==470)
		{
			yI-=10;
		}
		if(xI>72 && xI<198 && yI==550)
		{
			yI+=10;
		}	
	}
}

void collision8()
{
	if(xI>=120 && xI<=200 && yI>=370 && yI<=550)
	{
		if(xI>120 && xI <150)
		{
			xI=100;
		}
		if(xI<=200)
		{
			xI+=10;
		}
		if(xI>122 && xI<198 && yI==370)
		{
			yI-=10;
		}
		if(xI>122 && xI<198 && yI==550)
		{
			yI+=10;
		}	
	}
}

void collision9()
{
	if(xI>=220 && xI<=400 && yI>=470 && yI<=550)
	{
		if(xI>220 && xI <300)
		{
			xI=205;
		}
		if(xI<=400)
		{
			xI+=10;
		}
		if(xI>222 && xI<398 && yI==470)
		{
			yI-=10;
		}
		if(xI>222 && xI<398 && yI==550)
		{
			yI+=10;
		}	
	}
}

void collision10()
{
	if(xI>=320 && xI<=400 && yI>=470 && yI<=650)
	{
		if(xI>320 && xI <350)
		{
			xI=300;
		}
		if(xI<=400)
		{
			xI+=10;
		}
		if(xI>322 && xI<398 && yI==470)
		{
			yI-=10;
		}
		if(xI>322 && xI<398 && yI==650)
		{
			yI+=10;
		}	
	}
}

void collision11()
{
	if(xI>=370 && xI<=450 && yI>=320 && yI<=500)
	{
		if(xI>370 && xI <400)
		{
			xI=350;
		}
		if(xI<=450)
		{
			xI+=10;
		}
		if(xI>372 && xI<448 && yI==320)
		{
			yI-=10;
		}
		if(xI>372 && xI<448 && yI==500)
		{
			yI+=10;
		}	
	}
}

void collision12()
{
	if(xI>=370 && xI<=500 && yI>=320 && yI<=400)
	{
		if(xI>370 && xI <450)
		{
			xI=350;
		}
		if(xI<=500)
		{
			xI+=10;
		}
		if(xI>372 && xI<498 && yI==320)
		{
			yI-=10;
		}
		if(xI>372 && xI<498 && yI==400)
		{
			yI+=10;
		}	
	}
}

void collision13()
{
	if(xI>=860 && xI<=950 && yI>=270 && yI<=650)
	{
		if(xI>860 && xI <890)
		{
			xI=845;
		}
		if(xI<=950)
		{
			xI+=10;
		}
		if(xI>862 && xI<948 && yI==270)
		{
			yI-=10;
		}
		if(xI>862 && xI<948 && yI==650)
		{
			yI+=10;
		}	
	}
}

void collision14()
{
	if(xI>=570 && xI<=650 && yI>=270 && yI<=550)
	{
		if(xI>570 && xI <590)
		{
			xI=550;
		}
		if(xI<=650)
		{
			xI+=10;
		}
		if(xI>572 && xI<648 && yI==270)
		{
			yI-=10;
		}
		if(xI>572 && xI<648 && yI==550)
		{
			yI+=10;
		}	
	}
}


void collision15()
{
	if(xI>=570 && xI<=850 && yI>=420 && yI<=500)
	{
		if(xI>420 && xI <600)
		{
			xI=560;
		}
		if(xI<=850)
		{
			xI+=10;
		}
		if(xI>572 && xI<848 && yI==420)
		{
			yI-=10;
		}
		if(xI>572 && xI<848 && yI==500)
		{
			yI+=10;
		}	
	}
}

void collision16()
{
	if(xI>=670 && xI<=750 && yI>=20 && yI<=200)
	{
		if(xI>670 && xI <700)
		{
			xI=650;
		}
		if(xI<=750)
		{
			xI+=10;
		}
		if(xI>672 && xI<748 && yI==20)
		{
			yI-=10;
		}
		if(xI>572 && xI<748 && yI==200)
		{
			yI+=10;
		}	
	}
}

void collision17()
{
	if(xI>=670 && xI<=1000 && yI>=120 && yI<=200)
	{
		if(xI>670 && xI <700)
		{
			xI=650;
		}
		if(xI<=1000)
		{
			xI+=10;
		}
		if(xI>672 && xI<998 && yI==120)
		{
			yI-=10;
		}
		if(xI>572 && xI<9988 && yI==200)
		{
			yI+=10;
		}	
	}
}

			//For borders of canvas
void collision18()
{
	if(xI>=10 && xI<=1000 && yI>=0 && yI<=830)
	{
		if(xI>=1000 )
		{
			xI=960;
		}
		if(xI<=10)
		{
			xI+=10;
		}
		if(xI>12 && xI<988 && yI==830)
		{
			yI-=10;
		}
		if(xI>12 && xI<988 && yI==0)
		{
			yI+=10;
		}	
	}
}

			//trees
void collision19()
{
	if(xI>=120 && xI<=150 && yI>=550 && yI<=580)
	{
		if(xI>122 && xI <150)
		{
			xI=105;
		}
		if(xI<=150)
		{
			xI+=10;
		}
		if(xI>122 && xI<148 && yI==550)
		{
			yI-=10;
		}
		if(xI>122 && xI<148 && yI==580)
		{
			yI+=10;
		}	
	}
}

void collision20()
{
	if(xI>=670 && xI<=700 && yI>=750 && yI<=780)
	{
		if(xI>670 && xI <700)
		{
			xI=650;
		}
		if(xI<=700)
		{
			xI+=10;
		}
		if(xI>672 && xI<698 && yI==750)
		{
			yI-=10;
		}
		if(xI>672 && xI<698 && yI==780)
		{
			yI+=10;
		}	
	}
}

void collision21()
{
	if(xI>=770 && xI<=800 && yI>=500 && yI<=530)
	{
		if(xI>770 && xI <800)
		{
			xI=750;
		}
		if(xI<=800)
		{
			xI+=10;
		}
		if(xI>772 && xI<798 && yI==500)
		{
			yI-=10;
		}
		if(xI>772 && xI<798 && yI==530)
		{
			yI+=10;
		}	
	}
}

		//Drawing cars
bool color=true;
void drawCar() 
{	
	DrawSquare(xI+3, yI+5, 30, colors[OLIVE_DRAB]);
	DrawRectangle(xI-5, yI+5, 20,13, colors[BLACK]);
	DrawSquare(xI+8, yI+18, 9, colors[WHITE]);
	DrawSquare(xI+15, yI+18, 9, colors[WHITE]);
	DrawCircle(xI-1,yI+12,3,colors[WHITE]);
	DrawCircle(xI+28,yI+12,3,colors[RED]);
	DrawCircle(xI+1,yI,5,colors[BLACK]);
	DrawCircle(xI+22,yI,5,colors[BLACK]);
	glutPostRedisplay();
}
bool flag = true;
void moveCar() 
	{
	
	
	}

void drawCarJ() 
{	
	DrawSquare(xI+3, yI+5, 30, colors[RED]);
	DrawRectangle(xI-5, yI+5, 20,13, colors[BLACK]);
	DrawSquare(xI+8, yI+18, 9, colors[WHITE]);
	DrawSquare(xI+15, yI+18, 9, colors[WHITE]);
	DrawCircle(xI-1,yI+12,3,colors[WHITE]);
	DrawCircle(xI+28,yI+12,3,colors[RED]);
	DrawCircle(xI+1,yI,5,colors[BLACK]);
	DrawCircle(xI+22,yI,5,colors[BLACK]);
	glutPostRedisplay();
}
bool flagJ= true;
void moveCarJ() 
	{
	
	
	}	

void drawCar2() 
{
	DrawSquare(x2+3, y2+5, 40, colors[BLACK]);
	DrawRectangle(x2-30, y2+5, 35,25, colors[BLUE]);
	DrawSquare(x2+8, y2+28, 12, colors[WHITE]);
	DrawSquare(x2+25, y2+28, 12, colors[WHITE]);
	DrawCircle(x2-27,y2+20,4,colors[WHITE]);
	DrawCircle(x2-27,y2+3,4,colors[WHITE]);
	DrawCircle(x2+36,y2+15,4,colors[RED]);
	DrawCircle(x2-20,y2,6,colors[BLACK]);
	DrawCircle(x2+32,y2,6,colors[BLACK]);
	glutPostRedisplay();
}
bool flag1 = true;
void moveCar2() 
	{
	
	if (y2 > 30 && flag1) {
		y2 -= 2;
		cout << "going up";
		if(y2 < 200)
			
			flag1 = false;

	}
	else if (y2 < 800 && !flag1) {
		cout << "go down";
		y2 += 2;
		if (y2 > 400)
			flag1 = true;
	}
	}
	
void drawCar3() 
{
	
	DrawSquare(x3+3, y3+5, 40, colors[BLACK]);
	DrawRectangle(x3-30, y3+5, 35,25, colors[BROWN]);
	DrawSquare(x3+8, y3+28, 12, colors[WHITE]);
	DrawSquare(x3+25, y3+28, 12, colors[WHITE]);
	DrawCircle(x3-27,y3+20,4,colors[WHITE]);
	DrawCircle(x3+36,y3+15,4,colors[RED]);
	DrawCircle(x3-20,y3,6,colors[BLACK]);
	DrawCircle(x3+32,y3,6,colors[BLACK]);
	glutPostRedisplay();
}
bool flag3 = true;
void moveCar3() 
	{
	
	if (x3 > 400 && flag1) {
		x3 -= 3;
		cout << "going left";
		if(x3 < 1000)
			
			flag3 = false;

	}
	else if (x3 < 1000 && !flag1) {
		cout << "going right ";
		x3 += 3;
		if (x3 > 900)
			flag3 = true;
	}
	}
	
void drawCar4() 
{
	DrawSquare(x4+3, y4+5, 40, colors[BLACK]);
	DrawRectangle(x4-30, y4+5, 35,25, colors[CRIMSON]);
	DrawSquare(x4+8, y4+28, 12, colors[WHITE]);
	DrawSquare(x4+25, y4+28, 12, colors[WHITE]);
	DrawCircle(x4-27,y4+20,4,colors[WHITE]);
	DrawCircle(x4-27,y4+3,4,colors[WHITE]);
	DrawCircle(x4+36,y4+15,4,colors[RED]);
	DrawCircle(x4-20,y4,6,colors[BLACK]);
	DrawCircle(x4+32,y4,6,colors[BLACK]);
	glutPostRedisplay();
}
bool flag4 = true;
void moveCar4() 
	{
	
	if (x4 > 200 && flag1) {
		x4 -= 5;
		cout << "going left";
		if(x4 < 1000)
			
			flag4 = false;

	}
	else if (x4 < 1010 && !flag1) {
		cout << "go right";
		x4 += 5;
		if (x4 > 850)
			flag4 = true;
	}
	}
/*
 * Main Canvas drawing function.
 * */
int personx1=330, persony1=230, personx2=740, persony2=785, personx3=310,persony3=585;
char input;
void GameDisplay()/**/{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(1/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			1.0/*Blue Component*/, 1 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	
	
	//Timer
	string timer="Time Remaining : " + to_string(t);
	//Displaying score
	DrawString(200, 800,timer, colors[RED]);
	
	
	//obstacles
	DrawSquare(100 , 100 ,101,colors[BLACK]); 
	DrawRectangle(250, 50, 55,300, colors[BLACK]);
	
	DrawRectangle(600, 300, 53,250, colors[BLACK]);
	DrawRectangle(600, 450, 250,53, colors[BLACK]);
	
	DrawRectangle(500, 700, 4000,55, colors[BLACK]);
	
	DrawRectangle(100, 500, 101,53, colors[BLACK]);
	DrawRectangle(151, 400, 53,150, colors[BLACK]);
	
	DrawRectangle(101, 700, 151,53, colors[BLACK]);
	
	DrawRectangle(251, 500, 101,53, colors[BLACK]);
	DrawRectangle(351, 500, 53,150, colors[BLACK]);
	
	DrawSquare( 450, 350, 50, colors[BLACK]);
	
	DrawRectangle(900, 300, 50,350, colors[BLACK]);
	
	DrawRectangle(700, 50, 53,150, colors[BLACK]);
	DrawRectangle(750, 150, 250,53, colors[BLACK]);
	
	DrawRectangle(400, 0, 55,100, colors[BLACK]);
	
	DrawRectangle(400, 350, 53,150, colors[BLACK]);
	DrawRectangle(300, 150, 250,53, colors[BLACK]);
	
	DrawCircle(150,600 , 25 , colors[GREEN]);
	DrawLine( 150 , 550 ,  150 ,580,10,colors[BROWN] );
	
	DrawCircle(800,550 , 25 , colors[GREEN]);
	DrawLine( 800 , 500 ,  800 ,530,10,colors[BROWN] );
	
	DrawCircle(700,800 , 25 , colors[GREEN]);
	DrawLine( 700 , 750 ,  700 ,780,10,colors[BROWN] );
	
	//grid
	DrawRectangle(50, 0, 3,1000, colors[BLACK]);
	DrawRectangle(101, 0, 3,1000, colors[BLACK]);
	DrawRectangle(150, 0, 3,1000, colors[BLACK]);
	DrawRectangle(201, 0, 3,1000, colors[BLACK]);
	DrawRectangle(250, 0, 3,1000, colors[BLACK]);
	DrawRectangle(301, 0, 3,1000, colors[BLACK]);
	DrawRectangle(351, 0, 3,1000, colors[BLACK]);
	DrawRectangle(401, 0, 3,1000, colors[BLACK]);
	DrawRectangle(450, 0, 3,1000, colors[BLACK]);
	DrawRectangle(501, 0, 3,1000, colors[BLACK]);
	DrawRectangle(550, 0, 3,1000, colors[BLACK]);
	DrawRectangle(601, 0, 3,1000, colors[BLACK]);
	DrawRectangle(650, 0, 3,1000, colors[BLACK]);
	DrawRectangle(701, 0, 3,1000, colors[BLACK]);
	DrawRectangle(750, 0, 3,1000, colors[BLACK]);
	DrawRectangle(801, 0, 3,1000, colors[BLACK]);
	DrawRectangle(850, 0, 3,1000, colors[BLACK]);
	DrawRectangle(901, 0, 3,1000, colors[BLACK]);
	DrawRectangle(950, 0, 3,1000, colors[BLACK]);
	DrawRectangle(1000, 0, 3,1000, colors[BLACK]);
	//borders
	DrawLine( 0 , 0 ,  0 , 850 , 15 , colors[BLACK] );
	DrawLine( 0 , 850 ,1020 , 850 , 15 , colors[BLACK] );
	DrawLine( 1020 , 0 , 1020 ,850  , 15 , colors[BLACK] );
	DrawLine( 0 , 5 ,  1020 , 5 , 5 , colors[BLACK] );
	//Display Score
	DrawString( 50, 800, "Score= 0", colors[RED]);
	DrawString( 50, 770, "High Score", colors[RED]);
	// Trianlge Vertices v1(300,50) , v2(500,50) , v3(400,250)
	DrawTriangle( 00, 0 , 0, 0 , 0 , 0, colors[MISTY_ROSE] ); 
	
	DrawSquare(500,300,30,colors[GOLD]);
	DrawLine(500,315,530,315,3,colors[BLACK] ); 	
	DrawLine(515,300,515,330,3,colors[BLACK] );
	
	DrawSquare(200,50,30,colors[GOLD]);
	DrawLine(200,65,230,65,3,colors[BLACK] ); 	
	DrawLine(215,50,215,80,3,colors[BLACK] );
	
	DrawSquare(900,50,30,colors[GOLD]);
	DrawLine(900,65,930,65,3,colors[WHITE] ); 	
	DrawLine(915,50,915,80,3,colors[WHITE] );
	
	// Passengers
	
DrawCircle(personx1,persony1 , 8 , colors[BLACK]);	
DrawLine( personx1 ,persony1-25 ,personx1 ,persony1+5,4,colors[BLACK] );
DrawLine( personx1 ,persony1-10 ,personx1-13 ,persony1-15,3,colors[BLACK] );
DrawLine( personx1 ,persony1-10 ,personx1+13 ,persony1-15,3,colors[BLACK] );
DrawLine( personx1 ,persony1-25 ,personx1-13 ,persony1-30,3,colors[BLACK] );
DrawLine( personx1 ,persony1-25 ,personx1+13 ,persony1-30,3,colors[BLACK] );

DrawCircle( personx2,persony2 , 10 , colors[BROWN]);	
DrawLine( personx2 ,persony2-25 ,personx2 ,persony2+5,5,colors[BROWN] );
DrawLine( personx2 ,persony2-10 ,personx2-13 ,persony2-15,3,colors[BROWN] );
DrawLine( personx2 ,persony2-10 ,personx2+13 ,persony2-15,3,colors[BROWN] );
DrawLine( personx2 ,persony2-25 ,personx2-13 ,persony2-30,3,colors[BROWN] );
DrawLine( personx2 ,persony2-25 ,personx2+13 ,persony2-30,3,colors[BROWN] );


DrawCircle(personx3,persony3 , 10 , colors[BLACK]);	
DrawLine(personx3,persony3-25,personx3,persony3+5,5,colors[BLACK] );
DrawLine( personx3 ,persony3-10 ,personx3-13 ,persony3-15,3,colors[BLACK] );
DrawLine( personx3 ,persony3-10 ,personx3+13 ,persony3-15,3,colors[BLACK] );
DrawLine( personx3 ,persony3-25 ,personx3-13 ,persony3-30,3,colors[BLACK] );
DrawLine( personx3 ,persony3-25 ,personx3+13 ,persony3-30,3,colors[BLACK] );

		
	if(color)
	{
		drawCarJ();		//Red car
	}	
	else
	{
		drawCar();		//Yellow Car
	}
	drawCar2();
	moveCar2();
	drawCar3();
	moveCar3();
	drawCar4();
	moveCar4();
	collision1();
	collision2();
	collision3();
	collision4();
	collision5();
	collision6();
	collision7();
	collision8();
	collision9();
	collision10();
	collision11();
	collision12();
	collision13();
	collision14();
	collision15();
	collision16();
	collision17();
	collision18();
	collision19();
	collision20();
	collision21();
	glutSwapBuffers(); // do not modify this line..
	
}



/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */
 void drop()
{
	DrawCircle(70,300 , 25 , colors[GREEN]);
}
void pickup()
{
	if((abs(personx1-xI)<7) || (abs(persony1-yI)<7))
	{
		personx1=999999999;
	}
	if((abs(personx2-xI)<7) || (abs(persony2-yI)<7))
	{
		personx2=999999999;
	}
	if((abs(personx3-xI)<7) || (abs(persony3-yI)<7))
	{
		personx3=999999999;
	}
}


void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...
		xI -= 10;

	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
		xI += 10;
	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {
		yI += 10;
	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {
		yI -= 10;
	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}

	if (key == 'm' || key == 'M') //Key for placing the bomb
	{
		openwindow=false;
	}
	if(key == 121)
	{
		color=false;	
	}
	if(key == 114)
	{
		color=true;	
	}
	if(key == 32)
	{
		drop();
		pickup();
		cout<<"Spacebar "<<endl;
	}
	glutPostRedisplay();
}



/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {
	t--;
	if(t==0)
	{
		exit(1);
		cout<< " ** Game Over **"<<endl;
	}
	if(openwindow)
	{
		glutDisplayFunc(menu);
	}
	else
	{
		glutDisplayFunc(GameDisplay);
	}
	// implement your functionality here
	moveCar();

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(1200, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {
	//cout << x << " " << y << endl;
	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
			cout<<"Right Button Pressed"<<endl;
			drawCar();
	}
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {

	int width = 1020, height = 840; // i have set my window size to be 800 x 600

	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("Rush Hour"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	//glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* RushHour_CPP_ */
