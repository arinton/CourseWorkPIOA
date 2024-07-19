//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class RobotComplex {
	private:
	int countof;
	int number;
	char worker[20];
	int x;
	int y;
	public:
	RobotComplex(char* Worker,int Countof,int Number,int X,int Y)
	{
	strcpy(worker,Worker);
	countof = Countof;
	number = Number;
	x = X;
	y = Y;
	}
	//пишем геттеры
	int Countof() {return countof;}
	int Number() {return number;}
	char* Worker() {return worker;}
	int X() {return x;}
	int Y() {return y;}
	virtual int Type() = 0;
	virtual float Area() = 0;
};
class ProductRobot:public RobotComplex {
	public:
	ProductRobot(char* Worker,int Countof,int Number,int X,int Y):RobotComplex(Worker,Countof,Number,X,Y){}
	virtual int Type() {return 1;}
	virtual float Area() override { return 3.14f * 20.0f * 20.0f; }
};
class SecurityRobot:public RobotComplex {
	public:
	SecurityRobot(char* Worker,int Countof,int Number,int X,int Y):RobotComplex(Worker,Countof,Number,X,Y){}
	virtual int Type() {return 2;}
	virtual float Area() override { return 20.0f * 20.0f; }
};
class ExplorationRobot:public RobotComplex{
	public:
	ExplorationRobot(char* Worker,int Countof,int Number,int X,int Y):RobotComplex(Worker,Countof,Number,X,Y){}
	virtual int Type() {return 3;}
    virtual float Area() override { return 20.0f * 10.0f; }
};

class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TListView *ListView1;
	TEdit *Edit1;
	TButton *ButtonReadFile;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TEdit *Edit2;
	TButton *Button4;
	TPanel *Panel2;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TEdit *Edit8;
	TEdit *Edit9;
	TButton *Button5;
	TButton *Button6;
	TButton *Button7;
	TButton *Button8;
	TButton *Button9;
	TPanel *Panel3;
	TButton *Button10;
	TPaintBox *PaintBox1;
	void __fastcall ButtonReadFileClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button10Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall PaintBox1Paint(TObject *Sender);
private:	// User declarations
public:		// User declarations
void FillTable();
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
