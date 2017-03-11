 #include<fstream.h>
#include<dos.h>
  #include<iomanip.h>
  #include<iostream.h>
       #include<conio.h>
       #include<stdlib.h>
       #include<string.h>
       #include<stdio.h>
       #include<graphics.h>
       #include<time.h>
       #include<process.h>

       void main()
	      {

 int gd=DETECT,gm;
 char name[40],s1[3],rac[10],rac1[10],rac2[10],j1[2],answer[10],hlnh2[10],hlnh[10],cash1[10],s2[2],cx[10];
 initgraph(&gd,&gm,"d:\\tc\\bgi");
 int hl1=1,hl2=2,hl3=1,fl=0;
  int xmax, ymax;
 unsigned long cash=1;
 int temp,r[4],ra,k1,i[15],ka,j,k,x,hln=4;
 char ll,a[33][150]={"who is the current secretary general of the UN?","out of these which is the symbol present on the bharat ratna?","out of these who was taken out of power due to protests at tahrir square??","which indian cricketter was awarded the arjuna award in august 2011?","who is the chairman of the ipl?","what was known artist pablo picasso's nationality?","whose birthday is celebrated as national youth day in india?","how many languages feature on the language panel of A RS.10 INDIAN NOTE?","which of these is a name of a finger on your hand??","painter M.F hussain accepted the citizenship of which country in 2010??","which day is celebrated as martyr's day?","which of these gods is believed to be a 'bal brahmachari'?"                                                                                                                               //for choosing any questions out of the
		    ,"to which country does singer shakira belong??","how may faces does a dodecahedron have?","if we mix saffron to milk,then what color will the milk turn to?","who started the well known eatery KFC?","in which country will the 2014 FIFA WORLD CUP and 2016 olympic games be held?","which is the largest passenger airliner in the world?","which mountain was formerly known as peak 15?","which year in the western calender marks the beginning of the saka era?","which of these businessmen was a french citizen by birth?","how many pair of ribs does a human body usually have?","out of these who has had the longest tenure as prime minister?","who was the first woman to score a century in international T20 cricket?","which of these states shares its border with only one other indian state?","whose birthday is celebrated as engineers day in india?"// given ones
		    ,"what was purchased by vijay mallya in 2009 from an auction in New york?","which of these isnt a classical language?","where was snooker invented?","which of these pairs have been members of the rajya sabha?","which of the following is not a bear?","what does kesari mean in 'punjab kesari'-a popular title of lala lajpat rai?","what is the capital of syria?"};//
 char askme[18]={"HAHAHA EASY ONE!!"};
 char b[132][45]={"baan ki moon","indrajeet","kofi annan","barrack obama","moon","sun","lotus","horse","pervez musharraf","muammar gaddafi","hosni mubarak","silvio berlusconi","Yuvraj Singh","sachin tendulkar","MS Dhoni","Zaheer Khan","rajeev shukla","lalit modi","sharad powar","shashank manohar","English","Spain","France","Italy","bhagat singh","raja ram mohan roy","swami vivekananda","rabindranath tagore","18","10","12","15","anamika","avantika","ananya","aditi","oman","qatar","UAE","bahrain","14 april","1 may","30 january","12th may","ganesha","rama","vishnu","hanuman","colombia","south africa","USA","Puerto rico","10","12","20","16","pink","red","yellow","green","Sam Walton","johann mathews","fred dickinson","col. harland sanders","Brazil","portugal","england","greece","boeing 767","airbus A380","ilyushin IL-96","boeing 787","mount rushmore","kanchenjunga","mount everest","k2","78 B.C","A.D.1757","A.D.1947","A.D.78","JRD Tata","jamshetji tata","jamsetji jejeebhoy","neville wadia","6","12" //for choosing
		  ,"8","10","indira gandhi","atal bihari vajpayee","jawaharlal nehru","manmohan singh","cordel jack","shanel daley","stacy-ann king","deandra dottin","sikkim","jammu and kashmir","tripura","himachal pradesh","APJ abdul kalam","M visvesvarayya","soren krisitian tourbo","John C.Gammon","Ranjit Singh's crown","kohinoor diamond","gandhi memorabilia","sword of tipu sultan","greek","latin","sanskrit","dutch","India","USA","russia","UK","rajesh khanna,dimple kapadia","javed akhtar,shabana azmi","hema malini,dharmendra","sunil and nargis dutt","polar","sloth","panda","grizzly","gold","father","light","lion","damascus","amman","riyadh","beirut"};                                                                                                                                                                                                                                                                                                      //      answers to respective questions from the following ones
 char ans;
		ofstream fout("BRAINBOXER!.TXT",ios::app);//opening file
		int midx=getmaxx()/2,midy=getmaxy()/2;




		fout<<"NAME OF PLAYER"<<setw(50)<<"FINAL AMT OF CASH"<<endl;//writing to the file
     {for(int i=midx;i>=0;i--)           	//for  welcome screen
{delay(5);                      //
cleardevice();                    //
arc(midx-i,midy+50,90,270 ,170);    ///
arc(midx-i,midy+50,90,270,130);        //
arc(midx-i,midy+50,90,270,30);           //
					   //
arc(midx+i,midy+50,270,90 ,170);             //
arc(midx+i,midy+50,270,90,130);                //
arc(midx+i,midy+50,270,90,30);                 ///
}                                             //
delay(1);                                    //
					    //
					     //
					 //
delay(10);                                //

    circle(midx,midy+50,170);             //

circle(midx,midy+50,130);                 //
circle(midx,midy+50,30);                    //
setfillstyle(1,15);                        //
floodfill(319,289,midx);                    //
setfillstyle(10,1);                         //
floodfill(1,51,midx);                       //
setfillstyle(2,14) ;                        //
floodfill(160,250,midx);                    //
setfillstyle(10 ,5);                         //
floodfill(280,256,midx);                     //
setcolor(WHITE);                             //
settextstyle(8,0,5);                         //
outtextxy(midx-120,midy-240,"WELCOME!!");     //
delay(200);                                   //
outtextxy(midx-30,midy-200,"TO");              //
delay(400);                                     //
settextstyle(7,0,6);                            //
setcolor(MAGENTA);                            //
outtextxy(midx-190,midy-80,"KAUN BANEGA");    //
delay(500);                                   //
setcolor(2 );                                  //
outtextxy(midx-156 ,midy+17,"CROREPATI!!");    //
						//
delay(2000);                                     //
						  //
    }                                              //
						    //
	 {   hln=4;     hl1=1;hl2=2,hl3=1;
	 setcolor(YELLOW);
	 cash=1;
	  cleardevice();

	  settextstyle(1,0,2);
	  rectangle(0,0,midx*2,midy-100);
       outtextxy(1,1,"BEFORE STARTING,PLEASE DO SUBMIT YOUR NAME!"); //for inputting the name of player
       gotoxy(1,20);
       gets(name);

       cleardevice();
       settextstyle(7,0,1);
       outtextxy(1,1,"RULES UP NEXT!!!");
       outtextxy(1,20,"IF YOU ALREADY KNOW THEM,PRESS S/s TO SKIP");//for asking to continue with rules or skip?
       outtextxy(1,40,"OTHERWISE PRESS ANY OTHER CHARACTER!!!!"); //
       gotoxy(1,5);
       ans=getche();
       if((ans!='s')&&(ans!='S'))
       { fl=1;}
	      else
       { fl=0;}
       if(fl==1)
       {
       cleardevice();
       char hl[3][100]={"ASK ME","50:50","POLL"};   //rules
       settextstyle(1,0,1);                     //
       setcolor(14);                             //
       outtextxy(1,1,"The rules are simple!");    ///
       outtextxy(10,20,"To begin with,there are 15 Questions!");//
       outtextxy(1,40,"You have to answer all the questions to reach to 5 CRORES!");//
       outtextxy(3,60,"Secondly,you have 3 LIFELINES:-(Press any key)");//
       getch();//
       cleardevice();//
       setcolor(15);//
       for(int z=0;z<3;z++)//
       {//
       itoa(z+1,s1,10);//
	outtextxy(1,20*z,s1);//
	outtextxy(15,20*z,".");//
	outtextxy(30,20*z,hl[z]);//
	       }//
    again:        //
    {   outtextxy(3,100,"1.Ask Me:");//
       outtextxy(20,120,"Choosing this,you will be taking the advice of the system ");//
       outtextxy(3,140,"2.50:50:");//
       outtextxy(20,160,"Two incorrect options will be deleted from the given options!");//
       outtextxy(20,180,"This is the only lifeline that can be used twice");               //
       outtextxy(3,200,"3.Poll:");//
       outtextxy(20,220,"The system will show poll for the correctness of each answer!");//
       outtextxy(20,240,"(Careful!may be incorrect sometimes!!)");//
	   outtextxy(20,260,"If you answer all 15 Questions,");     //
       outtextxy(20,280,"You will be the winner of 5 CRORES!");//
       outtextxy(20,300,"Every lifeline can be used only once except 50:50.");//
       outtextxy(20,320,"You can use only 1 lifeline per Question");///
								       //
       outtextxy(7,340,"SO SHALL WE BEGIN??(Y/N)"); //for beginning with the game or exitting?
       }
       char a1;
       gotoxy(1,25);
       a1=getche();

if(a1=='y'||a1=='Y')
{fl=0;  //in case wish is to start with the game
ka=0;}

else if(a1=='n'||a1=='N')                       //in case of quitting
{cleardevice();            //
outtextxy(1,360,"THANK YOU!!PLEASE DO VISIT US AGAIN!!");//
getch();                                                   //
exit(0);                                                     //
       }
       else goto again;


       }
	 else
	 {ka=0;}

	    while(ka==0)
	    {     randomize();                                //beginning of the game
       outtextxy(1,360,"OKAY THEN!!PRESS ANY KEY TO BEGIN OUR JOURNEY OF KBC!!");    //
       getch();                                                                        //
       cleardevice();                                                                    //
		    setcolor(14);     //side rules
       outtextxy(1,0,"AT ANY POINT OF TIME IF YOU WANT THE HELP OF LIFELINES");            //
       outtextxy(1,20,"ENTER (5) AND THEN ENTER");                                           //
       settextstyle(3,0,1);//
       setcolor(GREEN);//
       outtextxy(1,40,"(A) FOR ASK ME");   //
       outtextxy(1,60,"(S) FOR 50:50 ");     //
       outtextxy(1,80,"(D) FOR POLL");         //
       setcolor(RED);                     //       //
       outtextxy(1,100,"FOR QUTTING THE GAME,YOU MUST PRESS (0)");//
       setcolor(15);//
       outtextxy(1,120,"Once you have decided to take a lifeline,");//
       outtextxy(1,140,"You cannot change that decision");//
       outtextxy(1,160,"You cannot quit after using a lifeline");//
       gotoxy(1,20);//
       getch();//



       cleardevice();
	     settextstyle(15,0,1);
       for(int l=0;l<15;l++)       //code for choosing any 15 different and random questions
       {
	setcolor(WHITE);        //

       cleardevice();             //
       setcolor(BLUE);            //
       line(30,15,600,15); //for question box
    line(30,35,600,35);//
    line(30,15,0,25);//
    line(0,25,30,35);//
    line(635,25,600,15);//
     line(635,25,600,35);//
     itoa(l+1,s2,10);//
       settextstyle(15,0,1);//
       setcolor(WHITE);//
       outtextxy(1,0,"QUESTION ");//
       delay(10);//
       outtextxy(90,0,s2);      //question no
       outtextxy(120,0,"!!FOR RS.");//
    delay(50);//
       if(cash==1)                  //for what amount//
       {////
       outtextxy(210,0,"5,000!");//
}//
else if(cash==2)//
{outtextxy(210,0,"10,000!");//
}//
//
else if(cash==3)//
{outtextxy(210,0,"20,000!");//
}//
else if(cash==4)//
{outtextxy(210,0,"40,000!");//
}///
else if(cash==5)//
{outtextxy(210,0,"80,000!");//
}//
else if(cash==6)//
{outtextxy(210,0,"1,60,000!!");//
}//
else if(cash==7)//
{outtextxy(210,0,"3,20,000!!");//
}//
else if(cash==8)//
{outtextxy(210,0,"6,40,000!!");//
}//
else if(cash==9)//
{outtextxy(210,0,"12,50,000!!");//
}//
else if(cash==10)//
{outtextxy(210,0,"25 lakhs!!");//
}//
else if(cash==11)
{outtextxy(210,0,"50 lakhs!!");//
}//
else if(cash==12)//
{outtextxy(210,0,"1 Crore!!!");//
}//
else if(cash==13)//
{outtextxy(210,0,"2 Crores!!!");//
}//
else if(cash==14)//
{outtextxy(210,0,"4 Crores!!!");//
}
else//
{outtextxy(210,0,"5 Crores!!!!");}//
randomize();//
       x=random(33);       //code for always choosing different questions//
       int flag;            //
       do                     //
       {                        //
       flag=1;                    //
       x=random(33);//
       {//
       for(int no=0;no<l;no++)//
       {//
       if(i[no]==x)//
       flag=0;//
       }//
       }//
       }//
       while(flag==0);//
       i[l]=x;//
       outtextxy(20,20,a[i[l]]);///
///
	   for(j=0;j<4;j++)        //for displaying options//
       {//
	 itoa(j+1,j1,10);//
//
       if(j>1)//
       {               setcolor(BLUE);//
    line(20+(317*(j%2)),55,297+(317*(j%2)),55);        //option boxes//
    line(0+(317*(j%2)),65,20+(317*(j%2)),55);//
    line(0+(317*(j%2)),65,20+(317*(j%2)),75);//
    line(20+(317*(j%2)),75,297+(317*(j%2)),75);////
   line(317+(317*(j%2)),65,297+(317*(j%2)),55);//
    line(317+(317*(j%2)),65,297+(317*(j%2)),75);//
				      setcolor(WHITE);//
//
       outtextxy(40+(300*(j%2)),60,j1);//
       outtextxy(50+(300*(j%2)),60,". ");//
       outtextxy(60+(300*(j%2)),60,b[i[l]*4+j]);//
	}//
	else//
	{                                           setcolor(BLUE);//
	  line(20+(317*(j%2)),35,297+(317*(j%2)),35);////
    line(0+(317*(j%2)),45,20+(317*(j%2)),35);///
    line(0+(317*(j%2)),45,20+(317*(j%2)),55);//
    line(20+(317*(j%2)),55,297+(317*(j%2)),55);//
   line(317+(317*(j%2)),45,297+(317*(j%2)),35);//
    line(317+(317*(j%2)),45,297+(317*(j%2)),55);//
					     setcolor(WHITE);//
//
       outtextxy(40+(300*(j%2)),40,j1);//
       outtextxy(50+(300*(j%2)),40,". ");//
       outtextxy(60+(300*(j%2)),40,b[i[l]*4+j]);// options
	 }   }//
	 delay(400);//
outtextxy(1,80,"enter choice");//
gotoxy(1,8);                               //inputting choice
cin>>k;
if(k==0)                                              //in case of qutting
{setcolor(RED);                                         //
delay(100);                                               //
settextstyle(1,0,1);                                        //
outtextxy(1,140,"YOU HAVE DECIDED TO QUIT ON RS.");           //
  if(cash==1)                                                 //
       {                                                        //
       outtextxy(360,140,"5,000");                              //
}                                                                 //
else if(cash==2)//
{outtextxy(360,140,"10,000");//
}//
else if(cash==3)//
{outtextxy(360,140,"20,000");//
}//
else if(cash==4)//
{outtextxy(360,140,"40,000");//
}//
else if(cash==5)///
{outtextxy(360,140,"80,000");//
}//
else if(cash==6)//
{outtextxy(360,140,"1,60,000");//
}//
else if(cash==7)//
{outtextxy(360,140,"3,20,000");//
}//
else if(cash==8)//
{outtextxy(360,140,"6,40,000");//
}//
else if(cash==9)//
{outtextxy(360,140,"12,50,000");//
}//
else if(cash==10)//
{outtextxy(360,140,"25 lakhs");//
}//
else if(cash==11)//
{outtextxy(360,140,"50 lakhs");//
}                                //
else if(cash==12)//
{outtextxy(360,140,"1 Crore");//
}//
else if(cash==13)///
{outtextxy(360,140,"2 Crores");//
}//
else if(cash==14)//
{outtextxy(360,140,"4 Crores");//
}//
else//
{outtextxy(360,140,"5 Crores");}//
//
 setcolor(GREEN);//
 delay(100);//
outtextxy(1,180,"SO CONGRATS FOR WINNING RS.");
  if(cash==1)
       {
       outtextxy(330,180,"5,000");
  fout<<name<<setw(50)<<"Rs.5,000"<<endl;
}
else if(cash==2)
{outtextxy(330,180,"10,000");
  fout<<name<<setw(50)<<"Rs.10,000"<<endl;
}
else if(cash==3)
{outtextxy(330,180,"20,000");
  fout<<name<<setw(50)<<"Rs.20,000"<<endl;
}
else if(cash==4)
{outtextxy(330,180,"40,000");
  fout<<name<<setw(50)<<"Rs.40,000"<<endl;
}
else if(cash==5)
{outtextxy(330,180,"80,000");
  fout<<name<<setw(50)<<"Rs.80,000"<<endl;
}
else if(cash==6)
{outtextxy(330,180,"1,60,000");
  fout<<name<<setw(50)<<"Rs.1,60,000"<<endl;
}
else if(cash==7)
{outtextxy(330,180,"3,20,000");
  fout<<name<<setw(50)<<"Rs.3,20,000"<<endl;
}
else if(cash==8)
{outtextxy(330,180,"6,40,000!");
  fout<<name<<setw(50)<<"Rs.6,40,000"<<endl;
}
else if(cash==9)
{outtextxy(330,180,"12,50,000!");
  fout<<name<<setw(50)<<"Rs.12,50,000"<<endl;
}
else if(cash==10)
{outtextxy(330,180,"25 lakhs!");
  fout<<name<<setw(50)<<"Rs.25 lakhs"<<endl;
}
else if(cash==11)
{outtextxy(330,180,"50 lakhs!");
  fout<<name<<setw(50)<<"Rs.50 lakhs"<<endl;
}
else if(cash==12)
{outtextxy(330,180,"1 Crore!!");
  fout<<name<<setw(50)<<"Rs.1 Crore"<<endl;
}
else if(cash==13)
{outtextxy(330,180,"2 Crores!!!");
  fout<<name<<setw(50)<<"Rs.2 Crores"<<endl;
}
else if(cash==14)
{outtextxy(330,180,"4 Crores!!!!");
  fout<<name<<setw(50)<<"Rs.4 Crores"<<endl;
}
else
{outtextxy(330,180,"5 Crores!!!!");
  fout<<name<<setw(50)<<"Rs.5 Crores"<<endl;
}
outtextxy(1,220,"the right answer is ");
outtextxy(1,260,b[i[l]*4+i[l]%4]);
	    delay(1000);
	    settextstyle(3,0,1);
outtextxy(1,300,"HOPE TO SEE YOU AGAIN!!");
delay(3000);
cleardevice();
delay(500);
exit(0);
}
else if(k==5)
{
if(hln>0)

{
       hln--;
 ll:
{
itoa(hln,hlnh,10);
setcolor(GREEN);
delay(100);
outtextxy(1,140,"WHICH HELPLINE DO YOU WANT TO UTILISE?");//for choosing lifelines

if(hl1!=0)
{         delay(500);
outtextxy(1,160,"(A)-ASK ME");
}



if(hl2!=0)
{delay(500);
outtextxy(1,180,"(S)-50:50");
}
if(hl3!=0)
{delay(500);
outtextxy(1,200,"(D)-POLL");
}
			      }
setcolor(WHITE);
gotoxy(1,15);
cin>>ll;

if(ll=='A'||ll=='a')      //for ask me
{if (hl1!=0)
{hl1--;
      setcolor(RED);
      delay(500);
outtextxy(1,240,"COMPUTER:");
setcolor(YELLOW);
delay(100);
outtextxy(100,240,askme);
outtextxy(1,260,"THE ANSWER IS ");

itoa((i[l]%4)+1,answer,10);
delay(100);
outtextxy(150,260,answer);
outtextxy(170,260,".");
outtextxy(180,260,b[i[l]*4+i[l]%4]); //for displaying correct answer
setcolor(WHITE);
delay(1000);
outtextxy(1,280,"NO. OF HELPLINES LEFT IS ");
delay(500);
outtextxy(200,280,hlnh);
gotoxy(1,46);
}
else if(hl1==0)
{  goto ll;
}             }
else if((ll=='S'||ll=='s'))           //for 50:50
{if(hl2!=0)
{
hl2--;
itoa((i[l]%4)+1,answer,10);
cleardevice();
setcolor(BLUE);
  line(30,15,600,15);       //for question box
    line(30,35,600,35);     //
    line(30,15,0,25);        //
    line(0,25,30,35);         //
    line(635,25,600,15);       //
    line(635,25,600,35);        //
    setcolor(WHITE);
    outtextxy(1,0,"QUESTION ");
outtextxy(80,0,s2);
outtextxy(100,0,".");
outtextxy(20,20,a[i[l]]);         //question
    setcolor(BLUE);
    for(j=0;j<4;j++)

    {  line(20+(317*(j%2)),35,297+(317*(j%2)),35);//
    line(0+(317*(j%2)),45,20+(317*(j%2)),35);      //
    line(0+(317*(j%2)),45,20+(317*(j%2)),55);       //
    line(20+(317*(j%2)),55,297+(317*(j%2)),55);   //for option boxes
   line(317+(317*(j%2)),45,297+(317*(j%2)),35);     //
    line(317+(317*(j%2)),45,297+(317*(j%2)),55);     //
    }
ra=1+(random(4));
itoa(ra,rac,10);
itoa(ra-1,rac1,10);
itoa(ra+1,rac2,10);
setcolor(WHITE);
if(ra==(i[l]%4)+1)        //for displaying one correct and one wrong answer
{if(ra>1)
{
outtextxy(40,40,rac1);
outtextxy(50,40,".");
outtextxy(60,40,b[i[l]*4+ra-2]);
outtextxy(340,40,rac);
outtextxy(350,40,".");
outtextxy(360,40,b[i[l]*4+ra-1]);
}
else
{
outtextxy(40,40,rac);
outtextxy(50,40,".");
outtextxy(60,40,b[i[l]*4+ra-1]);
outtextxy(340,40,rac2);
outtextxy(350,40,".");
outtextxy(360,40,b[i[l]*4+ra]);
}
}
else  if((ra!=(i[l]%4)+1))
{if(ra<(i[l]%4)+1)
{
outtextxy(40,40,rac);
outtextxy(50,40,".");
outtextxy(60,40,b[i[l]*4+ra-1]);
outtextxy(340,40,answer);
outtextxy(350,40,".");
outtextxy(360,40,b[i[l]*4+i[l]%4]);
}
else
{if(ra>(i[l]%4)+1)
outtextxy(40,40,answer);
outtextxy(50,40,".");
outtextxy(60,40,b[i[l]*4+i[l]%4]);
outtextxy(340,40,rac);
outtextxy(350,40,".");
outtextxy(360,40,b[i[l]*4+ra-1]);
}
			}
			delay(1000);
outtextxy(1,280,"NO. OF HELPLINES LEFT NOW IS ");
delay(500);
outtextxy(230,280,hlnh);

}
else
if(hl2==0)
{ goto ll;                                                          delay(500);
}}
else if((ll=='d'||ll=='D'))  //incase of poll
{if(hl3!=0)
{
hl3--;  randomize();

if(i[l]%4==0)                           //
{r[i[l]%4]=61+random(20);               //
 r[1+i[l]%4]=90-r[0];                   //
 r[2+i[l]%4]=1+random(10);               //
 r[3+i[l]%4]=10-r[2];                      //
}                                         //
else if(i[l]%4==1)                      //
{    r[i[l]%4]=61+random(20);           //
 r[i[l]%4-1]=90-r[1];                   //
 r[1+i[l]%4]=1+random(10);              //
 r[2+i[l]%4]=10-r[2];                    //
}                                         //
else if(i[l]%4==2)                         //
{r[i[l]%4]=61+random(20);                    //
 r[i[l]%4-1]=90-r[2];                     //
 r[i[l]%4-2]=1+random(10);                //
 r[1+i[l]%4]=10-r[0];                     //
}                                         //          for calculating percentage of options
else if(i[l]%4==3)                        //
{                                         //
					  //
					  //
r[i[l]%4]=61+random(20);                  //
r[i[l]%4-2]=90-r[3];                      //
r[i[l]%4-1]=1+random(10);                 //
r[i[l]%4-3]=10-r[2];                       //
					  //
}                                         //
 outtextxy(1,260,"ACCORDING TO OUR POLL,");

				   //
 for(j=0;j<4;j++)                  //
 {   setcolor(MAGENTA);            //
 itoa(j+1,j1,10);                   //
 delay(500);                         //
outtextxy(10,280+20*j,j1);            //
outtextxy(20,280+20*j,".");            //
outtextxy(35,280+20*j,b[i[l]*4+j]);     //
outtextxy(280,280+20*j,"=");             //    for displaying options with respective percentage support
itoa(r[j],cx,10);                         //

outtextxy(300,280+20*j,cx); //
outtextxy(340,280+20*j,"%"); //
gotoxy(1,300+20*j);
 }
 setcolor(WHITE);
 delay(1000);
 outtextxy(1,360,"NO. OF HELPLINES LEFT NOW IS ");
delay(500);
outtextxy(18,380,hlnh);
}
else if(hl3==0)
{
goto ll;

}
}
delay(500);
outtextxy(1,400,"ENTER YOUR CHOICE NOW");
gotoxy(1,24);
cin>>k1;                         //enter choice
     if(k1==1+i[l]%4)       //                                in case of correct option
     {setcolor(GREEN); //
     delay(900); //
     outtextxy(1,440,"ABSOLUTELY RIGHT!!LIFELINES ARE ONLY SELDOM WRONG!!!"); //
     setcolor(500); //
     outtextxy(1,460,"YOU HAV WON RS.");
       if(cash==1)
       {
       outtextxy(170,460,"5,000");
}
else if(cash==2)
{outtextxy(170,460,"10,000");
}
else if(cash==3)
{outtextxy(170,460,"20,000");
}
else if(cash==4)
{outtextxy(170,460,"40,000");
}
else if(cash==5)
{outtextxy(170,460,"80,000");
}
else if(cash==6)
{outtextxy(170,460,"1,60,000");
}
else if(cash==7)
{outtextxy(170,460,"3,20,000!");
}
else if(cash==8)
{outtextxy(170,460,"6,40,000!");
}
else if(cash==9)
{outtextxy(170,460,"12,50,000!!");
}
else if(cash==10)
{outtextxy(170,460,"25 lakhs!!");
}
else if(cash==11)
{outtextxy(170,460,"50 lakhs!!");
}
else if(cash==12)
{outtextxy(170,460,"1 Crore!!");
}
else if(cash==13)
{outtextxy(170,460,"2 Crores!!!");
}
else if(cash==14)
{outtextxy(170,460,"4 Crores!!!!");
}
else
{outtextxy(170,460,"5 Crores!!!!!");}



     delay(1000);
     }
     else if(k1!=1+i[l]%4)
     {
     setcolor(RED);                                              //
     delay(900);                                                   //
     outtextxy(1,460,"OOPS!!WRONG STEP!LIFELINES ARE JUST SO DEPENDABLE!!");//
  delay(800);//
  outtextxy(1,480,"correct answer is ");//
//
   delay(500);//                                         				in case of wrong answer
   outtextxy(1,500,b[i[l]*4+i[l]%4]   );//
//
   delay(500);//
outtextxy(1,520,"IM SORRY BUT BETTER LUCK NEXT TIME!");//
//
      delay(500);//
      outtextxy(1,540,"YOU HAVE TO UNFORTUNATELY GO AT RS.");//
  if(cash==1)//
       {//
       outtextxy(170,540,"5,000");//
  fout<<name<<setw(50)<<"Rs.5,000"<<endl;//
}//
else if(cash==2)//
{outtextxy(170,540,"10,000");//
  fout<<name<<setw(50)<<"Rs.10,000"<<endl;//
}///
else if(cash==3)//
{outtextxy(170,540,"20,000");//
  fout<<name<<setw(50)<<"Rs.20,000"<<endl;//
}//
else if(cash==4)//
{outtextxy(170,540,"40,000");//
  fout<<name<<setw(50)<<"Rs.40,000"<<endl;//
}//
else if(cash==5)//
{outtextxy(170,540,"80,000");//
  fout<<name<<setw(50)<<"Rs.80,000"<<endl;//
}//
else if(cash==6)//
{outtextxy(170,540,"1,60,000");//
  fout<<name<<setw(50)<<"Rs.1,60,000"<<endl;//
}//
else if(cash==7)//
{outtextxy(170,540,"3,20,000!");//
  fout<<name<<setw(50)<<"Rs.3,20,000"<<endl;//
}//
else if(cash==8)//
{outtextxy(170,540,"6,40,000!");//
  fout<<name<<setw(50)<<"Rs.6,40,000"<<endl;//
}//
else if(cash==9)//
{outtextxy(170,540,"12,50,000!");//
  fout<<name<<setw(50)<<"Rs.12,50,000"<<endl;//
}//
else if(cash==10)//
{outtextxy(170,540,"25 lakhs!");//
  fout<<name<<setw(50)<<"Rs.25 lakhs"<<endl;//
}//
else if(cash==11)//
{outtextxy(170,540,"50 lakhs!!");//
  fout<<name<<setw(50)<<"Rs.50 lakhs"<<endl;//
}//
else if(cash==12)//
{outtextxy(170,540,"1 Crore!!");//
  fout<<name<<setw(50)<<"Rs.1 Crore"<<endl;//
}//
else if(cash==13)//
{outtextxy(170,540,"2 Crores!!!");//
  fout<<name<<setw(50)<<"Rs.2 Crores"<<endl;//
}//
else if(cash==14)//
{outtextxy(170,540,"4 Crores!!!!");//
  fout<<name<<setw(50)<<"Rs.4 Crores"<<endl;//
}//
else//
{outtextxy(170,540,"5 Crores!!!!!");//
  fout<<name<<setw(50)<<"Rs.5 Crores"<<endl;//
}//
//
delay(500);//
//
   outtextxy(1,560,"correct answer is ");//
//
   delay(500);//
   outtextxy(1,580,b[i[l]*4+i[l]%4]   );//
//
     delay(1500);//
//
      cleardevice();//
      delay(500);//
   settextstyle(1,0,1);//
   setcolor(GREEN);//
   if(cash==1)//
       {//
//
  fout<<name<<setw(50)<<"Rs.5,000"<<endl;//
}//
else if(cash==2)//
{//
  fout<<name<<setw(50)<<"Rs.10,000"<<endl;//
}//
else if(cash==3)//
{//
  fout<<name<<setw(50)<<"Rs.20,000"<<endl;//
}//
else if(cash==4)//
{//
  fout<<name<<setw(50)<<"Rs.40,000"<<endl;//
}//
else if(cash==5)//
{//
  fout<<name<<setw(50)<<"Rs.80,000"<<endl;//
}//
else if(cash==6)//
{//
  fout<<name<<setw(50)<<"Rs.1,60,000"<<endl;//
}//
else if(cash==7)//
{//
  fout<<name<<setw(50)<<"Rs.3,20,000"<<endl;//
}//
else if(cash==8)//
{//
  fout<<name<<setw(50)<<"Rs.6,40,000"<<endl;//
}//
else if(cash==9)//
{//
  fout<<name<<setw(50)<<"Rs.12,50,000"<<endl;//
}//
else if(cash==10)//
{//
  fout<<name<<setw(50)<<"Rs.25 lakhs"<<endl;//
}///
else if(cash==11)///
{//
  fout<<name<<setw(50)<<"Rs.50 lakhs"<<endl;///
}///
else if(cash==12)//
{//
  fout<<name<<setw(50)<<"Rs.1 Crore"<<endl;//
}//
else if(cash==13)//
{//
  fout<<name<<setw(50)<<"Rs.2 Crores"<<endl;//
}//
else if(cash==14)//
{//
  fout<<name<<setw(50)<<"Rs.4 Crores"<<endl;//
}//
else//
{  fout<<name<<setw(50)<<"Rs.5 Crores"<<endl;//
}//
//
exit(0);//

}
}
else
if(hln==0)
{
 setcolor(RED);
 delay(500);
outtextxy(1,280,"NO MORE HELPLINES!");
delay(500);
outtextxy(1,300,"enter choice!");
gotoxy(1,21);
cin>>k;
if(k==(i[l]%4)+1)
{setcolor(GREEN);
delay(900);
outtextxy(1,320,"CORRECT!!!");               //if answer is right
delay(900);
outtextxy(1,340,"you have won Rs.");
  if(cash==1)
       {
       outtextxy(270,340,"5,000");
}
else if(cash==2)
{outtextxy(270,340,"10,000");
}
else if(cash==3)
{outtextxy(270,340,"20,000");
}
else if(cash==4)
{outtextxy(270,340,"40,000");
}
else if(cash==5)
{outtextxy(270,340,"80,000");
}
else if(cash==6)
{outtextxy(270,340,"1,60,000");
}
else if(cash==7)
{outtextxy(270,340,"3,20,000!");
}
else if(cash==8)
{outtextxy(270,340,"6,40,000!");
}
else if(cash==9)
{outtextxy(270,340,"12,50,000!");
}
else if(cash==10)
{outtextxy(270,340,"25 lakhs!!");
}
else if(cash==11)
{outtextxy(270,340,"50 lakhs!!");
}
else if(cash==12)
{outtextxy(270,340,"1 Crore!!");
}
else if(cash==13)
{outtextxy(270,340,"2 Crores!!!");
}
else if(cash==14)
{outtextxy(270,340,"4 Crores!!!");
}
else
{outtextxy(270,340,"5 Crores!!!!");}

delay(1000);

}
else
{setcolor(RED);
delay(900);
outtextxy(1,320,"oopsy!!wrong guess!!");
delay(900);
outtextxy(1,340,"youve won Rs.");
  if(cash==1)
       {
       outtextxy(180,340,"5,000");
}
else if(cash==2)
{outtextxy(180,340,"10,000");
}
else if(cash==3)
{outtextxy(180,340,"20,000");
}
else if(cash==4)
{outtextxy(180,340,"40,000");
}
else if(cash==5)
{outtextxy(180,340,"80,000");
}
else if(cash==6)
{outtextxy(180,340,"1,60,000");
}
else if(cash==7)
{outtextxy(180,340,"3,20,000!");
}
else if(cash==8)
{outtextxy(180,340,"6,40,000!");
}
else if(cash==9)
{outtextxy(180,340,"12,50,000!");
}
else if(cash==10)
{outtextxy(180,340,"25 lakhs!");
}
else if(cash==11)
{outtextxy(180,340,"50 lakhs!");
}
else if(cash==12)
{outtextxy(180,340,"1 Crore!!");
}
else if(cash==13)
{outtextxy(180,340,"2 Crores!!!");
}
else if(cash==14)
{outtextxy(180,340,"4 Crores!!!!");
}
else
{outtextxy(180,340,"5 Crores!!!!!");}
 if(cash==1)
       {

  fout<<name<<setw(50)<<"Rs.5,000"<<endl;
}
else if(cash==2)
{
  fout<<name<<setw(50)<<"Rs.10,000"<<endl;
}
else if(cash==3)
{
  fout<<name<<setw(50)<<"Rs.20,000"<<endl;
}
else if(cash==4)
{
  fout<<name<<setw(50)<<"Rs.40,000"<<endl;
}
else if(cash==5)
{
  fout<<name<<setw(50)<<"Rs.80,000"<<endl;
}
else if(cash==6)
{
  fout<<name<<setw(50)<<"Rs.1,60,000"<<endl;
}
else if(cash==7)
{
  fout<<name<<setw(50)<<"Rs.3,20,000"<<endl;
}
else if(cash==8)
{
  fout<<name<<setw(50)<<"Rs.6,40,000"<<endl;
}
else if(cash==9)
{
  fout<<name<<setw(50)<<"Rs.12,50,000"<<endl;
}
else if(cash==10)
{
  fout<<name<<setw(50)<<"Rs.25 lakhs"<<endl;
}
else if(cash==11)
{
  fout<<name<<setw(50)<<"Rs.50 lakhs"<<endl;
}
else if(cash==12)
{
  fout<<name<<setw(50)<<"Rs.1 Crore"<<endl;
}
else if(cash==13)
{
  fout<<name<<setw(50)<<"Rs.2 Crores"<<endl;
}
else if(cash==14)
{
  fout<<name<<setw(50)<<"Rs.4 Crores"<<endl;
}
else
{  fout<<name<<setw(50)<<"Rs.5 Crores"<<endl;
}
delay(500);
outtextxy(1,360,"the correct answer is ");         //
delay(500);                                          //for display of right answer
outtextxy(1,380,b[i[l]*4+i[l]%4] );              //
delay(1500);
cleardevice();
delay(500);
exit(0);
}


}
}

else if((k-1==i[l]%4)&&(k!=5))
{if(l==14)
{     delay(900);
 cleardevice();
for(int i=0;i<50;i++)
{ for(int j=0;j<65;j++)                    //after all questions have been correctle answered
{              delay(1);
putpixel(10+10*j,10+10*i,i);
putpixel(11+10*j,10+10*i,i);
putpixel(9+10*j,10+10*i,i);
putpixel(10+10*j,9+10*i,i);
putpixel(10+10*j,11+10*i,i);
}}
setcolor(14);
settextstyle(3,0,5);

outtextxy(1,20,"CONGRATULATIONS!!!!!!!!!!!!!!!!");
	   delay(800);
	  setcolor(15);
outtextxy(1,60,"YOU ARE NOW A CROREPATI!!!");
delay(800);
setcolor(8);
outtextxy(1,100,"YOU HAVE WON RS.5 CRORES!!!!MANY MANY HEARTFUL CONGRATULATIONS!!!!");
setcolor(MAGENTA);
outtextxy(1,140,"SUCH A TERRIFIC PERFORMANCE!!");
delay(2000);
clearviewport();


circle(midx,midy+50,170);

circle(midx,midy+50,130);
circle(midx,midy+50,30);
setfillstyle(1,15);
floodfill(319,289,midx);
setfillstyle(10,1);
floodfill(1,51,midx);
setfillstyle(2,14) ;
floodfill(160,250,midx);
setfillstyle(10 ,5);
floodfill(280,256,midx);
settextstyle(7,0,6);
setcolor(MAGENTA);

delay(20);
setcolor(2);





  fout<<name<<setw(50)<<"Rs.5 Crores"<<endl;
exit(0);
}

else
setcolor(GREEN);
settextstyle(4,0,6);
outtextxy(1,200,"CORRECT!!");
delay(500);
settextstyle(1,0,1);

outtextxy(1,300,"YOU HAVE WON RS.");
  if(cash==1)
       {
       outtextxy(180,300,"5,000");
}
else if(cash==2)
{outtextxy(180,300,"10,000");
}
else if(cash==3)
{outtextxy(180,300,"20,000");
}
else if(cash==4)
{outtextxy(180,300,"40,000");
}
else if(cash==5)
{outtextxy(180,300,"80,000");
}
else if(cash==6)
{outtextxy(180,300,"1,60,000");
}
else if(cash==7)
{outtextxy(180,300,"3,20,000");
}
else if(cash==8)
{outtextxy(180,300,"6,40,000");
}
else if(cash==9)
{outtextxy(180,300,"12,50,000!");
}
else if(cash==10)
{outtextxy(180,300,"25 lakhs!");
}
else if(cash==11)
{outtextxy(180,300,"50 lakhs!");
}
else if(cash==12)
{outtextxy(180,300,"1 Crore!!");
}
else if(cash==13)
{outtextxy(180,300,"2 Crores!!!");
}
else if(cash==14)
{outtextxy(180,300,"4 Crores!!!!");
}
else
{outtextxy(180,300,"5 Crores!!!!");}


delay(1000);


}
else if(k!=5)
{          setcolor(RED);
settextstyle(3,0,4);
outtextxy(1,240,"OOPS!WRONG ANSWER!!");            //if answer is wrong
delay(1000);
settextstyle(3,0,1);
outtextxy(1,280,"THE CORRECT ANSWER IS ");
delay(600);
outtextxy(300,280,b[i[l]*4+i[l]%4]);
delay(1000);
settextstyle(1,0,1);
outtextxy(1,320," EXTREMELY SORRY!!BUT BETTER LUCK NEXT TIME AROUND!!CYA!");
ka=1;
delay(800);
outtextxy(1,360,"YOU HAVE TO GO AT RS.");
  if(cash==1)
       {
       outtextxy(220,360,"5,000");
}
else if(cash==2)
{outtextxy(220,360,"10,000");
}
else if(cash==3)
{outtextxy(220,360,"20,000");
}
else if(cash==4)
{outtextxy(220,360,"40,000");
}
else if(cash==5)
{outtextxy(220,360,"80,000");
}
else if(cash==6)
{outtextxy(220,360,"1,60,000");
}
else if(cash==7)
{outtextxy(220,360,"3,20,000");
}
else if(cash==8)
{outtextxy(220,360,"6,40,000");
}
else if(cash==9)
{outtextxy(220,360,"12,50,000");
}
else if(cash==10)
{outtextxy(220,360,"25 lakhs");
}
else if(cash==11)
{outtextxy(220,360,"50 lakhs");
}
else if(cash==12)
{outtextxy(220,360,"1 Crore!");
}
else if(cash==13)
{outtextxy(220,360,"2 Crores!");
}
else if(cash==14)
{outtextxy(220,360,"4 Crores!");
}
else
{outtextxy(220,360,"5 Crores!!");}


getch();
 cleardevice();
   settextstyle(1,0,1);
	if(cash==1)
       {

  fout<<name<<setw(50)<<"Rs.5,000"<<endl;
}
else if(cash==2)
{
  fout<<name<<setw(50)<<"Rs.10,000"<<endl;
}
else if(cash==3)
{
  fout<<name<<setw(50)<<"Rs.20,000"<<endl;
}
else if(cash==4)
{
  fout<<name<<setw(50)<<"Rs.40,000"<<endl;
}
else if(cash==5)
{
  fout<<name<<setw(50)<<"Rs.80,000"<<endl;
}
else if(cash==6)
{
  fout<<name<<setw(50)<<"Rs.1,60,000"<<endl;
}
else if(cash==7)
{
  fout<<name<<setw(50)<<"Rs.3,20,000"<<endl;
}
else if(cash==8)
{
  fout<<name<<setw(50)<<"Rs.6,40,000"<<endl;
}
else if(cash==9)
{
  fout<<name<<setw(50)<<"Rs.12,50,000"<<endl;
}
else if(cash==10)
{
  fout<<name<<setw(50)<<"Rs.25 lakhs"<<endl;
}
else if(cash==11)
{
  fout<<name<<setw(50)<<"Rs.50 lakhs"<<endl;
}
else if(cash==12)
{
  fout<<name<<setw(50)<<"Rs.1 Crore"<<endl;
}
else if(cash==13)
{
  fout<<name<<setw(50)<<"Rs.2 Crores"<<endl;
}
else if(cash==14)
{
  fout<<name<<setw(50)<<"Rs.4 Crores"<<endl;
}
else
{  fout<<name<<setw(50)<<"Rs.5 Crores"<<endl;
}

exit(0);

}
if(l==14)
ka=1;
cash++;
    }

   }
   getch();

  }
       fout.close();                             //closing file
       getch();
       closegraph();
  }