//---------------------------------------------------------------------------


#pragma hdrstop

#include "Unit2.h"

//---------------------------------------------------------------------------
	Rectan::Rectan(int x1, int y1, int x2, int y2)
	{
	   this->x1 = x1;
	   this->y1 = y1;
	   this->x2 = x2;
	   this->y2 = y2;
	}

	void Rectan::Show(TCanvas *Canvas, TColor B)
   {
		Canvas->Brush->Color = B;
		Canvas->Pen->Color = B;
		Canvas->Rectangle(x1, y1, x2, y2);
   }

   void Rectan::Close(TCanvas *Canvas,TColor B)
   {
   x2 +=5;
   Show(Canvas,B);
   }

  void Rectan::Open(TCanvas *Canvas, TColor B)
   {
	   x2 -= 5;

	   Show(Canvas, B);
   }
#pragma package(smart_init)
