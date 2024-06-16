#include<graphics.h>
#include<iostream>
#include<cmath>
#include<ctime>

#define PI 3.1415
using namespace std;
 
int main()
{

    initwindow(700,700, "ANALOG CLOCK");
       
       int page = 0;
       while(1)
    {
	  setactivepage(page);
	      setvisualpage(1-page);
	           cleardevice();
	           setcolor(WHITE);
	           
	
        circle (210,210,195);
        circle (210,210,5);
        outtextxy(210+180*sin(PI/6)-5 , 210-180*cos(PI/6)+5 , "1" );
        outtextxy(210+180*sin(2*PI/6)-5 , 210-180*cos(2*PI/6)+5 , "2");
        outtextxy(210+180*sin(3*PI/6)-5, 210-180*cos(3*PI/6)+5 , "3");
        outtextxy(210+180*sin(4*PI/6)-5 , 210-180*cos(4*PI/6)+5 , "4");
        outtextxy(210+180*sin(5*PI/6)-5 , 210-180*cos(5*PI/6)+5 , "5");
        outtextxy(210+180*sin(6*PI/6)-5 , 210-180*cos(6*PI/6)+5 , "6");
        outtextxy(210+180*sin(7*PI/6)-10 , 210-180*cos(7*PI/6)+5 , "7");
        outtextxy(210+180*sin(8*PI/6)-5 , 210-180*cos(8*PI/6)+5 , "8");
        outtextxy(210+180*sin(9*PI/6)-5 , 210-180*cos(9*PI/6)+5 , "9");
        outtextxy(210+180*sin(10*PI/6)-5 , 210-180*cos(10*PI/6)+5 , "10");
        outtextxy(210+180*sin(11*PI/6)-5 , 210-180*cos(11*PI/6)+5 , "11");
        outtextxy(210+180*sin(12*PI/6)-5 , 210-180*cos(12*PI/6)+5 , "12");
        
        
         time_t now = time(0);
         tm *ltm =localtime(&now);
          system("cls");
         cout<<ltm->tm_hour<<" "<<ltm->tm_min;
                            
                        // Hour Hand
                        setcolor (RED);
        line(200,200,200+150*sin(ltm->tm_hour * PI/6) , 200-150*cos(ltm->tm_hour *PI/6));
        
        
		          // Minute Hand
				     setcolor(GREEN);
					 
		 line(200,200,200+160*sin(ltm->tm_min * PI/30) , 200-160*cos(ltm->tm_min *PI/30));
			   
			   //Secod Hand
			   	  setcolor(WHITE);
			   	  
        line(200,200,200+150*sin(ltm->tm_sec *PI/30) , 200-150*cos(ltm->tm_sec *PI/30));    
		
		
		     if(GetAsyncKeyState(VK_RETURN))   
			 
			 break;
			 delay(10);
			 
			 page = 1-page;                
}
 
   
    closegraph() ;
    return 0;
}
