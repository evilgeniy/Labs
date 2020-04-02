#include <vcl.h>
#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
class Rectan
{
public:
    int x1, y1, x2, y2;
    Rectan(int x1, int y1, int x2, int y2);
	virtual void Show(TCanvas *Canvas, TColor B);
	virtual void Close(TCanvas *Canvas,TColor B);
    virtual void Open(TCanvas* Canvas, TColor B);
};
#endif
