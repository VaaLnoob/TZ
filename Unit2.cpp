//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	Timer1->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Timer1Timer(TObject *Sender)
{	
	Button1->Left += (x*tMove);
	Button1->Top += (y*tMove);
	if(Timer1->Interval<10)
	{
		tMove = 10 - Timer1->Interval;
	}
	if(Button1->Top <= 0)
	{
		y = 1;
	}
	if(Button1->Left >= ClientWidth-(Button1->Width))
	{
		x = -1;
	}
	if(Button1->Top >= ClientHeight-(Button1->Height))
	{
		y = -1;
	}
	if(Button1->Left <= 0)
	{
		x = 1;
	}
}
//---------------------------------------------------------------------------
