//---------------------------------------------------------------------------


#pragma hdrstop
#include "Unit2.h"
#include "Unit3.h"

Circ::Circ(int x1, int y1, int x2, int y2):Rectan(x1, y1, x2, y2)
{

}
void Circ::Show(TCanvas *Canvas, TColor B)
{
	Canvas->Brush->Color = B;
	Canvas->Pen->Color = B;
	Canvas->Ellipse(x1, y1, x2 ,y2);
}
void Circ::Close(TCanvas *Canvas, TColor B)
{
	//y1 -=0.5;
	y2 +=5;
	Circ::Show(Canvas, B);
}
void Circ::Open(TCanvas *Canvas, TColor B)
{
	//y1 +=0.5;
	y2 -= 5;
	Circ::Show(Canvas, B);
}

//---------------------------------------------------------------------------

#pragma package(smart_init)
