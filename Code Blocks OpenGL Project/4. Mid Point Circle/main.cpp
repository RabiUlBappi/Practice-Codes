#include <windows.h>
#include <stdio.h>
#include<GL/glut.h>
#include <GL/gl.h>
#include<stdlib.h>
#define ROUND(x) ((int)(x+0.5))


int pntX1, pntY1, r;

void plot(int x, int y)
{
	glBegin(GL_POINTS);
	glVertex2i(x+pntX1, y+pntY1);
	glEnd();
}


void myInit (void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}


void midPointCircleAlgo()
{
	int x = 0;
	int y = r;
	float decision = 5/4 - r; //Po = 1 -r
	plot(x, y);

	while (y > x)
	{
		if (decision < 0)
		{
			x++;
			decision += 2*x+1; //Pk+1 = Pk + 2Xk+1 +1
		}
		else
		{
			y--;
			x++;
			decision += 2*(x-y)+1; //pk+1 = pk + 2xk+1 + 1 – 2yk+1
		}
		plot(x, y);
		plot(x, -y);
		plot(-x, y);
		plot(-x, -y);
		plot(y, x);
		plot(-y, x);
		plot(y, -x);
		plot(-y, -x);
	}

}

void myDisplay(void)
{
	glClear (GL_COLOR_BUFFER_BIT);
	glColor3f (0.0, 0.0, 0.0);
	glPointSize(1.0);

	midPointCircleAlgo();

	glFlush ();
}

int main(int argc, char** argv)
{
	printf("Enter the coordinates of the center:\n\n");

	printf("X   : "); scanf("%d",&pntX1);
	printf("\nY : "); scanf("%d",&pntY1);
	printf("\nRadius? : "); scanf("%d",&r);


	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (640, 480);
	glutInitWindowPosition (100, 150);
	glutCreateWindow ("MidPoint Circle Alogrithms");
	glutDisplayFunc(myDisplay);
	myInit ();
	glutMainLoop();

}
