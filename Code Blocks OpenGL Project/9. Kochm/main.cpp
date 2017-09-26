#include <windows.h>
#include <GL/glut.h>
#include <math.h>

GLfloat currentX=-0.7,currentY=0.5;

void drawkoch(GLfloat degree,GLfloat len,GLint iter) {
	GLdouble degreeRad = 0.0174533 * degree;
	GLfloat newX = currentX + len * cos(degreeRad);
	GLfloat newY = currentY + len * sin(degreeRad);
	if (iter==0) {
		glVertex2f(currentX, currentY);
		glVertex2f(newX, newY);
		currentX = newX;
		currentY = newY;
	}
	else {
		iter--;
		//draw the four parts of the side _/\_
		drawkoch(degree, len, iter);
		degree += 60.0;
		drawkoch(degree, len, iter);
		degree -= 120.0;
		drawkoch(degree, len, iter);
		degree += 60.0;
		drawkoch(degree, len, iter);
	}
}

void mydisplay(){
	 glClear( GL_COLOR_BUFFER_BIT );
	 glBegin(GL_LINES);
	 glColor3f(1.0, 1.0, 0.0); // yollow

	 //call drawkoch 3 times, one for each side of the triangle, changing direction each time

	 drawkoch(0.0,0.1,2);
	 drawkoch(-120.0, 0.1, 2);
	 drawkoch(120.0,0.1,2);
	 glEnd();
	 glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Koch Curve 1204028");
	glutDisplayFunc(mydisplay);
	glutMainLoop();
}
