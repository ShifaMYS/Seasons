#include<GL/glut.h>
#include<stdio.h>

GLfloat x=0.7,y=0.9,z=1.0,l1=1.0,l2=1.0,l3=1.0,w1=0.9,w2=0.7,w3=0.6,uw1=0.7,uw2=0.5,uw3=0.2;
GLfloat bw1=0.7,bw2=0.7,bw3=0.9;
char mode='d';
void sky()
{


        glBegin(GL_POLYGON);
        glColor3f(x,y,z);
        glVertex2f(0.0,80.0);
        glVertex2f(800.0,80.0);
        glVertex2f(800.0,500.0);
        glVertex2f(0.0,500.0);
        glEnd();
        glFlush();

}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //sky
    sky();


    //Road
 glColor3f(0.0, 0.0, 0.0);
 glBegin(GL_POLYGON);
  glVertex2f(0.0,0.0);
  glVertex2f(500.0,0.0);
  glVertex2f(500.0,80.0);
   glVertex2f(0.0,80.0);
 glEnd();

 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
  glVertex2f(60.0,36.0);
  glVertex2f(80.0,36.0);
  glVertex2f(80.0,44.0);
  glVertex2f(60.0,44.0);
 glEnd();

 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
  glVertex2f(120.0,36.0);
  glVertex2f(140.0,36.0);
  glVertex2f(140.0,44.0);
  glVertex2f(120.0,44.0);
 glEnd();

 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
  glVertex2f(180.0,36.0);
  glVertex2f(200.0,36.0);
  glVertex2f(200.0,44.0);
   glVertex2f(180.0,44.0);
 glEnd();

  glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
  glVertex2f(240.0,36.0);
  glVertex2f(260.0,36.0);
  glVertex2f(260.0,44.0);
   glVertex2f(240.0,44.0);
 glEnd();

 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
  glVertex2f(300.0,36.0);
  glVertex2f(320.0,36.0);
  glVertex2f(320.0,44.0);
  glVertex2f(300.0,44.0);
 glEnd();

 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
  glVertex2f(360.0,36.0);
  glVertex2f(380.0,36.0);
  glVertex2f(380.0,44.0);
   glVertex2f(360.0,44.0);
 glEnd();

   glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
  glVertex2f(420.0,36.0);
  glVertex2f(440.0,36.0);
  glVertex2f(440.0,44.0);
   glVertex2f(420.0,44.0);
 glEnd();

  glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
  glVertex2f(480.0,36.0);
  glVertex2f(500.0,36.0);
   glVertex2f(500.0,44.0);
   glVertex2f(480.0,44.0);
 glEnd();

 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
  glVertex2f(540.0,36.0);
  glVertex2f(560.0,36.0);
   glVertex2f(560.0,44.0);
   glVertex2f(540.0,44.0);
 glEnd();

 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
  glVertex2f(600.0,36.0);
  glVertex2f(620.0,36.0);
   glVertex2f(620.0,44.0);
   glVertex2f(600.0,44.0);
 glEnd();

 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
  glVertex2f(660.0,36.0);
  glVertex2f(680.0,36.0);
   glVertex2f(680.0,44.0);
   glVertex2f(660.0,44.0);
 glEnd();
    //House and compound
        //Top roof
        glBegin(GL_POLYGON);
        glColor3f(1.0,0.2,0.2);
            glVertex2i(220,300+80);
            glVertex2i(340,240+80);
            glVertex2i(340,250+80);
            glVertex2i(220,310+80);
            glVertex2i(100,250+80);
            glVertex2i(100,240+80);
        glEnd();

        //Bottom roof
         glBegin(GL_POLYGON);
         glColor3f(1.0,0.2,0.2);
            glVertex2i(240,220+80);
            glVertex2i(420,160+80);
            glVertex2i(420,170+80);
            glVertex2i(240,230+80);
            glVertex2i(60,170+80);
            glVertex2i(60,160+80);
        glEnd();

        //top room
         glBegin(GL_POLYGON);
        glColor3f(0.2,1.0,0.4);
            glVertex2i(240,230+80);
            glVertex2i(320,205+80);
            glVertex2i(320,250+80);
            glVertex2i(220,300+80);
            glVertex2i(120,250+80);
            glVertex2i(120,190+80);
        glEnd();

        //top window

         glBegin(GL_POLYGON);
         glColor3f(0.5,0.2,0.0);
            glVertex2i(160,260+80);
            glVertex2i(270,260+80);
            glVertex2i(260,270+80);
            glVertex2i(170,270+80);

        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(uw1,uw2,uw3);
            glVertex2i(162,218+80);
            glVertex2i(200,218+80);
            glVertex2i(220,225+80);
            glVertex2i(220,260+80);
            glVertex2i(162,260+80);
        glEnd();
        // top window pattern
        glLineWidth(1);
        glBegin(GL_LINES);
            glColor3f(0.0,0.0,0.0);
            glVertex2i(162,250+80);
            glVertex2i(220,250+80);
            glEnd();
         glBegin(GL_LINES);
            glColor3f(0.0,0.0,0.0);
            glVertex2i(162,240+80);
            glVertex2i(220,240+80);
            glEnd();
          glBegin(GL_LINES);
            glColor3f(0.0,0.0,0.0);
            glVertex2i(162,230+80);
            glVertex2i(220,230+80);
            glEnd();

         glBegin(GL_POLYGON);
        glColor3f(w1,w2,w3);
            glVertex2i(220,260+80);
            glVertex2i(220,240+80);
            glVertex2i(220,225+80);
            glVertex2i(240,230+80);
            glVertex2i(260,225+80);
            glVertex2i(260,260+80);
        glEnd();

        //bottom room
         glBegin(GL_POLYGON);
        glColor3d(1.0,1.0,0.9);
            glVertex2i(260,0+80);
            glVertex2i(360,0+80);
            glVertex2i(360,80+80);
            glVertex2i(400,80+80);
            glVertex2i(400,167+80);
            glVertex2i(240,220+80);
            glVertex2i(80,167+80);
            glVertex2i(80,80+80);
            glVertex2i(260,80+80);
        glEnd();

        //bottom window
        glBegin(GL_POLYGON);
         glColor3f(0.3,0.4,0.5);
            glVertex2i(100,150+80);
            glVertex2i(220,150+80);
            glVertex2i(210,160+80);
            glVertex2i(110,160+80);
        glEnd();

        glBegin(GL_POLYGON);
         glColor3f(0.7,0.4,0.0);
            glVertex2i(110,140+80);
            glVertex2i(210,140+80);
            glVertex2i(210,150+80);
            glVertex2i(110,150+80);
        glEnd();

        glBegin(GL_POLYGON);
         glColor3f(0.7,0.4,0.2);
            glVertex2i(110,80+80);
            glVertex2i(210,80+80);
            glVertex2i(210,140+80);
            glVertex2i(110,140+80);
        glEnd();
        glBegin(GL_POLYGON);
         glColor3f(bw1,bw2,bw3);
            glVertex2i(120,80+80);
            glVertex2i(200,80+80);
            glVertex2i(200,130+80);
            glVertex2i(120,130+80);
        glEnd();
        glLineWidth(1);
        glBegin(GL_LINES);
            glColor3f(0.1,0.3,0.4);
            glVertex2i(160,80+80);
            glVertex2i(160,130+80);
        glEnd();

        //door

        glBegin(GL_POLYGON);
         glColor3f(0.6,0.3,0.2);
            glVertex2i(250,150+80);
            glVertex2i(370,150+80);
            glVertex2i(360,160+80);
            glVertex2i(260,160+80);
        glEnd();
        glBegin(GL_POLYGON);
         glColor3f(0.9,0.6,0.0);
            glVertex2i(250,150+80);
            glVertex2i(250,140+80);
            glVertex2i(370,140+80);
            glVertex2i(370,150+80);
        glEnd();

        glBegin(GL_POLYGON);
         glColor3f(0.3,0.0,0.0);
            glVertex2i(270,140+80);
            glVertex2i(270,0+80);
            glVertex2i(350,0+80);
            glVertex2i(350,140+80);
        glEnd();
        glBegin(GL_POLYGON);
            glColor3f(1.0,1.0,1.0);
            glVertex2i(280,145);
            glVertex2i(290,145);
            glVertex2i(290,165);
            glVertex2i(280,165);
            glEnd();


        //compound
        glBegin(GL_POLYGON);
         glColor3f(0.9,0.2,0.1);
            glVertex2i(60,80+80);
            glVertex2i(60,0+80);
            glVertex2i(260,0+80);
            glVertex2i(260,80+80);
        glEnd();
        glBegin(GL_POLYGON);
          glColor4f(0.9,0.2,0.1,1.0);
            glVertex2i(360,80+80);
            glVertex2i(460,80+80);
            glVertex2i(460,0+80);
            glVertex2i(360,0+80);
        glEnd();

        //compound wall design
        glLineWidth(1);
        

        glBegin(GL_LINES);
            glColor3f(0.0,0.0,0.0);
            glVertex2d(100,80);
            glVertex2d(100,160);
        glEnd();

        glBegin(GL_LINES);
            glColor3f(0.0,0.0,0.0);
            glVertex2d(140,80);
            glVertex2d(140,160);
        glEnd();

        glBegin(GL_LINES);
            glColor3f(0.0,0.0,0.0);
            glVertex2d(180,80);
            glVertex2d(180,160);
        glEnd();

        glBegin(GL_LINES);
            glColor3f(0.0,0.0,0.0);
            glVertex2d(220,80);
            glVertex2d(220,160);
        glEnd();

        glBegin(GL_LINES);
            glColor3f(0.0,0.0,0.0);
            glVertex2d(380,80);
            glVertex2d(380,160);
        glEnd();

        glBegin(GL_LINES);
            glColor3f(0.0,0.0,0.0);
            glVertex2d(420,80);
            glVertex2d(420,160);
        glEnd();

        glBegin(GL_LINES);
            glColor3f(0.0,0.0,0.0);
            glVertex2d(460,80);
            glVertex2d(460,160);
        glEnd();

         glBegin(GL_LINES);
            glColor3f(0.0,0.0,0.0);
            glVertex2d(60,100);
            glVertex2d(260,100);
        glEnd();

         glBegin(GL_LINES);
            glColor3f(0.0,0.0,0.0);
            glVertex2d(60,120);
            glVertex2d(260,120);
        glEnd();

         glBegin(GL_LINES);
            glColor3f(0.0,0.0,0.0);
            glVertex2d(60,140);
            glVertex2d(260,140);
        glEnd();

         glBegin(GL_LINES);
            glColor3f(0.0,0.0,0.0);
            glVertex2d(360,100);
            glVertex2d(460,100);
        glEnd();

         glBegin(GL_LINES);
            glColor3f(0.0,0.0,0.0);
            glVertex2d(360,120);
            glVertex2d(460,120);
        glEnd();

         glBegin(GL_LINES);
            glColor3f(0.0,0.0,0.0);
            glVertex2d(360,140);
            glVertex2d(460,140);
        glEnd();



            //street light
         glBegin(GL_POLYGON);
            glColor3f(0.1,0.1,0.1);
            glVertex2i(26,80);
            glVertex2i(32,80);
            glVertex2i(32,260);
            glVertex2i(26,260);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3f(0.1,0.1,0.1);
            glVertex2i(10,220+80);
            glVertex2i(30,240+80);
            glVertex2i(50,220+80);
            glEnd();

        glBegin(GL_POLYGON);
            glColor3f(l1,l2,l3);
            glVertex2i(20,180+80);
            glVertex2i(38,180+80);
            glVertex2i(50,220+80);
            glVertex2i(10,220+80);
            glEnd();
            glLineWidth(1);






        //street light
         glBegin(GL_POLYGON);
            glColor3f(0.1,0.1,0.1);
            glVertex2i(520,80);
            glVertex2i(530,80);
            glVertex2i(530,260);
            glVertex2i(521,260);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3f(0.1,0.1,0.1);
            glVertex2i(455+90,220+80);
            glVertex2i(440+90,240+80);
            glVertex2i(420+90,220+80);
            glEnd();

        glBegin(GL_POLYGON);
            glColor3f(l1,l2,l3);
            glVertex2i(425+90,180+80);
            glVertex2i(450+90,180+80);
            glVertex2i(455+90,220+80);
            glVertex2i(420+90,220+80);
            glEnd();
            glLineWidth(1);
        

        //Tree
        glColor3f(0.2,0.0,0.0);
        glBegin(GL_POLYGON);
        glVertex2d(630,160);
        glVertex2d(630,80);
        glVertex2d(650,80);
        glVertex2d(650,160);
        glEnd();

        glColor3f(0.0,0.5,0.0);
        glBegin(GL_TRIANGLES);

            glVertex2d(560,160);
            glVertex2d(720,160);
            glVertex2d(640,220);

        glEnd();
        glColor3f(0.0,0.5,0.0);
        glBegin(GL_TRIANGLES);

            glVertex2d(570,200);
            glVertex2d(700,200);
            glVertex2d(640,250);

        glEnd();

        glColor3f(0.0,0.5,0.0);
        glBegin(GL_TRIANGLES);

            glVertex2d(590,240);
            glVertex2d(690,240);
            glVertex2d(640,280);

        glEnd();



 glFlush();


}

void rain()
{
   display();

    glColor3d(0,1,0);

    for(int i=1;i<=100;i++)
    {
        int x=rand(),y=rand();
        x%=740; y%=500;
        glLineWidth(1);
        glBegin(GL_LINES);
        glColor3f(1.0,1.0,1.0);
        glVertex2d(x,y);
        glVertex2d(x-2,y+7);
        glEnd();
        glFlush();

        if(y<=80)
        {
            glBegin(GL_LINES);
            glColor3f(1.0,1.0,1.0);
            glVertex2d(x-5,y);
            glVertex2d(x-7,y+3);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(1.0,1.0,1.0);
            glVertex2d(x+5,y);
            glVertex2d(x+7,y+3);
            glEnd();
        }

        glFlush();
    }

}

void snow()
{

    glColor3d(0,1,0);
    for(int i=1;i<=100;i++)
    {
        int x=rand(),y=rand();
        x%=740; y%=500;
        glLineWidth(3);
        glBegin(GL_LINES);
        glColor3f(1.0,1.0,1.0);
        glVertex2d(x,y);
        glVertex2d(x,y+1);
        glEnd();
        glFlush();
    }

}

void keyboard(unsigned char key,int a,int b)
{
    if(key=='n' || key=='N')
    {

        mode='n';
        x=0.0;
        y=0.0;
        z=0.0;
        l1=1.0;
        l2=1.0;
        l3=0.5;
        bw1=1.0,bw2=1.0,bw3=0.5;
        w1=1.0,w2=1.0,w3=0.5,uw1=1.0,uw2=1.0,uw3=0.5;
        display();
    }
    if(key=='d'|| key=='D')
    {
        mode='d';
       x=0.7,y=0.9,z=1.0;bw1=0.7,bw2=0.7,bw3=0.9;
       l1=1.0,l2=1.0,l3=1.0 ,w1=0.9,w2=0.7,w3=0.6,uw1=0.7,uw2=0.5,uw3=0.2;
        display();
    }
    if(key=='r'|| key=='R')
    {
         while (!(GetAsyncKeyState('E')||GetAsyncKeyState('e')||GetAsyncKeyState('d')||GetAsyncKeyState('D')||GetAsyncKeyState('n')||GetAsyncKeyState('N')||GetAsyncKeyState('s')||GetAsyncKeyState('S')) )
          {
              if(mode=='d')
             {
                x=0.5;y=0.5;z=0.5;
             }
              rain();
              Sleep(60);
          }

    }
    if(key=='s'|| key=='S')
    {
       

         while (!(GetAsyncKeyState('e')||GetAsyncKeyState('E')||GetAsyncKeyState('d')||GetAsyncKeyState('D')||GetAsyncKeyState('n')||GetAsyncKeyState('N')||GetAsyncKeyState('r')||GetAsyncKeyState('R')) )
         {
             if(mode=='d')
             {
                 x=0.3;y=0.6;z=1.0;
             }
             display();
             snow();
             Sleep(300);
            }}
    if(key=='e' || key=='E')
        exit(0);

}



int main(int argc, char **argv)
{

 glutInit(&argc, argv);
 glutInitDisplayMode ( GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);

 glutInitWindowPosition(0,0);
 glutInitWindowSize(740,500);
 glutCreateWindow ("Seasons");

 glClearColor(0.0, 0.0, 0.0, 0.0);         // black background
 glMatrixMode(GL_PROJECTION);              // setup viewing projection
 glLoadIdentity();                           // start with identity matrix
 glOrtho(0.0, 740.0, 0.0, 500.0, -1.0, 1.0);
 glutKeyboardFunc(keyboard);  // setup a 10x10x2 viewing world

 glutDisplayFunc(display);
 glutMainLoop();

 return 0;
}

