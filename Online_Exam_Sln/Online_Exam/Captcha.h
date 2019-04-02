#pragma once
using namespace System;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
using namespace System::Security::Cryptography;
namespace Captcha{
	public ref class CaptchaClass{
	public:
		String ^Text;
		int Width;
		int Height;
		Bitmap ^Image;
		Random ^ran;
		CaptchaClass(int www, int hhh)
		{
			Text = "";
			ran = gcnew Random();
			String ^Charset = "abcdefghjkmnpqrstuvwxyzABCDEFGHJKMNPQRSTUVWXYZ23456789";
			array<Char> ^Chars = Charset->ToCharArray();
			array<Byte> ^Bytes = gcnew array<Byte>(5);
			RNGCryptoServiceProvider ^RngObj = gcnew RNGCryptoServiceProvider();
			RngObj->GetBytes(Bytes);
			for each(Byte B in Bytes){
				Text += Chars[B % Charset->Length].ToString();
			}
			Width = www;
			Height = hhh;
			Font ^f = gcnew Font("Verdana", 50.0F);
			String ^ff = f->Name;
			Image = gcnew Bitmap(Width, Height, Imaging::PixelFormat::Format32bppArgb);
			Graphics ^g = Graphics::FromImage(Image);
			g->SmoothingMode = SmoothingMode::AntiAlias;
			RectangleF rect = RectangleF(0, 0, Width, Height);

			HatchBrush ^hb = gcnew HatchBrush(HatchStyle::Weave, Color::Black, Color::White);
			g->FillRectangle(hb, rect);
			//hb->Dispose();
			SizeF s;
			int fontSize = rect.Height + 15;
			Font ^cf;
			do{
				Math::Max(Threading::Interlocked::Decrement(fontSize), fontSize + 1);
				cf = gcnew Font(ff, fontSize, FontStyle::Bold);
				s = g->MeasureString(Text, cf);
			} while (s.Width > rect.Width);
			StringFormat ^sf = gcnew StringFormat();
			sf->Alignment = StringAlignment::Center;
			sf->LineAlignment = StringAlignment::Center;
			GraphicsPath ^gp = gcnew GraphicsPath();
			gp->AddString(Text, cf->FontFamily, static_cast<int>(cf->Style), cf->Size, rect, sf);
			Single cs = 5.0F;

			array<PointF> ^pf = gcnew array<PointF>(4);
			pf[0] = PointF(ran->Next(rect.Width) / cs, ran->Next(rect.Height) / cs);
			pf[1] = PointF(rect.Width - (ran->Next(rect.Width) / cs), ran->Next(rect.Height) / cs);
			pf[2] = PointF(ran->Next(rect.Width) / cs, rect.Height - (ran->Next(rect.Height) / cs));
			pf[3] = PointF(rect.Width - (ran->Next(rect.Width) / cs), rect.Height - (ran->Next(rect.Height) / cs));
			Matrix ^cm = gcnew Matrix();
			cm->Translate(0.0F, 0.0F);
			gp->Warp(pf, rect, cm, WarpMode::Perspective, 0.0F);
			HatchBrush ^hb2 = gcnew HatchBrush(HatchStyle::Percent80, Color::Black, Color::White);
			g->FillPath(hb2, gp);
			//hb->Dispose();

			HatchBrush ^hb3 = gcnew HatchBrush(HatchStyle::LargeCheckerBoard, Color::Black, Color::White);
			int m = Math::Max(rect.Width, rect.Height);
			int count = 0;
			while (count < (rect.Width * rect.Height / 30.0F))
			{
				int xAxis = ran->Next(rect.Width);
				int yAxis = ran->Next(rect.Height);
				int wX = Math::Min(ran->Next(m / 50), 3);
				int hY = Math::Min(ran->Next(m / 50), 3);
				g->FillEllipse(hb3, xAxis, yAxis, wX, hY);
				Math::Min(System::Threading::Interlocked::Increment(count), count - 1);
			}
			GC::Collect();
		}
	};
}