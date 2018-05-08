#pragma once
ref class LoginClass
{
public:
	LoginClass(System::String ^, System::String^);
	LoginClass();
	LoginClass(LoginClass^ &copier);
	void SetUser(System::String^);
	void SetPass(System::String^);
	System::String^ GetUser();
	System::String^ GetPass();
	
private:
	System::String^ user;
	System::String^ password;

};

