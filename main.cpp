#include<graphics.h>
#include<iostream>
#include<stdio.h>
#include<dos.h>
#include<fstream>
//#inclue<stdlib.h>
using namespace std;

void cloths()
{
    int y;
        y=getmaxx()/2;

        setcolor(2);
        settextstyle(6,0,2);
        outtextxy(2,52,"clothing dept.:");
        setcolor(3);
        settextstyle(3,0,2);
        outtextxy(2,75,"1.MENS WEAR");
        setcolor(3);
        settextstyle(3,0,2);
        outtextxy(2,105,"2.WOMENS WEAR");
        setcolor(3);
        settextstyle(3,0,2);
        outtextxy(2,135,"3.KIDS WEAR");



        delay(500);

}
void electronics()
{


    int y;
        y=getmaxx()/2;
        setcolor(2);
        settextstyle(6,0,2);
        outtextxy(2,194,"electronics dept.:");
        setcolor(3);
        settextstyle(3,0,2);
        outtextxy(2,217,"1.SMART PHONES");
        setcolor(3);
        settextstyle(3,0,2);
        outtextxy(2,247,"2.LAPTOPS");
        setcolor(3);
        settextstyle(3,0,2);
        outtextxy(2,277,"3.MUSIC ACCESSORIES");


        delay(500);


}
void sports()
{


    int y,z;
        y=getmaxx()/2;
        z=getmaxy();
        setcolor(2);
        settextstyle(6,0,2);


        outtextxy(2,336,"sports dept.:");
        setcolor(3);
        settextstyle(3,0,2);
        outtextxy(2,359,"1.SPORTS ACCESSORIES");
        setcolor(3);
        settextstyle(3,0,2);
        outtextxy(2,389,"2.GYM ACCESSORIES");
        setcolor(3);
        settextstyle(3,0,2);
        outtextxy(2,419,"3.SPORTS WEAR");

        delay(500);


}

void bill(int t)
{
    int y;
    char msg[128];
    y=getmaxx()/2;
    setcolor(2);
    settextstyle(6,0,4);

    outtextxy(y+2,160,"your total:");
    sprintf(msg,"%d",t);
    outtextxy(y+180,160,msg);
    //setcolor(2);
    //settextstyle(6,0,4);
    outtextxy(y+2,190,"THANK YOU");
}



void printMsg()
{
    int y;
        y=getmaxx()/2;
        setcolor(2);
        settextstyle(6,0,4);
        outtextxy(0,0,"DEPARTMENTAL STORE");
        outtextxy(y+2,52,"BILL:");

        delay(500);
}
/*void add(){
		ofstream file;
		file.open("purchasedb.txt",ios::in|ios::app);
		cout<<"\nEnter Department: ";
		cin>>;
		cout<<"Enter Item: ";
		cin>>num;
		file<<name<<"\t"<<num<<endl;
		file.close();
	}*/
	/*void graph()
	{
	    int q=50;

        line(20,20,20,400);
        line(20,400,500,400);
        line(68,400-b*q,116,c*q);
        line(116,400-c*q,164,d*q);
        line(164,400-d*q,212,f*q);
        line(212,400-f*q,260,g*q);
        line(260,400-g*q,308,h*q);
        line(308,400-h*q,356,j*q);
        line(356,400-j*q,404,k*q);
        line(404,400-k*q,452,o*q);
	}*/
int main()
{
    int x,y,z;
    int n;
    int u=0;
    int v=0,w=0,p=0;
    char s;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,o=0;
    int per=1;
    int m,t=0;
    int l;
    char ch;
    int in;
    char speak;
    int gd= DETECT,gm;
    initgraph(&gd, &gm," ");
    x=getmaxx();
    y=getmaxx()/2;
    n=getmaxy()/2;
    z=getmaxy();
    line(y,50,y,z);
    line(0,192,y,192);
     line(0,334,y,334);
    line(0,50,x,50);
    printMsg();
      cloths();
      electronics();
       sports();
       ofstream file;
        file.open("purchasedb.txt", std::ofstream::out | std::ofstream::trunc);

		//file.open("purchasedb.txt",ios::in|ios::app);

		//cout<<flush;

		while(speak='y')
        {
            system("CLS");
        cout<<"\n\n"<<"\t\t\t\t\t\t"<<"1. SHOP"<<"\n\n"<<"\t\t\t\t\t\t"<<"2. PURCHASE ANALYTICS & DEPARTMENT WISE ANALYTICS"<<"\n\n";
		cout<<"\n\n"<<"\t\t\t\t\t\t"<<"ENTER YOUR CHOICE:";
		cin>>in;
       system("CLS");
        switch(in)
        {

    case 1:
         while(per==1&&ch!='n')
    {
        if(per==0)
        {
            break;
        }
        cout<<"***************ENJOY SHOPPING *****************"<<"\n\n\n";
        cout<<"ENTER THE DEPARTMENT NO. FROM WHICH YOU WOULD LIKE TO SHOP:";
        cin>>l;
        switch(l)
        {
        case 1:
            //a++;
            cout<<"ENTER THE ITEM NO. WHICH YOU WOULD LIKE TO SHOP:";
            cin>>m;
            if(m==1)
            {
                t=t+100;
               // outfile<<"mens wear\n";
                file<<"CLOTHING DEPT."<<"\t"<<"\t"<<"Means wear"<<"\n"<<"\n";
                b++;

            }
             if(m==2)
            {
                t=t+100;
              //  outfile<<"womens wear\n";
              file<<"CLOTHING DEPT."<<"\t"<<"\t"<<"Womens wear"<<"\n"<<"\n";
              c++;

            }
             if(m==3)
            {
                t=t+100;
              //  outfile<<"kids wear\n";
              file<<"CLOTHING DEPT."<<"\t"<<"\t"<<"Kids wear"<<"\n"<<"\n";
              d++;

            }

                break;


        case 2:
            //outfile<<"ELECTRONICS DEPT.\n";
           // e++;
            cout<<"ENTER THE ITEM NO. WHICH YOU WOULD LIKE TO SHOP:";
            cin>>m;
            if(m==1)
            {
                t=t+500;
              //  outfile<<"smart phones\n";
              file<<"ELECTRONICS DEPT."<<"\t"<<"\t"<<"Smart phones"<<"\n"<<"\n";
              f++;

            }
             if(m==2)
            {
                t=t+500;
               // outfile<<"laptops\n";
               file<<"ELECTRONICS DEPT."<<"\t"<<"\t"<<"Laptops"<<"\n"<<"\n";
               g++;

            }
             if(m==3)
            {
                t=t+500;
               // outfile<<"music accessories\n";
               file<<"ELECTRONICS DEPT."<<"\t"<<"\t"<<"Music accessories"<<"\n"<<"\n";
               h++;

            }

            break;

        case 3:
            //outfile<<"SPORTS DEPT.\n";
            //i++;
            cout<<"ENTER THE ITEM NO. WHICH YOU WOULD LIKE TO SHOP:";
            cin>>m;
            if(m==1)
            {
                t=t+300;
               // outfile<<"sports accessories\n";
               file<<"SPORTS DEPT."<<"\t"<<"\t"<<"Sports accessories"<<"\n"<<"\n";
               j++;

            }
             if(m==2)
            {
                t=t+300;
                //outfile<<"gym accessories\n";
                file<<"SPORTS DEPT."<<"\t"<<"\t"<<"Gym accessories"<<"\n"<<"\n";
                k++;

            }
             if(m==3)
            {
                t=t+300;
               // outfile<<"sports wear\n"
               file<<"SPORTS DEPT."<<"\t"<<"\t"<<"Sports wear"<<"\n"<<"\n";
               o++;

            }

             break;

            case 4://cout<<"plzz enter the valid dept
                per=0;
        break;
        }
         bill(t);
        cout<<"DO YOU WANT TO CONTINUE SHOPPING?";
        cin>>ch;
    }

    //cout<<b;
    //PIE CHART..........................................................................................
            case 2:
                 cleardevice();
                 int x1=170,i;
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
 outtextxy(30, 20, " PIE CHART IS GENERATING!!!!!!!!");
outtextxy(170,180,"LOADING,PLEASE WAIT");

for(i=0;i<300;++i)
{
delay(30);
line(x1,200,x1,220);
x1++;
}

    cleardevice();

    cout<<b<<c<<d<<f<<g<<h<<j<<k<<o;
    a=b+c+d;
    e=f+g+h;
    i=j+k+o;
    u=a+e+i;
    v=(360*a)/u;
    w=(360*b)/u;
   p=(360*c)/u;
   /*
    settextstyle(BOLD_FONT,HORIZ_DIR,2);
   outtextxy(220,10,"PIE CHART");
    settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
   setfillstyle(SOLID_FILL, RED);
   pieslice(y,n, 0, v, 120);
   outtextxy(y + 140, n - 70, "CLOTHING DEPT.");
   setfillstyle(SOLID_FILL, YELLOW);
   pieslice(y, n, v, w, 120);
   outtextxy(y - 30, n - 170, "ELECTRONICS DEPT.");
   setfillstyle(SOLID_FILL, GREEN);
   pieslice(y, n, w, p, 120);
   outtextxy(y - 250, n, "SPORTS DEPT.");*/

   settextstyle(BOLD_FONT,HORIZ_DIR,2);
   outtextxy(220,10,"PIE CHART");
   /* Setting cordinate of center of circle */


   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);


   setfillstyle(SOLID_FILL, YELLOW);
   pieslice(y, n, 0, v, 120);
   outtextxy(y - 30, n - 170, "CLOTHING DEPT.(YELLOW)");

  setfillstyle(SOLID_FILL, RED);
   pieslice(y, n, v, v+w, 120);
   outtextxy(y - 250, n, "ELECTRONICS DEPT.(RED)");

   setfillstyle(SOLID_FILL, GREEN);
   pieslice(y, n, v+w, 0, 120);
   outtextxy(y, n + 150, "SPORTS DEPT.(GREEN)");
break;




   // graph();
   //graph.......................................................................................

    cleardevice();


   int q=50;
    settextstyle(BOLD_FONT,HORIZ_DIR,2);
   outtextxy(220,10,"ANALYTICS GRAPH ");
        outtextxy(400,50, "SCALE:");
        outtextxy(400, 80, "X-AXIS=48 UNITS/DEPT.");
        outtextxy(400, 110, "Y-AXIS=50 UNITS/PRODUCT");
        line(20,20,20,400);
        line(20,400,500,400);
        line(68,400-b*q,116,400-c*q);
        line(116,400-c*q,164,400-d*q);
        line(164,400-d*q,212,400-f*q);
        line(212,400-f*q,260,400-g*q);
        line(260,400-g*q,308,400-h*q);
        line(308,400-h*q,356,400-j*q);
        line(356,400-j*q,404,400-k*q);
        line(404,400-k*q,452,400-o*q);
break;
       // remove("purchasedb.txt");
       //ofs.open("test.txt", std::ofstream::out | std::ofstream::trunc);

    }
    cout<<"DO YOU WANT TO GET BACK TO MENU:";
        cin>>speak;
        }

  file.close();
    getch();
    closegraph();
    return 0;
}
