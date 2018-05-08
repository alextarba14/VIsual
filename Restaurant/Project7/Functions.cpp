#include "Functions.h"
using namespace System::Windows::Forms;
void CheckIfEmpty(System::String^ x1, System::String^ x2)
{
	if (x1 == ""&&x2 == "")
		   MessageBox::Show("Please enter username and password", "Login error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else
		if (x1 == "")
			MessageBox::Show("Please enter an username ", "Login error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else
			if (x2 == "")
				MessageBox::Show("Please enter a password", "Login error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
int SearchUsername(System::String^ s,System::String^ fileName1,int& nr)
{
	int ok = 0;
	System::IO::StreamReader^ readf = gcnew System::IO::StreamReader(fileName1);
	while (readf->Peek() >= 0)		//verifica daca exista deja un utilizator cu acest nume
	{
		System::String^ b;
		b = readf->ReadLine();
		nr++;
		if (b == s && s != "")
		{
		    ok = 1;
			break;
		}


	}
	readf->Close();
	return ok;
}

void SaveUserPass(System::String^ x1, System::String^ x2,System::String^ fileName1,System::String^ fileName2)
{   
	System::IO::StreamWriter^ sw1 = gcnew System::IO::StreamWriter(fileName1, true);
	System::IO::StreamWriter^ sw2 = gcnew System::IO::StreamWriter(fileName2, true);
	sw1->WriteLine(x1);
	sw2->WriteLine(x2);
	sw1->Close();
	sw2->Close();
}
int CheckPassword(System::String^ x2, System::String^ fileName2, int nr)
{
	int ok = 0;
	System::IO::StreamReader^ readf = gcnew System::IO::StreamReader(fileName2);
	int nr2 = 0;
	System::String^ b;
	while (readf->Peek() >= 0 && nr2 != nr)//cauta parola asociata username-ului respectiv
	{

		b = readf->ReadLine();
		nr2++;
	}
	if (b != x2)
		ok = 0;
	else
		ok = 1;
	readf->Close();
	return ok;
}