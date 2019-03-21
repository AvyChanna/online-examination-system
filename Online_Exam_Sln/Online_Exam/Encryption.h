#pragma once
namespace Encryption{
	using namespace System;
	using namespace System::Security::Cryptography;

	String ^Encrypt(String^ str){
		String ^ res = L"";
		SHA512 ^ShaObj = gcnew SHA512Managed();
		array<Byte> ^BytesToHash = System::Text::Encoding::UTF8->GetBytes(str);
		array<Byte> ^ResultArray = ShaObj->ComputeHash(BytesToHash);
		for each(Byte ByteWord in ResultArray){
			res += ByteWord.ToString("X2");
		}
		//ShaObj->Dispose();
		return res;
	}
	String ^MakeSalt(){
		String ^Salt = L"";
		String ^Charset = L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789+-";
		array<Char> ^Chars = Charset->ToCharArray();
		array<Byte> ^Bytes = gcnew array<Byte>(10);
		RNGCryptoServiceProvider ^RngObj = gcnew RNGCryptoServiceProvider();
		RngObj->GetBytes(Bytes);
		for each(Byte B in Bytes){
			Salt += Chars[B%64].ToString();
		}
		//RngObj->Dispose();
		return Salt;
	}
	String ^EncryptPassword(String^ Password, String^ Salt){
		return Encrypt(Encrypt(Password)+Salt);
	}
}