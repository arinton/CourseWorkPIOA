//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
RobotComplex* data[15];
int count = 0;
void TForm1::FillTable()
{
	ListView1->Items->BeginUpdate();
	ListView1->Items->Clear();
	  for(int i=0;i<count;i++)
	  {
	  TListItem* item=ListView1->Items->Add();
	  if (data[i]->Type() == 1)
	  {
		item->Caption="Изготовитель";
	  }
	  else if (data[i]->Type() == 2)
	  {
		item->Caption="Охранник";
	  }
	  else
	  {
		item->Caption="Исследователь";
	  }
item->ImageIndex=1;
item->Data=(void*)i;
  item->SubItems->Add(data[i]->Number());
  item->SubItems->Add(data[i]->Countof());
 item->SubItems->Add(data[i]->Worker());
 item->SubItems->Add(data[i]->X());
  item->SubItems->Add(data[i]->Y());
  char buf[5];
  sscanf(buf,"%.1f",data[i]->Area());
	item->SubItems->Add(buf);
	  }
	  ListView1->Items->EndUpdate();
}
void __fastcall TForm1::ButtonReadFileClick(TObject *Sender)
{
char filename[20];
strcpy(filename,AnsiString(Edit1->Text.c_str()).c_str());
FILE* inp = fopen(filename,"r");
if(inp==NULL)
	{
		ShowMessage("Невозможно открыть файл");
		return;
	}
for(int i = 0; i < count-1; i++)
   {
	  delete data[i];

	  data[i] = NULL;
   }
count = 0;
int countof;
int number;
char worker[20];
int x;
int y;
int type;
	while(!feof(inp))
	 {
	 fscanf(inp,"%d:%[^:]:%d:%d:%d:%d\n",&type,worker,&number,&countof,&x,&y);
	 if (type == 1)
	 {
	 data[count] = new ProductRobot(worker,countof,number,x,y);
	 }
	 else if (type == 2)
	 {
	 data[count] = new SecurityRobot(worker,countof,number,x,y);
	 }
	 else
	 {
	 data[count] = new ExplorationRobot(worker,countof,number,x,y);
	 }
	 count++;
	 }
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
FillTable();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
int left=0;
	int right=count-1;
	while((left<right))
	{
	for(int i=left;i<right;i++) {
		if(data[i]->Countof()>data[i+1]->Countof())
		{
			RobotComplex* temp=data[i];
			data[i]=data[i+1];
			data[i+1]=temp;
		}
		}
		right--;
		for(int j=right;j>left;j--) {
		if(data[j-1]->Countof()>data[j]->Countof()) {
			RobotComplex* temp=data[j];
		 data[j]=data[j-1];
		 data[j-1]=temp;
		}
		}
		left++;
	}
	FillTable();
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
int key = atoi(AnsiString(Edit2->Text.c_str()).c_str());
int nR = 0;
bool flag = false;
for (int i = 0;i<count;i++)
{
 if (key == data[i]->Number())
 {
 nR = i+1;
 flag = true;
 }
}
if (flag)
{
char buf[128];
sprintf(buf,"Ваша строка находится под номером %d",nR);
ShowMessage(buf);
}
else
{
ShowMessage("Такой строки нет");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
Panel2->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
Panel2->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
int countof = atoi(AnsiString(Edit5->Text.c_str()).c_str());
int number = atoi(AnsiString(Edit4->Text.c_str()).c_str());
char worker[20];
strcpy(worker,AnsiString(Edit6->Text.c_str()).c_str());
int x = atoi(AnsiString(Edit7->Text.c_str()).c_str());
int y = atoi(AnsiString(Edit8->Text.c_str()).c_str());
int type = atoi(AnsiString(Edit3->Text.c_str()).c_str());
 if (type == 1)
	 {
	 data[count] = new ProductRobot(worker,countof,number,x,y);
	 }
	 else if (type == 2)
	 {
	 data[count] = new SecurityRobot(worker,countof,number,x,y);
	 }
	 else
	 {
	 data[count] = new ExplorationRobot(worker,countof,number,x,y);
	 }
	 count++;
 FillTable();
 Panel2->Visible = false;
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
int countof = atoi(AnsiString(Edit5->Text.c_str()).c_str());
int number = atoi(AnsiString(Edit4->Text.c_str()).c_str());
char worker[20];
strcpy(worker,AnsiString(Edit6->Text.c_str()).c_str());
int x = atoi(AnsiString(Edit7->Text.c_str()).c_str());
int y = atoi(AnsiString(Edit8->Text.c_str()).c_str());
int type = atoi(AnsiString(Edit3->Text.c_str()).c_str());
int line = atoi(AnsiString(Edit9->Text.c_str()).c_str());
 if (type == 1)
	 {
	 data[line-1] = new ProductRobot(worker,countof,number,x,y);
	 }
	 else if (type == 2)
	 {
	 data[line-1] = new SecurityRobot(worker,countof,number,x,y);
	 }
	 else
	 {
	 data[line-1] = new ExplorationRobot(worker,countof,number,x,y);
	 }
FillTable();
Panel2->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
char filename[20];
strcpy(filename,AnsiString(Edit1->Text.c_str()).c_str());
FILE* inp = fopen(filename,"w");
for (int i =0;i<count;i++)
{
fprintf(inp,"%d:%s:%d:%d:%d:%d\n",data[i]->Type(),data[i]->Worker(),data[i]->Number(),data[i]->Countof(),data[i]->X(),data[i]->Y());
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
Panel3->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
Panel3->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PaintBox1Paint(TObject *Sender)
{
TCanvas* c = PaintBox1->Canvas;
c->Pen->Width=3;
 for(int i=0;i<count;i++)
   {
   if(data[i]->Type()==1)
   {
   c->Brush->Color=clRed;
   c->Ellipse(data[i]->X()-20,data[i]->X()-20,data[i]->X()+20,data[i]->X()+20);
   }
   else if(data[i]->Type()==2)
   {
   c->Brush->Color=clYellow;
   c->Ellipse(data[i]->X()-20,data[i]->X()-20,data[i]->X()+20,data[i]->X()+20);
   }
   else
   {
   c->Brush->Color = clBlue;
   c->Ellipse(data[i]->X()-20,data[i]->X()-20,data[i]->X()+20,data[i]->X()+20);
   }
   }
}
//---------------------------------------------------------------------------

