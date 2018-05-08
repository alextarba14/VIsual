#pragma once

namespace Project7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tabs
	/// </summary>
	public ref class Tabs : public System::Windows::Forms::Form
	{
	public:
		Tabs(void)
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
		~Tabs()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::TabPage^  tabPage7;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox2;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox3;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox4;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox5;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox6;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox7;

	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Tabs::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox3 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox4 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox5 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox6 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox7 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage8->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Location = System::Drawing::Point(-9, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->Padding = System::Drawing::Point(10, 10);
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(667, 446);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Transparent;
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tabPage1->Location = System::Drawing::Point(4, 39);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(659, 403);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Welcome";
			this->tabPage1->Click += gcnew System::EventHandler(this, &Tabs::tabPage1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(530, 334);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"To Appetizers";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Tabs::button2_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Turquoise;
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->Controls->Add(this->button15);
			this->tabPage2->Controls->Add(this->checkedListBox1);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Location = System::Drawing::Point(4, 39);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(659, 403);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Appetizers";
			this->tabPage2->Click += gcnew System::EventHandler(this, &Tabs::tabPage2_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(286, 336);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(108, 49);
			this->button15->TabIndex = 2;
			this->button15->Text = L"Add";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Tabs::button15_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Egg Rolls\t\t\t5$\t", L"Spring Rolls\t\t\t4$",
					L"Vegetable Dumplings\t\t3$", L"Shrimp Toasts\t\t\t2$", L"Pork Dumplings\t\t5$", L"Scallion Pancakes\t\t7$", L"Steamed Juice Bun\t\t4$",
					L"Crab Rangoon\t\t\t3$", L"Steamed Shrimp Dumplings\t7$", L"Cucumber Salad\t\t5$", L"Tuna Sandwich\t\t\t4$", L"Club Sandwich\t\t\t3$"
			});
			this->checkedListBox1->Location = System::Drawing::Point(107, 17);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(439, 303);
			this->checkedListBox1->TabIndex = 1;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Tabs::checkedListBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(530, 334);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"To Soups";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Tabs::button1_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->Controls->Add(this->button14);
			this->tabPage3->Controls->Add(this->checkedListBox2);
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Location = System::Drawing::Point(4, 39);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(659, 403);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Soups";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(286, 336);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(108, 49);
			this->button14->TabIndex = 3;
			this->button14->Text = L"Add";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Tabs::button14_Click);
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->checkedListBox2->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Veg Soup\t\t\t10$", L"French Onion Soup\t\t12$",
					L"Chicken Mushroom Soup\t13$", L"Spinach Mushroom Soup\t9$", L"Cream of tomato Soup\t\t11$", L"Tomato Egg Drop Soup\t\t15$",
					L"Seafood Soup\t\t\t12$", L"Chicken HOT&Sour Soup\t11$", L"Veg HOT&Sour Soup\t\t5$"
			});
			this->checkedListBox2->Location = System::Drawing::Point(117, 56);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(439, 234);
			this->checkedListBox2->TabIndex = 2;
			this->checkedListBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Tabs::checkedListBox2_SelectedIndexChanged);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(27, 334);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(108, 49);
			this->button8->TabIndex = 1;
			this->button8->Text = L"To Appetizers";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Tabs::button8_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(530, 334);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 49);
			this->button3->TabIndex = 0;
			this->button3->Text = L"To Pork";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Tabs::button3_Click);
			// 
			// tabPage6
			// 
			this->tabPage6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage6.BackgroundImage")));
			this->tabPage6->Controls->Add(this->button16);
			this->tabPage6->Controls->Add(this->checkedListBox3);
			this->tabPage6->Controls->Add(this->button9);
			this->tabPage6->Controls->Add(this->button4);
			this->tabPage6->Location = System::Drawing::Point(4, 39);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(659, 403);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Pork";
			this->tabPage6->UseVisualStyleBackColor = true;
			this->tabPage6->Click += gcnew System::EventHandler(this, &Tabs::tabPage6_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(286, 336);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(108, 49);
			this->button16->TabIndex = 3;
			this->button16->Text = L"Add";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Tabs::button16_Click);
			// 
			// checkedListBox3
			// 
			this->checkedListBox3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->checkedListBox3->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox3->FormattingEnabled = true;
			this->checkedListBox3->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Pork Lemon Grass With Chilli\t\t15$\t",
					L"Pork With Sate\t\t\t\t13$", L"Vietnamese Swee&Sour Pork\t\t12$", L"Pork Mixed Vegetabel(Cashew Nut)\t14$", L"Stir Fried Pork With Mushrooms\t12$",
					L"Pork With Curry\t\t\t\t12$", L"Stir Fried Pork with Ginger\t\t12$", L"Stew Pork in Hot Pot\t\t\t13$"
			});
			this->checkedListBox3->Location = System::Drawing::Point(116, 66);
			this->checkedListBox3->Name = L"checkedListBox3";
			this->checkedListBox3->Size = System::Drawing::Size(439, 211);
			this->checkedListBox3->TabIndex = 2;
			this->checkedListBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Tabs::checkedListBox3_SelectedIndexChanged);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(27, 334);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(108, 49);
			this->button9->TabIndex = 1;
			this->button9->Text = L"To Soups";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Tabs::button9_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(530, 334);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(108, 49);
			this->button4->TabIndex = 0;
			this->button4->Text = L"To Chicken ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Tabs::button4_Click);
			// 
			// tabPage7
			// 
			this->tabPage7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage7.BackgroundImage")));
			this->tabPage7->Controls->Add(this->button17);
			this->tabPage7->Controls->Add(this->checkedListBox4);
			this->tabPage7->Controls->Add(this->button10);
			this->tabPage7->Controls->Add(this->button5);
			this->tabPage7->Location = System::Drawing::Point(4, 39);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(659, 403);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L"Chicken";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(286, 336);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(108, 49);
			this->button17->TabIndex = 3;
			this->button17->Text = L"Add";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Tabs::button17_Click);
			// 
			// checkedListBox4
			// 
			this->checkedListBox4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->checkedListBox4->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox4->FormattingEnabled = true;
			this->checkedListBox4->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Quarter Dark\t\t\t13$", L"Quarter Whise\t\t\t15$",
					L"Half Chicken\t\t\t15$", L"Whole Chicken\t\t\t12$", L"Whole Chicken Meal\t\t13$", L"Chicken Caesar Pita or Wrap\t12$", L"Boneless Breast Only\t\t14$"
			});
			this->checkedListBox4->Location = System::Drawing::Point(111, 67);
			this->checkedListBox4->Name = L"checkedListBox4";
			this->checkedListBox4->Size = System::Drawing::Size(439, 188);
			this->checkedListBox4->TabIndex = 2;
			this->checkedListBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Tabs::checkedListBox4_SelectedIndexChanged);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(27, 334);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(108, 49);
			this->button10->TabIndex = 1;
			this->button10->Text = L"To Pork";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Tabs::button10_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(530, 334);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(108, 49);
			this->button5->TabIndex = 0;
			this->button5->Text = L"To Salads";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Tabs::button5_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage4.BackgroundImage")));
			this->tabPage4->Controls->Add(this->button18);
			this->tabPage4->Controls->Add(this->checkedListBox5);
			this->tabPage4->Controls->Add(this->button11);
			this->tabPage4->Controls->Add(this->button6);
			this->tabPage4->Location = System::Drawing::Point(4, 39);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(659, 403);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Salads";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(286, 336);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(108, 49);
			this->button18->TabIndex = 3;
			this->button18->Text = L"Add";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Tabs::button18_Click);
			// 
			// checkedListBox5
			// 
			this->checkedListBox5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->checkedListBox5->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox5->FormattingEnabled = true;
			this->checkedListBox5->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Napa Valley Salad\t\t\t15$", L"Market Toss Salad\t\t\t12$",
					L"Crispy or Original Chicken Salad\t8$", L"Chicken Caesar Salad\t\t\t7$", L"Hawaiian Chicken Salad\t\t13$", L"Southwest Taco Salad\t\t\t10$",
					L"Garden Salad\t\t\t\t15$", L"Caesar Salad\t\t\t\t12$"
			});
			this->checkedListBox5->Location = System::Drawing::Point(118, 70);
			this->checkedListBox5->Name = L"checkedListBox5";
			this->checkedListBox5->Size = System::Drawing::Size(448, 211);
			this->checkedListBox5->TabIndex = 2;
			this->checkedListBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &Tabs::checkedListBox5_SelectedIndexChanged);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(27, 334);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(108, 49);
			this->button11->TabIndex = 1;
			this->button11->Text = L"To Chicken";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Tabs::button11_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(530, 334);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(108, 49);
			this->button6->TabIndex = 0;
			this->button6->Text = L"To Beverages";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Tabs::button6_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage5.BackgroundImage")));
			this->tabPage5->Controls->Add(this->button19);
			this->tabPage5->Controls->Add(this->checkedListBox6);
			this->tabPage5->Controls->Add(this->button12);
			this->tabPage5->Controls->Add(this->button7);
			this->tabPage5->Location = System::Drawing::Point(4, 39);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tabPage5->Size = System::Drawing::Size(659, 403);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Beverages";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(286, 336);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(108, 49);
			this->button19->TabIndex = 3;
			this->button19->Text = L"Add";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Tabs::button19_Click);
			// 
			// checkedListBox6
			// 
			this->checkedListBox6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->checkedListBox6->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox6->FormattingEnabled = true;
			this->checkedListBox6->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"Brewed Hot Coffe\t\t2$", L"Iced Coffee\t\t\t2$",
					L"Flavored Coffee\t\t4$", L"Chai\t\t\t\t5$", L"Tea\t\t\t\t2$", L"Iced Tea\t\t\t3$", L"Herbal Tea\t\t\t1$", L"Hot Chocolate\t\t\t2$",
					L"Milk\t\t\t\t3$", L"Chocolate Milk\t\t\t4$", L"Soft Drinks\t\t\t5$", L"Lemonade\t\t\t3$", L"Milkshakes\t\t\t5$", L"Budweiser\t\t\t10$",
					L"Bud Light\t\t\t6$", L"Coors Light\t\t\t21$", L"Becks\t\t\t\t3$", L"Copper Ale\t\t\t21$", L"Tnew Castle\t\t\t12$", L"Labatt Blue\t\t\t12$",
					L"Heineken\t\t\t2$", L"Skol\t\t\t\t3$", L"Red Wine\t\t\t15$", L"White Zinfandel\t\t\t16$"
			});
			this->checkedListBox6->Location = System::Drawing::Point(118, 29);
			this->checkedListBox6->Name = L"checkedListBox6";
			this->checkedListBox6->Size = System::Drawing::Size(451, 257);
			this->checkedListBox6->TabIndex = 2;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(27, 334);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(108, 49);
			this->button12->TabIndex = 1;
			this->button12->Text = L"To Salads";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Tabs::button12_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(530, 334);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(108, 49);
			this->button7->TabIndex = 0;
			this->button7->Text = L"To order";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Tabs::button7_Click);
			// 
			// tabPage8
			// 
			this->tabPage8->BackColor = System::Drawing::Color::Chocolate;
			this->tabPage8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage8.BackgroundImage")));
			this->tabPage8->Controls->Add(this->label2);
			this->tabPage8->Controls->Add(this->button20);
			this->tabPage8->Controls->Add(this->checkedListBox7);
			this->tabPage8->Controls->Add(this->label1);
			this->tabPage8->Controls->Add(this->button13);
			this->tabPage8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage8->Location = System::Drawing::Point(4, 39);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(659, 403);
			this->tabPage8->TabIndex = 7;
			this->tabPage8->Text = L"Goodbye";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(111, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(510, 24);
			this->label2->TabIndex = 7;
			this->label2->Text = L"If you don\'t want any of these,you can simply uncheck them!";
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(448, 334);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(130, 49);
			this->button20->TabIndex = 6;
			this->button20->Text = L"Send Order";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Tabs::button20_Click);
			// 
			// checkedListBox7
			// 
			this->checkedListBox7->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->checkedListBox7->FormattingEnabled = true;
			this->checkedListBox7->Location = System::Drawing::Point(139, 80);
			this->checkedListBox7->Name = L"checkedListBox7";
			this->checkedListBox7->Size = System::Drawing::Size(439, 165);
			this->checkedListBox7->TabIndex = 3;
			this->checkedListBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &Tabs::checkedListBox7_SelectedIndexChanged_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Snow;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(265, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 32);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Your Order:";
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(27, 334);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(108, 49);
			this->button13->TabIndex = 0;
			this->button13->Text = L"To Beverages";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Tabs::button13_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(226, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(243, 36);
			this->label3->TabIndex = 2;
			this->label3->Text = L"This is our menu!";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(65, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(589, 36);
			this->label4->TabIndex = 3;
			this->label4->Text = L"If you like something just double-click them,";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(97, 161);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(506, 36);
			this->label5->TabIndex = 4;
			this->label5->Text = L"And then just press the \"Add\" button!";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(272, 211);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(197, 36);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Bon-Appetite!";
			// 
			// Tabs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(656, 439);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Tabs";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tabs";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Tabs::Tabs_FormClosing);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage7->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Tabs_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		if (MessageBox::Show("You didn't finish the command,are you sure you want to exit?", "Restaurant", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == ::System::Windows::Forms::DialogResult::Yes)
			Application::ExitThread();
		else
			e->Cancel = true;
	}
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tabPage6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab(tabPage8);
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab(tabPage2);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab(tabPage3);
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab(tabPage2);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab(tabPage6);
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab(tabPage3);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab(tabPage7);
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab(tabPage6);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab(tabPage4);
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab(tabPage7);
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab(tabPage5);
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab(tabPage4);
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab(tabPage5);
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkedListBox7_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	for each (String^ s in checkedListBox1->CheckedItems)
	{   
		if (!checkedListBox7->Items->Contains(s))
			checkedListBox7->Items->Add(s);
	}
	for (int i = 0; i < checkedListBox7->Items->Count; i++)
	{
		checkedListBox7->SetItemChecked(i, true);
	}
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	for each (String^ s in checkedListBox2->CheckedItems)
	{
		if (!checkedListBox7->Items->Contains(s))
			checkedListBox7->Items->Add(s);
	}
	for (int i = 0; i < checkedListBox7->Items->Count; i++)
	{
		checkedListBox7->SetItemChecked(i, true);
	}
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	for each (String^ s in checkedListBox3->CheckedItems)
	{
		if (!checkedListBox7->Items->Contains(s))
			checkedListBox7->Items->Add(s);
	}
	for (int i = 0; i < checkedListBox7->Items->Count; i++)
	{
		checkedListBox7->SetItemChecked(i, true);
	}
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	for each (String^ s in checkedListBox4->CheckedItems)
	{
		if (!checkedListBox7->Items->Contains(s))
			checkedListBox7->Items->Add(s);
	}
	for (int i = 0; i < checkedListBox7->Items->Count; i++)
	{
		checkedListBox7->SetItemChecked(i, true);
	}
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	for each (String^ s in checkedListBox5->CheckedItems)
	{
		if (!checkedListBox7->Items->Contains(s))
			checkedListBox7->Items->Add(s);
	}
	for (int i = 0; i < checkedListBox7->Items->Count; i++)
	{
		checkedListBox7->SetItemChecked(i, true);
	}
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	for each (String^ s in checkedListBox6->CheckedItems)
	{
		if (!checkedListBox7->Items->Contains(s))
			checkedListBox7->Items->Add(s);
	}
	for (int i = 0; i < checkedListBox7->Items->Count; i++)
	{
		checkedListBox7->SetItemChecked(i, true);
	}
	
}
private: System::Void checkedListBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkedListBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkedListBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkedListBox7_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void checkedListBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	double sum = 0;
	for each (String^ s in checkedListBox7->CheckedItems)
	{
		int i;
		double nr = 0;
		for (i = 0; i < s->Length; ++i)
		{
			if (s[i] == '$')
			{
				int ok = 0;

				if (s[i - 2] >= '0' && s[i - 2] <= '9')
				{
					nr = s[i - 2] - '0';
					ok = 1;
				}
				if (s[i - 1] >= '0' && s[i - 1] <= '9')
					if (ok == 1)
						nr = nr * 10 + s[i - 1] - '0';
					else
						nr = s[i - 1] - '0';


			}

		}
		sum = sum + nr;

	}
	if (MessageBox::Show("The price from your order is:"+sum.ToString() + "$"+"\n\tDo you agree?", "Order", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
		int ok = 1;
}
};
}
