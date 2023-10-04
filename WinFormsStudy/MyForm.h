#pragma once
#include <string>

namespace WinFormsStudy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnClose;
	protected:

	private: System::Windows::Forms::Button^ btnReset;

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Label^ lblOper;
	private: System::Windows::Forms::TextBox^ txt1;
	private: System::Windows::Forms::TextBox^ txt2;
	private: System::Windows::Forms::TextBox^ txtResult;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::Label^ lbl2;
	private: System::Windows::Forms::Label^ lblResult;
	private: System::Windows::Forms::Button^ btnSubtract;
	private: System::Windows::Forms::Button^ btnMultiply;
	private: System::Windows::Forms::Button^ btnDivide;
	private: System::Windows::Forms::Label^ lblErrors;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->lblOper = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->btnSubtract = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->lblErrors = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(180, 150);
			this->btnClose->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(75, 24);
			this->btnClose->TabIndex = 0;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(180, 122);
			this->btnReset->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(75, 24);
			this->btnReset->TabIndex = 1;
			this->btnReset->Text = L"Сброс";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(180, 8);
			this->btnAdd->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 24);
			this->btnAdd->TabIndex = 2;
			this->btnAdd->Text = L"Сложить";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// lblOper
			// 
			this->lblOper->AutoSize = true;
			this->lblOper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblOper->Location = System::Drawing::Point(82, 8);
			this->lblOper->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblOper->Name = L"lblOper";
			this->lblOper->Size = System::Drawing::Size(0, 17);
			this->lblOper->TabIndex = 3;
			this->lblOper->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(85, 46);
			this->txt1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(68, 20);
			this->txt1->TabIndex = 4;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt1->TextChanged += gcnew System::EventHandler(this, &MyForm::txt1_TextChanged);
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(85, 70);
			this->txt2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(68, 20);
			this->txt2->TabIndex = 5;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt2->TextChanged += gcnew System::EventHandler(this, &MyForm::txt2_TextChanged);
			// 
			// txtResult
			// 
			this->txtResult->Location = System::Drawing::Point(85, 94);
			this->txtResult->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(68, 20);
			this->txtResult->TabIndex = 6;
			this->txtResult->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(8, 49);
			this->lbl1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(80, 13);
			this->lbl1->TabIndex = 7;
			this->lbl1->Text = L"Первое число:";
			this->lbl1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Location = System::Drawing::Point(8, 73);
			this->lbl2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(78, 13);
			this->lbl2->TabIndex = 8;
			this->lbl2->Text = L"Второе число:";
			this->lbl2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Location = System::Drawing::Point(8, 98);
			this->lblResult->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(44, 13);
			this->lblResult->TabIndex = 9;
			this->lblResult->Text = L"Сумма:";
			this->lblResult->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btnSubtract
			// 
			this->btnSubtract->Location = System::Drawing::Point(180, 37);
			this->btnSubtract->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnSubtract->Name = L"btnSubtract";
			this->btnSubtract->Size = System::Drawing::Size(75, 24);
			this->btnSubtract->TabIndex = 10;
			this->btnSubtract->Text = L"Вычесть";
			this->btnSubtract->UseVisualStyleBackColor = true;
			this->btnSubtract->Click += gcnew System::EventHandler(this, &MyForm::btnSubtract_Click);
			// 
			// btnMultiply
			// 
			this->btnMultiply->Location = System::Drawing::Point(180, 65);
			this->btnMultiply->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(75, 24);
			this->btnMultiply->TabIndex = 11;
			this->btnMultiply->Text = L"Умножить";
			this->btnMultiply->UseVisualStyleBackColor = true;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &MyForm::btnMultiply_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->Location = System::Drawing::Point(180, 93);
			this->btnDivide->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(75, 24);
			this->btnDivide->TabIndex = 12;
			this->btnDivide->Text = L"Разделить";
			this->btnDivide->UseVisualStyleBackColor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &MyForm::btnDivide_Click);
			// 
			// lblErrors
			// 
			this->lblErrors->AutoSize = true;
			this->lblErrors->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblErrors->Location = System::Drawing::Point(15, 146);
			this->lblErrors->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblErrors->Name = L"lblErrors";
			this->lblErrors->Size = System::Drawing::Size(0, 13);
			this->lblErrors->TabIndex = 13;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(256, 173);
			this->Controls->Add(this->lblErrors);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->btnSubtract);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->lblOper);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnClose);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Calc";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lblOper->Text = L"";
		this->txt1->Text = L"";
		this->txt2->Text = L"";
		this->txtResult->Text = L"";
	}
 	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lblOper->Text = L"Сложение";
		CommandHandler("plus"); 
	}
	private: System::Void btnSubtract_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lblOper->Text = L"Вычитание";
		CommandHandler("minus");
	}
	private: System::Void btnMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lblOper->Text = L"Умножение";
		CommandHandler("multip");
	}
	private: System::Void btnDivide_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lblOper->Text = L"Деление";
		CommandHandler("divide");
	}
	private: System::Void CommandHandler(std::string operand) {
		double i1, i2, i3;
			if (txt1->Text == "" || txt2->Text == "") {
				this->lblOper->Text = "";
				this->txtResult->Text = "";
				MessageBox::Show("Поля ввода не должны быть пустыми", "Calc - Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			try {
				i1 = Convert::ToDouble(txt1->Text->Replace(".", ","));
			}
			catch (...) {
				MessageBox::Show("Некорректный ввод в поле 1", "Calc - Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			try {
				i2 = Convert::ToDouble(txt2->Text->Replace(".", ","));
			}
			catch (...) {
				MessageBox::Show("Некорректный ввод в поле 2", "Calc - Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (operand == "plus") {
				i3 = i1 + i2;
			}
			else if (operand == "minus") {
				i3 = i1 - i2;
			}
			else if (operand == "multip") {
				i3 = i1 * i2;
			}
			else if (operand == "divide") {
				if (i2 == 0) {
					this->txtResult->Text = "";
					MessageBox::Show("Деление на 0 запрещено", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				else {
					i3 = i1 / i2;
				}
			}
			this->lblErrors->Text = "";
			this->txtResult->Text = Convert::ToString(i3);
	}
	private: System::Void TextChangeHandler() {
		if (txt1->Text != "" || txt2->Text != "") {
			this->lblOper->Text = "";
			this->txtResult->Text = "";
		}
		if (txt1->Text == "," || txt1->Text == ".") {
			txt1->Text = "0,";
			txt1->SelectionStart = 2;
		}
		if (txt1->Text == "-," || txt1->Text == "-.") {
			txt1->Text = "-0,";
			txt1->SelectionStart = 3;
		}
		if (txt2->Text == "," || txt2->Text == ".") {
			txt2->Text = "0,";
			txt1->SelectionStart = 2;
		}
		if (txt2->Text == "-," || txt2->Text == "-.") {
			txt2->Text = "-0,";
			txt1->SelectionStart = 3;
		}
	}
	private: System::Void txt1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		TextChangeHandler();
	}
	private: System::Void txt2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		TextChangeHandler();
	}
};
}
