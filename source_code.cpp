//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "source_code.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
object Button4: TButton
  Position.X = 64.000000000000000000
  Position.Y = 200.000000000000000000
  Size.Width = 89.000000000000000000
  Size.Height = 89.000000000000000000
  Size.PlatformDefault = False
  TabOrder = 2
  Text = 'Button1'
end

}
//---------------------------------------------------------------------------
