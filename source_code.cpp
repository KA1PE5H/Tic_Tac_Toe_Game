//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "source_code.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;

char currentPlayerSymbol = 'x';
         //---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Label2->Text = currentPlayerSymbol;

}
//---------------------------------------------------------------------------
bool TForm1::winnerKaun()
{
	if(!Button1->Text.IsEmpty() && Button1->Text == Button2->Text && Button1->Text == Button3->Text) return true;
	if(!Button4->Text.IsEmpty() && Button4->Text == Button5->Text && Button4->Text == Button6->Text) return true;
	if(!Button7->Text.IsEmpty() && Button7->Text == Button8->Text && Button7->Text == Button9->Text) return true;
	if(!Button1->Text.IsEmpty() && Button1->Text == Button4->Text && Button1->Text == Button7->Text) return true;
	if(!Button2->Text.IsEmpty() && Button2->Text == Button5->Text && Button2->Text == Button8->Text) return true;
	if(!Button3->Text.IsEmpty() && Button3->Text == Button6->Text && Button3->Text == Button9->Text) return true;
	if(!Button1->Text.IsEmpty() && Button1->Text == Button5->Text && Button1->Text == Button9->Text) return true;
	if(!Button3->Text.IsEmpty() && Button3->Text == Button5->Text && Button3->Text == Button7->Text) return true;

	return false;
}

void  TForm1::changePlayerSymbol()
{
	if(currentPlayerSymbol == 'x') currentPlayerSymbol = 'o';
	else currentPlayerSymbol = 'x';
	Label2->Text = currentPlayerSymbol;
}


void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Button1->Text=currentPlayerSymbol;

	if(winnerKaun())
	{
	   Label3->Text="You Won!!";
	   return;
	}
	changePlayerSymbol();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Button2->Text=currentPlayerSymbol;
	if(winnerKaun())
	{
	   Label3->Text="You Won!!";
	   return;
	}
	changePlayerSymbol();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	Button3->Text=currentPlayerSymbol;
	if(winnerKaun())
	{
	   Label3->Text="You Won!!";
	   return;
	}
	changePlayerSymbol();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	Button4->Text=currentPlayerSymbol;
	if(winnerKaun())
	{
	   Label3->Text="You Won!!";
	   return;
	}
	changePlayerSymbol();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
	Button5->Text=currentPlayerSymbol;
	if(winnerKaun())
	{
	   Label3->Text="You Won!!";
	   return;
	}
	changePlayerSymbol();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
	Button6->Text=currentPlayerSymbol;
	if(winnerKaun())
	{
	   Label3->Text="You Won!!";
	   return;
	}
	changePlayerSymbol();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button7Click(TObject *Sender)
{
	Button7->Text=currentPlayerSymbol;
	if(winnerKaun())
	{
	   Label3->Text="You Won!!";
	   return;
	}
	changePlayerSymbol();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button8Click(TObject *Sender)
{
	Button8->Text=currentPlayerSymbol;
	if(winnerKaun())
	{
	   Label3->Text="You Won!!";
	   return;
	}
	changePlayerSymbol();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button9Click(TObject *Sender)
{
	Button9->Text=currentPlayerSymbol;
	if(winnerKaun())
	{
	   Label3->Text="You Won!!";
	   return;
	}
	changePlayerSymbol();
}
//---------------------------------------------------------------------------
