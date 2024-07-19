object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 480
  ClientWidth = 725
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 725
    Height = 480
    Align = alClient
    TabOrder = 0
    object ListView1: TListView
      Left = 24
      Top = 32
      Width = 545
      Height = 329
      Columns = <
        item
          Caption = #1058#1080#1087
          Width = 100
        end
        item
          Caption = #1055#1086#1088#1103#1076#1082#1086#1074#1099#1081' '#1085#1086#1084#1077#1088
          Width = 125
        end
        item
          Caption = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086
          Width = 75
        end
        item
          Caption = #1057#1083#1077#1076#1103#1097#1080#1081
          Width = 100
        end
        item
          Caption = 'X'
        end
        item
          Caption = 'Y'
        end
        item
          Caption = #1055#1083#1086#1097#1072#1076#1100
          Width = 75
        end>
      GridLines = True
      TabOrder = 0
      ViewStyle = vsReport
    end
    object ButtonReadFile: TButton
      Left = 599
      Top = 72
      Width = 121
      Height = 25
      Caption = #1063#1080#1090#1072#1090#1100' '#1080#1079' '#1092#1072#1081#1083#1072
      TabOrder = 1
      OnClick = ButtonReadFileClick
    end
    object Button1: TButton
      Left = 599
      Top = 103
      Width = 121
      Height = 25
      Caption = #1047#1072#1087#1086#1083#1085#1080#1090#1100' '#1090#1072#1073#1083#1080#1094#1091
      TabOrder = 2
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 599
      Top = 134
      Width = 121
      Height = 25
      Caption = #1057#1086#1088#1090#1080#1088#1086#1074#1072#1090#1100
      TabOrder = 3
      OnClick = Button2Click
    end
    object Button3: TButton
      Left = 599
      Top = 197
      Width = 121
      Height = 25
      Caption = #1055#1086#1080#1089#1082
      TabOrder = 4
      OnClick = Button3Click
    end
    object Edit2: TEdit
      Left = 599
      Top = 170
      Width = 121
      Height = 21
      TabOrder = 5
      Text = #1042#1074#1077#1076#1080#1090#1077' '#1082#1083#1102#1095
    end
    object Button4: TButton
      Left = 575
      Top = 228
      Width = 145
      Height = 25
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100'/'#1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100
      TabOrder = 6
      OnClick = Button4Click
    end
    object Edit1: TEdit
      Left = 599
      Top = 32
      Width = 121
      Height = 21
      TabOrder = 7
    end
    object Button8: TButton
      Left = 599
      Top = 259
      Width = 121
      Height = 25
      Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1092#1072#1081#1083
      TabOrder = 8
      OnClick = Button8Click
    end
    object Button9: TButton
      Left = 599
      Top = 306
      Width = 121
      Height = 25
      Caption = #1057#1093#1077#1084#1072
      TabOrder = 9
      OnClick = Button9Click
    end
  end
  object Panel2: TPanel
    Left = 48
    Top = 40
    Width = 441
    Height = 321
    TabOrder = 1
    Visible = False
    object Edit3: TEdit
      Left = 24
      Top = 48
      Width = 121
      Height = 21
      TabOrder = 0
      Text = #1042#1074#1077#1076#1080#1090#1077' '#1090#1080#1087' '#1094#1080#1092#1088#1086#1081
    end
    object Edit4: TEdit
      Left = 24
      Top = 104
      Width = 121
      Height = 21
      TabOrder = 1
      Text = #1055#1086#1088#1103#1076#1082#1086#1074#1099#1081' '#1085#1086#1084#1077#1088
    end
    object Edit5: TEdit
      Left = 24
      Top = 151
      Width = 121
      Height = 21
      TabOrder = 2
      Text = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086
    end
    object Edit6: TEdit
      Left = 296
      Top = 48
      Width = 121
      Height = 21
      TabOrder = 3
      Text = #1057#1083#1077#1076#1103#1097#1080#1081
    end
    object Edit7: TEdit
      Left = 296
      Top = 104
      Width = 121
      Height = 21
      TabOrder = 4
      Text = 'X'
    end
    object Edit8: TEdit
      Left = 296
      Top = 151
      Width = 121
      Height = 21
      TabOrder = 5
      Text = 'Y'
    end
    object Edit9: TEdit
      Left = 160
      Top = 16
      Width = 121
      Height = 21
      TabOrder = 6
      Text = #1042#1074#1077#1076#1080#1090#1077' '#1085#1086#1084#1077#1088' '#1089#1090#1088#1086#1082#1080
    end
    object Button5: TButton
      Left = 296
      Top = 216
      Width = 115
      Height = 25
      Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100
      TabOrder = 7
      OnClick = Button5Click
    end
    object Button6: TButton
      Left = 24
      Top = 216
      Width = 75
      Height = 25
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100
      TabOrder = 8
      OnClick = Button6Click
    end
    object Button7: TButton
      Left = 176
      Top = 216
      Width = 75
      Height = 25
      Caption = #1053#1072#1079#1072#1076
      TabOrder = 9
      OnClick = Button7Click
    end
  end
  object Panel3: TPanel
    Left = 0
    Top = 0
    Width = 725
    Height = 480
    Align = alClient
    TabOrder = 2
    Visible = False
    object PaintBox1: TPaintBox
      Left = 1
      Top = 1
      Width = 723
      Height = 478
      Align = alClient
      OnPaint = PaintBox1Paint
      ExplicitLeft = 2
      ExplicitTop = 2
    end
    object Button10: TButton
      Left = 32
      Top = 306
      Width = 75
      Height = 25
      Caption = #1053#1072#1079#1072#1076
      TabOrder = 0
      OnClick = Button10Click
    end
  end
end
