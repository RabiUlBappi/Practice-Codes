#include <windows.h>
#include<gl/glut.h>
#include<gl/glu.h>
#include<gl/gl.h>
#include<iostream>

using namespace std;
int xc=0,yc=0,a=60,b=30;

void display()
{
     float asq=a*a;
     float bsq=b*b;

     float x=0,y=b,p;
     float px=0,py=2*asq*y;

     glClear(GL_COLOR_BUFFER_BIT);
     glPointSize(1);
     glBegin(GL_POINTS);
     glVertex2i(xc+x,yc+y);
     glVertex2i(-(xc+x),-(yc+y));
     cout<<xc+x<<" "<<yc+y<<endl;


     //region 1
     p=bsq-(asq-b)+(0.25*asq);
     while(px<py)
     {
      x++;
      px=px+2*bsq;
      if(p<0) p=p+bsq+px;
      else
      {
           y--;
           py=py-2*asq;
           p=p+bsq+px-py;
      }
         glVertex2i(xc+x,yc+y);
         glVertex2i(xc+x,-(yc+y));
         glVertex2i(-(xc+x),yc+y);
         glVertex2i(-(xc+x),-(yc+y));

         cout<<xc+x<<" "<<yc+y<<endl;
     }

    //region 2
    p=bsq*(x+0.5)*(x+0.5) + asq*(y-1)*(y-1) -asq*bsq;
    while(y>0)
    {
      y--;
      py=py-2*asq;
      if(p>0)
      {
           p=p+asq-py;
      }
      else
      {
           x++;
           px=px+2*bsq;
           p=p+asq-py+px;
      }

     glVertex2i(xc+x,yc+y);
     glVertex2i(xc+x,-(yc+y));
     glVertex2i(-(xc+x),yc+y);
     glVertex2i(-(xc+x),-(yc+y));

    cout<<xc+x<<" "<<yc+y<<endl;
    }
     glEnd();
     glFlush();
}
void init()
{
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
     gluOrtho2D(-100,100,-100,100);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Mid Point Ellipse Algorithm ");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
