#include "LoginClass.h"


LoginClass::LoginClass(System::String^ a,System::String^ b)
{
	this->user = a;
	this->password = b;
}
LoginClass::LoginClass(){}
LoginClass::LoginClass(LoginClass^ &copier)
{
	user = copier->user;
	password = copier->password;
}
void LoginClass::SetPass(System::String^ p) { this->password = p; }
void LoginClass::SetUser(System::String^ u) { this->user = u; }
System::String^ LoginClass::GetUser() { return this->user; }
System::String^ LoginClass::GetPass() { return this->password; }
