#include <vcl.h>
#pragma hdrstop
#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
Rectan wall(150,150,400,400);
Rectan door(260,260,360,400);
Circ window(180,180,250,250);
Circ cherdak(232,75,320,140);
int count = 0,countFW = 0;
bool open = false, openFW = false,openCk = false;

//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
 Timer1->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button2Click(TObject *Sender)
{
 Timer2->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button3Click(TObject *Sender)
{
   if(!openCk){
cherdak.Show(Image1->Canvas,clPurple);
openCk = true;
  }else if(openCk){
  cherdak.Show(Image1->Canvas,clBlue);
  openCk = false;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Timer1Timer(TObject *Sender)
{
 if(!open){
door.Show(Image1->Canvas,clRed);
door.Open(Image1->Canvas,clBlack);
	  count++;
	  if(count == 12){
	  open = true;
	  Timer1->Enabled = false;
	  }
	  }else if(open){
			 door.Close(Image1->Canvas,clBlack);
			 count--;
			 if(count ==0){
			 open = false;
			 Timer1->Enabled = false;

			 }
	  }
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Timer2Timer(TObject *Sender)
{
			if(!openFW){
	  window.Show(Image1->Canvas,clPurple);
	  window.Open(Image1->Canvas,clBlue);
	  countFW++;
	  if(countFW == 5){
	  openFW = true;
	  Timer2 ->Enabled = false;
	  }

}   else if (openFW) {
			  window.Close(Image1->Canvas,clBlue);
			  countFW--;
			  if(countFW == 0){
			  openFW = false;
			  Timer2->Enabled = false;
			  }
		 }
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormCreate(TObject *Sender)
{
Form3->Color = clWebSlateGray;
Image1->Canvas->Brush ->Color= clWebSlateGray;
Image1->Canvas->Rectangle(0,0,600,600);
TPoint points[3];
points[0] = Point(150,150);
points[1] = Point(275,20);
points[2] = Point(400,150);
	   wall.Show(Image1->Canvas,clYellow);
	   door.Show(Image1->Canvas,clRed);
	   window.Show(Image1->Canvas,clBlue);
	   Image1->Canvas->Brush->Color = clMaroon;
	   Image1->Canvas->Polygon(points,2);
	   cherdak.Show(Image1->Canvas,clBlue);
}
//---------------------------------------------------------------------------
