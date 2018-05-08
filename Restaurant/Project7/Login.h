#pragma once
#include "Tabs.h"
#include "LoginClass.h"
#include "Functions.h"
namespace Project7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(154, 117);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username";
			this->label1->Click += gcnew System::EventHandler(this, &Login::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(159, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lavender;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(350, 282);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 56);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(189, 282);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 56);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Submit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Login::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(295, 119);
			this->textBox1->MaxLength = 15;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(137, 30);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Login::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(295, 190);
			this->textBox2->MaxLength = 12;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(137, 27);
			this->textBox2->TabIndex = 5;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(233, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(225, 38);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Please,Log-in!";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(656, 439);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Login::Login_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->Clear();
	this->textBox2->Clear();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ fileName1 = "Username.txt";
	String^ fileName2 = "Password.txt";

	String^ x1 = textBox1->Text;
	String^ x2 = textBox2->Text;
	LoginClass^ log = gcnew LoginClass(x1,x2);
	
	CheckIfEmpty(log->GetUser(), log->GetPass());
	int nr = 0;
	int ok=SearchUsername(log->GetUser(), fileName1, nr);
	if (ok == 0)
	{
		MessageBox::Show("Username or password incorrect!", "Login error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		this->textBox1->Clear();
		this->textBox2->Clear();
	
	}
	else {
	
		int ok = CheckPassword(log->GetPass(), fileName2, nr);
		if (ok==0)
		{
			
			MessageBox::Show("Username or password incorrect!", "Login error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->textBox1->Clear();
			this->textBox2->Clear();
			
		}
		else
			if (x1 != ""&&x2 != "")
		{   
			
			MessageBox::Show("Authentification succes!", "Login", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->textBox1->Clear();
			this->textBox2->Clear();
			Tabs^ tabs = gcnew Tabs();
			tabs->Show();
			Login::Hide();
		}





	}


	
}
private: System::Void Login_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Login_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	if (MessageBox::Show("You didn't log in,are you sure you want to exit?", "Restaurant", MessageBoxButtons::YesNo,MessageBoxIcon::Warning) == ::System::Windows::Forms::DialogResult::Yes)
		Application::ExitThread();
	else
		e->Cancel = true;
}
};
}
