#pragma once


namespace TicTacToeGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Grid1L;
	private: System::Windows::Forms::Button^ Grid1M;
	private: System::Windows::Forms::Button^ Grid1R;
	private: System::Windows::Forms::Button^ Grid2R;
	protected:

	protected:



	private: System::Windows::Forms::Button^ Grid2M;

	private: System::Windows::Forms::Button^ Grid2L;
	private: System::Windows::Forms::Button^ Grid3R;


	private: System::Windows::Forms::Button^ Grid3M;

	private: System::Windows::Forms::Button^ Grid3L;
	private: System::Windows::Forms::Button^ ResetButton;
	private: System::Windows::Forms::Label^ XPoints;
	private: System::Windows::Forms::Label^ OPoints;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Grid1L = (gcnew System::Windows::Forms::Button());
			this->Grid1M = (gcnew System::Windows::Forms::Button());
			this->Grid1R = (gcnew System::Windows::Forms::Button());
			this->Grid2R = (gcnew System::Windows::Forms::Button());
			this->Grid2M = (gcnew System::Windows::Forms::Button());
			this->Grid2L = (gcnew System::Windows::Forms::Button());
			this->Grid3R = (gcnew System::Windows::Forms::Button());
			this->Grid3M = (gcnew System::Windows::Forms::Button());
			this->Grid3L = (gcnew System::Windows::Forms::Button());
			this->ResetButton = (gcnew System::Windows::Forms::Button());
			this->XPoints = (gcnew System::Windows::Forms::Label());
			this->OPoints = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Grid1L
			// 
			this->Grid1L->AutoSize = true;
			this->Grid1L->Font = (gcnew System::Drawing::Font(L"Arial", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Grid1L->Location = System::Drawing::Point(100, 148);
			this->Grid1L->Name = L"Grid1L";
			this->Grid1L->Size = System::Drawing::Size(185, 168);
			this->Grid1L->TabIndex = 0;
			this->Grid1L->UseVisualStyleBackColor = true;
			this->Grid1L->Click += gcnew System::EventHandler(this, &MyForm::Grid1L_Click);
			// 
			// Grid1M
			// 
			this->Grid1M->AutoSize = true;
			this->Grid1M->Font = (gcnew System::Drawing::Font(L"Arial", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Grid1M->Location = System::Drawing::Point(291, 148);
			this->Grid1M->Name = L"Grid1M";
			this->Grid1M->Size = System::Drawing::Size(185, 168);
			this->Grid1M->TabIndex = 1;
			this->Grid1M->UseVisualStyleBackColor = true;
			this->Grid1M->Click += gcnew System::EventHandler(this, &MyForm::Grid1M_Click);
			// 
			// Grid1R
			// 
			this->Grid1R->AutoSize = true;
			this->Grid1R->Font = (gcnew System::Drawing::Font(L"Arial", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Grid1R->Location = System::Drawing::Point(482, 148);
			this->Grid1R->Name = L"Grid1R";
			this->Grid1R->Size = System::Drawing::Size(185, 168);
			this->Grid1R->TabIndex = 2;
			this->Grid1R->UseVisualStyleBackColor = true;
			this->Grid1R->Click += gcnew System::EventHandler(this, &MyForm::Grid1R_Click);
			// 
			// Grid2R
			// 
			this->Grid2R->AutoSize = true;
			this->Grid2R->Font = (gcnew System::Drawing::Font(L"Arial", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Grid2R->Location = System::Drawing::Point(482, 322);
			this->Grid2R->Name = L"Grid2R";
			this->Grid2R->Size = System::Drawing::Size(185, 168);
			this->Grid2R->TabIndex = 5;
			this->Grid2R->UseVisualStyleBackColor = true;
			this->Grid2R->Click += gcnew System::EventHandler(this, &MyForm::Grid2R_Click);
			// 
			// Grid2M
			// 
			this->Grid2M->AutoSize = true;
			this->Grid2M->Font = (gcnew System::Drawing::Font(L"Arial", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Grid2M->Location = System::Drawing::Point(291, 322);
			this->Grid2M->Name = L"Grid2M";
			this->Grid2M->Size = System::Drawing::Size(185, 168);
			this->Grid2M->TabIndex = 4;
			this->Grid2M->UseVisualStyleBackColor = true;
			this->Grid2M->Click += gcnew System::EventHandler(this, &MyForm::Grid2M_Click);
			// 
			// Grid2L
			// 
			this->Grid2L->AutoSize = true;
			this->Grid2L->Font = (gcnew System::Drawing::Font(L"Arial", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Grid2L->Location = System::Drawing::Point(100, 322);
			this->Grid2L->Name = L"Grid2L";
			this->Grid2L->Size = System::Drawing::Size(185, 168);
			this->Grid2L->TabIndex = 3;
			this->Grid2L->UseVisualStyleBackColor = true;
			this->Grid2L->Click += gcnew System::EventHandler(this, &MyForm::Grid2L_Click);
			// 
			// Grid3R
			// 
			this->Grid3R->AutoSize = true;
			this->Grid3R->Font = (gcnew System::Drawing::Font(L"Arial", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Grid3R->Location = System::Drawing::Point(482, 496);
			this->Grid3R->Name = L"Grid3R";
			this->Grid3R->Size = System::Drawing::Size(185, 168);
			this->Grid3R->TabIndex = 8;
			this->Grid3R->UseVisualStyleBackColor = true;
			this->Grid3R->Click += gcnew System::EventHandler(this, &MyForm::Grid3R_Click);
			// 
			// Grid3M
			// 
			this->Grid3M->AutoSize = true;
			this->Grid3M->Font = (gcnew System::Drawing::Font(L"Arial", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Grid3M->Location = System::Drawing::Point(291, 496);
			this->Grid3M->Name = L"Grid3M";
			this->Grid3M->Size = System::Drawing::Size(185, 168);
			this->Grid3M->TabIndex = 7;
			this->Grid3M->UseVisualStyleBackColor = true;
			this->Grid3M->Click += gcnew System::EventHandler(this, &MyForm::Grid3M_Click);
			// 
			// Grid3L
			// 
			this->Grid3L->AutoSize = true;
			this->Grid3L->Font = (gcnew System::Drawing::Font(L"Arial", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Grid3L->Location = System::Drawing::Point(100, 496);
			this->Grid3L->Name = L"Grid3L";
			this->Grid3L->Size = System::Drawing::Size(185, 168);
			this->Grid3L->TabIndex = 6;
			this->Grid3L->UseVisualStyleBackColor = true;
			this->Grid3L->Click += gcnew System::EventHandler(this, &MyForm::Grid3L_Click);
			// 
			// ResetButton
			// 
			this->ResetButton->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResetButton->Location = System::Drawing::Point(315, 43);
			this->ResetButton->Name = L"ResetButton";
			this->ResetButton->Size = System::Drawing::Size(119, 30);
			this->ResetButton->TabIndex = 9;
			this->ResetButton->Text = L"Reset";
			this->ResetButton->UseVisualStyleBackColor = true;
			this->ResetButton->Click += gcnew System::EventHandler(this, &MyForm::ResetButton_Click);
			// 
			// XPoints
			// 
			this->XPoints->AutoSize = true;
			this->XPoints->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->XPoints->Location = System::Drawing::Point(291, 111);
			this->XPoints->Name = L"XPoints";
			this->XPoints->Size = System::Drawing::Size(0, 18);
			this->XPoints->TabIndex = 10;
			this->XPoints->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// OPoints
			// 
			this->OPoints->AutoSize = true;
			this->OPoints->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OPoints->Location = System::Drawing::Point(384, 111);
			this->OPoints->Name = L"OPoints";
			this->OPoints->Size = System::Drawing::Size(0, 18);
			this->OPoints->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(291, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 18);
			this->label1->TabIndex = 12;
			this->label1->Text = L"X Points:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(384, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 18);
			this->label2->TabIndex = 13;
			this->label2->Text = L"O Points:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(784, 761);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->OPoints);
			this->Controls->Add(this->XPoints);
			this->Controls->Add(this->ResetButton);
			this->Controls->Add(this->Grid3R);
			this->Controls->Add(this->Grid3M);
			this->Controls->Add(this->Grid3L);
			this->Controls->Add(this->Grid2R);
			this->Controls->Add(this->Grid2M);
			this->Controls->Add(this->Grid2L);
			this->Controls->Add(this->Grid1R);
			this->Controls->Add(this->Grid1M);
			this->Controls->Add(this->Grid1L);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Tic Tac Toe Game";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
//Variables 
int count  =0, XPoints_value = 0, OPoints_value = 0;
String^ value;
		
//Condition


bool condition() 
{
	String ^check = "";
	int count = 0;
	for (int i = 0; i <=1; i++) {
		if (i == 0) {
			check = "X";
		}
		else {
			check = "O";
		}

		//Checks
		if ((Grid1L->Text == check) && (Grid1M->Text == check) && (Grid1R->Text == check)) //top row horizontal
		{
			if (check == "X") {
				XPoints_value += 1;
				XPoints->Text = System::Convert::ToString(XPoints_value);
			}
			else {
				OPoints_value += 1;
				OPoints->Text = System::Convert::ToString(OPoints_value);
			}
			return false;

		}
		else if ((Grid1R->Text == check) && (Grid2R->Text == check) && (Grid3R->Text == check)) //right row vertical
		{
			if (check == "X") {
				XPoints_value += 1;
				XPoints->Text = System::Convert::ToString(XPoints_value);
			}
			else {
				OPoints_value += 1;
				OPoints->Text = System::Convert::ToString(OPoints_value);
			}
			return false;
		}
		else if ((Grid3L->Text == check) && (Grid3M->Text == check) && (Grid3R->Text == check)) //bottom row horizontal
		{
			if (check == "X") {
				XPoints_value += 1;
				XPoints->Text = System::Convert::ToString(XPoints_value);
			}
			else {
				OPoints_value += 1;
				OPoints->Text = System::Convert::ToString(OPoints_value);
			}

			return false;
		}
		else if ((Grid1L->Text == check) && (Grid2L->Text == check) && (Grid3L->Text == check)) //left row vertical
		{
			if (check == "X") {
				XPoints_value += 1;
				XPoints->Text = System::Convert::ToString(XPoints_value);
			}
			else {
				OPoints_value += 1;
				OPoints->Text = System::Convert::ToString(OPoints_value);
			}
			return false;
		}
		else if ((Grid1M->Text == check) && (Grid2M->Text == check) && (Grid3M->Text == check)) //middle row vertical
		{
			if (check == "X") {
				XPoints_value += 1;
				XPoints->Text = System::Convert::ToString(XPoints_value);
			}
			else {
				OPoints_value += 1;
				OPoints->Text = System::Convert::ToString(OPoints_value);
			}

			return false;
		}
		else if ((Grid2L->Text == check) && (Grid2M->Text == check) && (Grid2R->Text == check)) //middle row horizontal
		{
			if (check == "X") {
				XPoints_value += 1;
				XPoints->Text = System::Convert::ToString(XPoints_value);
			}
			else {
				OPoints_value += 1;
				OPoints->Text = System::Convert::ToString(OPoints_value);
			}
			return false;

		}
		else if ((Grid1L->Text == check) && (Grid2M->Text == check) && (Grid3R->Text == check)) //cross from Grid 1L
		{
			if (check == "X") {
				XPoints_value += 1;
				XPoints->Text = System::Convert::ToString(XPoints_value);
			}
			else {
				OPoints_value += 1;
				OPoints->Text = System::Convert::ToString(OPoints_value);
			}
			return false;
		}
		else if ((Grid3L->Text == check) && (Grid2M->Text == check) && (Grid1R->Text == check)) //cross from Grid 3L
		{
			if (check == "X") {
				XPoints_value += 1;
				XPoints->Text = System::Convert::ToString(XPoints_value);
			}
			else {
				OPoints_value += 1;
				OPoints->Text = System::Convert::ToString(OPoints_value);
			}
			return false;

		}
		count += 1;
	}
	return true;
}

void button_event(bool boolean_condition) {
	Grid1L->Enabled = boolean_condition;
	Grid1M->Enabled = boolean_condition;
	Grid1R->Enabled = boolean_condition;
	Grid2L->Enabled = boolean_condition;
	Grid2M->Enabled = boolean_condition;
	Grid2R->Enabled = boolean_condition;
	Grid3L->Enabled = boolean_condition;
	Grid3M->Enabled = boolean_condition;
	Grid3R->Enabled = boolean_condition;
}

#pragma endregion

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {


}

private: System::Void Grid1L_Click(System::Object^ sender, System::EventArgs^ e) 
{
	
	if (count % 2 == 0) {
		value = "X";
	}
	if (count % 2 == 1) {
		value = "O";
	}

	if (Grid1L->Text == "")
	{
		Grid1L->Text = value;
		count += 1;
		button_event(condition());
	}
	
}

private: System::Void Grid1M_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if (count % 2 == 0) {
		value = "X";
	}
	if (count % 2 == 1) {
		value = "O";
	}

	if (Grid1M->Text == "")
	{
		 Grid1M->Text = value;
		 count += 1;
		 button_event(condition());
	}
	
}

private: System::Void Grid1R_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if (count % 2 == 0) {
		value = "X";
	}
	if (count % 2 == 1) {
		value = "O";
	}
	if (Grid1R->Text == "")
	{
		Grid1R->Text = value;
		count += 1;
		button_event(condition());
	}
	
}
private: System::Void Grid2L_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if (count % 2 == 0) {
		value = "X";
	}
	if (count % 2 == 1) {
		value = "O";
	}
	if (Grid2L->Text == "")
	{
		Grid2L->Text = value;
		count += 1;
		button_event(condition());
	}
	

}
private: System::Void Grid2M_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if (count % 2 == 0) {
		value = "X";
	}
	if (count % 2 == 1) {
		value = "O";
	}
	if (Grid2M->Text == "")
	{
		Grid2M->Text = value;
		count += 1;
		button_event(condition());
	}
	

}
private: System::Void Grid2R_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if (count % 2 == 0) {
		value = "X";
	}
	if (count % 2 == 1) {
		value = "O";
	}
	if (Grid2R->Text == "")
	{
		Grid2R->Text = value;
		count += 1;
		button_event(condition());
	}
	

}
private: System::Void Grid3L_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if (count % 2 == 0) {
		value = "X";
	}
	if (count % 2 == 1) {
		value = "O";
	}
	if (Grid3L->Text == "")
	{
		Grid3L->Text = value;
		count += 1;
		button_event(condition());
	}
	

}
private: System::Void Grid3M_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if (count % 2 == 0) {
		value = "X";
	}
	if (count % 2 == 1) {
		value = "O";
	}
	if (Grid3M->Text == "")
	{
		Grid3M->Text = value;
		count += 1;
		button_event(condition());
	}
	

}
private: System::Void Grid3R_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if (count % 2 == 0) {
		value = "X";
	}
	if (count % 2 == 1) {
		value = "O";
	}
	if (Grid3R->Text == "")
	{
		Grid3R->Text = value;
		count += 1;
		button_event(condition());
	}
	

}
private: System::Void ResetButton_Click(System::Object^ sender, System::EventArgs^ e) 
{

	count = 0;
	Grid1L->Text = "";
	Grid1M->Text = "";
	Grid1R->Text = "";
	Grid2L->Text = "";
	Grid2M->Text = "";
	Grid2R->Text = "";
	Grid3L->Text = "";
	Grid3M->Text = "";
	Grid3R->Text = "";
	button_event(true);

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
