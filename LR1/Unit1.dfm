object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 493
  ClientWidth = 620
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 2
    Top = 0
    Width = 625
    Height = 609
  end
  object Button1: TButton
    Left = 266
    Top = 232
    Width = 97
    Height = 25
    Caption = 'Open  Door'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 171
    Top = 256
    Width = 89
    Height = 25
    Caption = 'Open Window'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 248
    Top = 48
    Width = 65
    Height = 25
    Caption = 'Open Roof'
    TabOrder = 2
    OnClick = Button3Click
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 592
    Top = 16
  end
  object Timer2: TTimer
    OnTimer = Timer2Timer
    Left = 592
    Top = 72
  end
end
