#pragma once
#include<string>

namespace CalculatorCPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для Calc
	/// </summary>
	public ref class Calc : public System::Windows::Forms::Form
	{
	public:
		Calc(void)
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
		~Calc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonDigit0;
	private: System::Windows::Forms::Button^ buttonDigit8;
	private: System::Windows::Forms::Button^ buttonDigit7;
	private: System::Windows::Forms::Button^ buttonDigit6;
	private: System::Windows::Forms::Button^ buttonDigit5;
	private: System::Windows::Forms::Button^ buttonDigit4;
	private: System::Windows::Forms::Button^ buttonDigit3;
	private: System::Windows::Forms::Button^ buttonDigit1;
	private: System::Windows::Forms::Button^ buttonDigit2;
	private: System::Windows::Forms::Button^ buttonDigit9;
	private: System::Windows::Forms::Button^ buttonDot;
	private: System::Windows::Forms::Button^ buttonNegative;
	private: System::Windows::Forms::Button^ buttonMul;
	private: System::Windows::Forms::Button^ buttonSub;
	private: System::Windows::Forms::Button^ buttonSum;
	private: System::Windows::Forms::Button^ buttonResult;
	private: System::Windows::Forms::Button^ buttonDiv;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btnClean;
	private: System::Windows::Forms::Button^ btnCleanEntry;
	private: System::Windows::Forms::Button^ btnBackspace;





	private: System::Windows::Forms::Button^ sqr;



	private: System::Windows::Forms::Button^ drob;
	private: System::Windows::Forms::Button^ prcnt;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonDigit0 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit8 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit7 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit6 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit5 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit4 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit3 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit1 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit2 = (gcnew System::Windows::Forms::Button());
			this->buttonDigit9 = (gcnew System::Windows::Forms::Button());
			this->buttonDot = (gcnew System::Windows::Forms::Button());
			this->buttonNegative = (gcnew System::Windows::Forms::Button());
			this->buttonMul = (gcnew System::Windows::Forms::Button());
			this->buttonSub = (gcnew System::Windows::Forms::Button());
			this->buttonSum = (gcnew System::Windows::Forms::Button());
			this->buttonResult = (gcnew System::Windows::Forms::Button());
			this->buttonDiv = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnClean = (gcnew System::Windows::Forms::Button());
			this->btnCleanEntry = (gcnew System::Windows::Forms::Button());
			this->btnBackspace = (gcnew System::Windows::Forms::Button());
			this->sqr = (gcnew System::Windows::Forms::Button());
			this->drob = (gcnew System::Windows::Forms::Button());
			this->prcnt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonDigit0
			// 
			this->buttonDigit0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDigit0->Location = System::Drawing::Point(85, 283);
			this->buttonDigit0->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonDigit0->Name = L"buttonDigit0";
			this->buttonDigit0->Size = System::Drawing::Size(60, 43);
			this->buttonDigit0->TabIndex = 0;
			this->buttonDigit0->Text = L"0";
			this->buttonDigit0->UseVisualStyleBackColor = true;
			this->buttonDigit0->Click += gcnew System::EventHandler(this, &Calc::buttonDigit);
			// 
			// buttonDigit8
			// 
			this->buttonDigit8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonDigit8->Location = System::Drawing::Point(85, 131);
			this->buttonDigit8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonDigit8->Name = L"buttonDigit8";
			this->buttonDigit8->Size = System::Drawing::Size(60, 43);
			this->buttonDigit8->TabIndex = 1;
			this->buttonDigit8->Text = L"8";
			this->buttonDigit8->UseVisualStyleBackColor = true;
			this->buttonDigit8->Click += gcnew System::EventHandler(this, &Calc::buttonDigit);
			// 
			// buttonDigit7
			// 
			this->buttonDigit7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonDigit7->Location = System::Drawing::Point(17, 131);
			this->buttonDigit7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonDigit7->Name = L"buttonDigit7";
			this->buttonDigit7->Size = System::Drawing::Size(60, 43);
			this->buttonDigit7->TabIndex = 2;
			this->buttonDigit7->Text = L"7";
			this->buttonDigit7->UseVisualStyleBackColor = true;
			this->buttonDigit7->Click += gcnew System::EventHandler(this, &Calc::buttonDigit);
			// 
			// buttonDigit6
			// 
			this->buttonDigit6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDigit6->Location = System::Drawing::Point(153, 182);
			this->buttonDigit6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonDigit6->Name = L"buttonDigit6";
			this->buttonDigit6->Size = System::Drawing::Size(60, 43);
			this->buttonDigit6->TabIndex = 3;
			this->buttonDigit6->Text = L"6";
			this->buttonDigit6->UseVisualStyleBackColor = true;
			this->buttonDigit6->Click += gcnew System::EventHandler(this, &Calc::buttonDigit);
			// 
			// buttonDigit5
			// 
			this->buttonDigit5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonDigit5->Location = System::Drawing::Point(85, 182);
			this->buttonDigit5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonDigit5->Name = L"buttonDigit5";
			this->buttonDigit5->Size = System::Drawing::Size(60, 43);
			this->buttonDigit5->TabIndex = 4;
			this->buttonDigit5->Text = L"5";
			this->buttonDigit5->UseVisualStyleBackColor = true;
			this->buttonDigit5->Click += gcnew System::EventHandler(this, &Calc::buttonDigit);
			// 
			// buttonDigit4
			// 
			this->buttonDigit4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonDigit4->Location = System::Drawing::Point(17, 182);
			this->buttonDigit4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonDigit4->Name = L"buttonDigit4";
			this->buttonDigit4->Size = System::Drawing::Size(60, 43);
			this->buttonDigit4->TabIndex = 5;
			this->buttonDigit4->Text = L"4";
			this->buttonDigit4->UseVisualStyleBackColor = true;
			this->buttonDigit4->Click += gcnew System::EventHandler(this, &Calc::buttonDigit);
			// 
			// buttonDigit3
			// 
			this->buttonDigit3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDigit3->Location = System::Drawing::Point(153, 232);
			this->buttonDigit3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonDigit3->Name = L"buttonDigit3";
			this->buttonDigit3->Size = System::Drawing::Size(60, 43);
			this->buttonDigit3->TabIndex = 6;
			this->buttonDigit3->Text = L"3";
			this->buttonDigit3->UseVisualStyleBackColor = true;
			this->buttonDigit3->Click += gcnew System::EventHandler(this, &Calc::buttonDigit);
			// 
			// buttonDigit1
			// 
			this->buttonDigit1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDigit1->Location = System::Drawing::Point(17, 232);
			this->buttonDigit1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonDigit1->Name = L"buttonDigit1";
			this->buttonDigit1->Size = System::Drawing::Size(60, 43);
			this->buttonDigit1->TabIndex = 7;
			this->buttonDigit1->Text = L"1";
			this->buttonDigit1->UseVisualStyleBackColor = true;
			this->buttonDigit1->Click += gcnew System::EventHandler(this, &Calc::buttonDigit);
			// 
			// buttonDigit2
			// 
			this->buttonDigit2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDigit2->Location = System::Drawing::Point(85, 232);
			this->buttonDigit2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonDigit2->Name = L"buttonDigit2";
			this->buttonDigit2->Size = System::Drawing::Size(60, 43);
			this->buttonDigit2->TabIndex = 8;
			this->buttonDigit2->Text = L"2";
			this->buttonDigit2->UseVisualStyleBackColor = true;
			this->buttonDigit2->Click += gcnew System::EventHandler(this, &Calc::buttonDigit);
			// 
			// buttonDigit9
			// 
			this->buttonDigit9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->buttonDigit9->Location = System::Drawing::Point(153, 131);
			this->buttonDigit9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonDigit9->Name = L"buttonDigit9";
			this->buttonDigit9->Size = System::Drawing::Size(60, 43);
			this->buttonDigit9->TabIndex = 9;
			this->buttonDigit9->Text = L"9";
			this->buttonDigit9->UseVisualStyleBackColor = true;
			this->buttonDigit9->Click += gcnew System::EventHandler(this, &Calc::buttonDigit);
			// 
			// buttonDot
			// 
			this->buttonDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDot->Location = System::Drawing::Point(153, 283);
			this->buttonDot->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonDot->Name = L"buttonDot";
			this->buttonDot->Size = System::Drawing::Size(60, 43);
			this->buttonDot->TabIndex = 10;
			this->buttonDot->Text = L",";
			this->buttonDot->UseVisualStyleBackColor = true;
			this->buttonDot->Click += gcnew System::EventHandler(this, &Calc::buttonDot_Click);
			// 
			// buttonNegative
			// 
			this->buttonNegative->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNegative->Location = System::Drawing::Point(17, 283);
			this->buttonNegative->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonNegative->Name = L"buttonNegative";
			this->buttonNegative->Size = System::Drawing::Size(60, 43);
			this->buttonNegative->TabIndex = 11;
			this->buttonNegative->Text = L"+/-";
			this->buttonNegative->UseVisualStyleBackColor = true;
			this->buttonNegative->Click += gcnew System::EventHandler(this, &Calc::buttonNegative_Click);
			// 
			// buttonMul
			// 
			this->buttonMul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMul->Location = System::Drawing::Point(221, 182);
			this->buttonMul->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonMul->Name = L"buttonMul";
			this->buttonMul->Size = System::Drawing::Size(60, 43);
			this->buttonMul->TabIndex = 12;
			this->buttonMul->Text = L"*";
			this->buttonMul->UseVisualStyleBackColor = true;
			this->buttonMul->Click += gcnew System::EventHandler(this, &Calc::ArithmeticOp);
			// 
			// buttonSub
			// 
			this->buttonSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSub->Location = System::Drawing::Point(221, 232);
			this->buttonSub->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonSub->Name = L"buttonSub";
			this->buttonSub->Size = System::Drawing::Size(60, 43);
			this->buttonSub->TabIndex = 13;
			this->buttonSub->Text = L"-";
			this->buttonSub->UseVisualStyleBackColor = true;
			this->buttonSub->Click += gcnew System::EventHandler(this, &Calc::ArithmeticOp);
			// 
			// buttonSum
			// 
			this->buttonSum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSum->Location = System::Drawing::Point(221, 283);
			this->buttonSum->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonSum->Name = L"buttonSum";
			this->buttonSum->Size = System::Drawing::Size(60, 43);
			this->buttonSum->TabIndex = 14;
			this->buttonSum->Text = L"+";
			this->buttonSum->UseVisualStyleBackColor = true;
			this->buttonSum->Click += gcnew System::EventHandler(this, &Calc::ArithmeticOp);
			// 
			// buttonResult
			// 
			this->buttonResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonResult->Location = System::Drawing::Point(289, 283);
			this->buttonResult->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonResult->Name = L"buttonResult";
			this->buttonResult->Size = System::Drawing::Size(60, 43);
			this->buttonResult->TabIndex = 15;
			this->buttonResult->Text = L"=";
			this->buttonResult->UseVisualStyleBackColor = true;
			this->buttonResult->Click += gcnew System::EventHandler(this, &Calc::buttonResult_Click);
			// 
			// buttonDiv
			// 
			this->buttonDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDiv->Location = System::Drawing::Point(221, 131);
			this->buttonDiv->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonDiv->Name = L"buttonDiv";
			this->buttonDiv->Size = System::Drawing::Size(60, 43);
			this->buttonDiv->TabIndex = 16;
			this->buttonDiv->Text = L"/";
			this->buttonDiv->UseVisualStyleBackColor = true;
			this->buttonDiv->Click += gcnew System::EventHandler(this, &Calc::ArithmeticOp);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(16, 26);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->MaxLength = 10;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(332, 26);
			this->textBox1->TabIndex = 17;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnClean
			// 
			this->btnClean->Location = System::Drawing::Point(153, 81);
			this->btnClean->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnClean->Name = L"btnClean";
			this->btnClean->Size = System::Drawing::Size(97, 43);
			this->btnClean->TabIndex = 18;
			this->btnClean->Text = L"C";
			this->btnClean->UseVisualStyleBackColor = true;
			this->btnClean->Click += gcnew System::EventHandler(this, &Calc::btnClean_Click);
			// 
			// btnCleanEntry
			// 
			this->btnCleanEntry->Location = System::Drawing::Point(17, 81);
			this->btnCleanEntry->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnCleanEntry->Name = L"btnCleanEntry";
			this->btnCleanEntry->Size = System::Drawing::Size(128, 43);
			this->btnCleanEntry->TabIndex = 19;
			this->btnCleanEntry->Text = L"CE";
			this->btnCleanEntry->UseVisualStyleBackColor = true;
			this->btnCleanEntry->Click += gcnew System::EventHandler(this, &Calc::btnCleanEntry_Click);
			// 
			// btnBackspace
			// 
			this->btnBackspace->Font = (gcnew System::Drawing::Font(L"Wingdings", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnBackspace->Location = System::Drawing::Point(259, 81);
			this->btnBackspace->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnBackspace->Name = L"btnBackspace";
			this->btnBackspace->Size = System::Drawing::Size(91, 43);
			this->btnBackspace->TabIndex = 21;
			this->btnBackspace->Text = L"";
			this->btnBackspace->UseVisualStyleBackColor = true;
			this->btnBackspace->Click += gcnew System::EventHandler(this, &Calc::btnBackspace_Click);
			// 
			// sqr
			// 
			this->sqr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->sqr->Location = System::Drawing::Point(289, 131);
			this->sqr->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->sqr->Name = L"sqr";
			this->sqr->Size = System::Drawing::Size(60, 43);
			this->sqr->TabIndex = 30;
			this->sqr->Text = L"√x";
			this->sqr->UseVisualStyleBackColor = true;
			this->sqr->Click += gcnew System::EventHandler(this, &Calc::sqr_Click);
			// 
			// drob
			// 
			this->drob->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->drob->Location = System::Drawing::Point(289, 233);
			this->drob->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->drob->Name = L"drob";
			this->drob->Size = System::Drawing::Size(60, 43);
			this->drob->TabIndex = 32;
			this->drob->Text = L"1/x";
			this->drob->UseVisualStyleBackColor = true;
			this->drob->Click += gcnew System::EventHandler(this, &Calc::drob_Click);
			// 
			// prcnt
			// 
			this->prcnt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->prcnt->Location = System::Drawing::Point(289, 183);
			this->prcnt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->prcnt->Name = L"prcnt";
			this->prcnt->Size = System::Drawing::Size(60, 43);
			this->prcnt->TabIndex = 34;
			this->prcnt->Text = L"%";
			this->prcnt->UseVisualStyleBackColor = true;
			this->prcnt->Click += gcnew System::EventHandler(this, &Calc::prcnt_Click);
			// 
			// Calc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(365, 351);
			this->Controls->Add(this->prcnt);
			this->Controls->Add(this->drob);
			this->Controls->Add(this->sqr);
			this->Controls->Add(this->btnBackspace);
			this->Controls->Add(this->btnCleanEntry);
			this->Controls->Add(this->btnClean);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->buttonDiv);
			this->Controls->Add(this->buttonResult);
			this->Controls->Add(this->buttonSum);
			this->Controls->Add(this->buttonSub);
			this->Controls->Add(this->buttonMul);
			this->Controls->Add(this->buttonNegative);
			this->Controls->Add(this->buttonDot);
			this->Controls->Add(this->buttonDigit9);
			this->Controls->Add(this->buttonDigit2);
			this->Controls->Add(this->buttonDigit1);
			this->Controls->Add(this->buttonDigit3);
			this->Controls->Add(this->buttonDigit4);
			this->Controls->Add(this->buttonDigit5);
			this->Controls->Add(this->buttonDigit6);
			this->Controls->Add(this->buttonDigit7);
			this->Controls->Add(this->buttonDigit8);
			this->Controls->Add(this->buttonDigit0);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximizeBox = false;
			this->Name = L"Calc";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calc";
			this->Load += gcnew System::EventHandler(this, &Calc::Calc_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstNum;
		double secondNum;
		double result;
		double memory = 0;
		String^ arithOp;
		bool isResult = false;
		bool flag = false;
		bool isZeroDivision = false;
		bool isZeroAdded = false;

	private: System::Void Calc_Load(System::Object^ sender, System::EventArgs^ e)
	{
		btnCleanEntry->PerformClick();
	}
	private: System::Void buttonDigit(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ numbers = safe_cast<Button^>(sender);
		if (!isResult)
		{
			if (textBox1->Text == "0")
			{
				textBox1->Text = numbers->Text;
			}
			else
			{
				textBox1->Text += numbers->Text;
			}
		}
		else
		{
			if (textBox1->Text == "0," || textBox1->Text == "-0,")
			{
				textBox1->Text += numbers->Text;
			}
			else {
				textBox1->Text = numbers->Text;
			}
			isResult = false;
		}
	}

	private: System::Void ArithmeticOp(System::Object^ sender, System::EventArgs^ e)
	{
		isZeroDivision = false;
		Button^ op = safe_cast<Button^>(sender);
		if (BIMBIMBAMBAM()) {
			if (!isResult) {
				resultHandler();
			}
			if (!isZeroDivision) {
				arithOp = op->Text;
			}
		}
		else {
			firstNum = Double::Parse(textBox1->Text);
			arithOp = op->Text;
			isResult = true;
		}
	}
	private: System::Void buttonDot_Click(System::Object^ sender, System::EventArgs^ e)
	{	
		
		if (!textBox1->Text->Contains(","))
		{
				textBox1->Text += ",";
		}
		else if (arithOp != "" && !isZeroAdded) {
			textBox1->Text = "0" + ",";
			isZeroAdded = true;
		}
	}

	private: System::Void buttonNegative_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text != "0") {

			if (!textBox1->Text->Contains("-"))
			{
				textBox1->Text = "-" + textBox1->Text;
				if (firstNum != NULL) {
					secondNum = firstNum * -1;
				}
			}
			else
			{
				if (firstNum != NULL) {
					secondNum = firstNum * -1;
				}
				textBox1->Text = textBox1->Text->Remove(0, 1);
			}
		}
	}
	private: System::Void resultHandler() {
		if (!isResult /*&& (!BIMBIMBAMBAM()*/)
			secondNum = Double::Parse(textBox1->Text);
		if (arithOp == "+")
		{
			result = firstNum + secondNum;
			textBox1->Text = System::Convert::ToString(result);
			firstNum = result;
			isResult = true;
			isZeroAdded = false;
		}
		else if (arithOp == "-")
		{
			result = firstNum - secondNum;
			textBox1->Text = System::Convert::ToString(result);
			firstNum = result;
			isResult = true;
			isZeroAdded = false;
		}
		else if (arithOp == "*")
		{
			result = firstNum * secondNum;
			textBox1->Text = System::Convert::ToString(result);
			firstNum = result;
			isResult = true;
			isZeroAdded = false;
		}
		else if (arithOp == "/")
		{
			if (secondNum == 0)
			{
				textBox1->Text = "0";
				arithOp = "";
				firstNum = 0;
				secondNum = 0;
				isResult = false;
				isZeroDivision = true;
				isZeroAdded = false;
				MessageBox::Show("Деление на 0 запрещено", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else
			{
				result = firstNum / secondNum;
				textBox1->Text = System::Convert::ToString(result);

				firstNum = result;
				isResult = true;
			}
		}
	}

	private: System::Void buttonResult_Click(System::Object^ sender, System::EventArgs^ e)
	{
		resultHandler();
	}

	private: System::Void btnClean_Click(System::Object^ sender, System::EventArgs^ e)
	{
		textBox1->Text = "0";
		firstNum = 0;
		secondNum = 0;
		arithOp = "";
		isResult = false;
	}

	private: System::Void btnCleanEntry_Click(System::Object^ sender, System::EventArgs^ e)
	{
		textBox1->Text = "0";
		arithOp = "";
		firstNum = 0;
		secondNum = 0;
		isResult = false;
	}

	private: System::Void btnBackspace_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text->Length > 1)
		{
			textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
		}
		else
		{
			textBox1->Text = "0";
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void sqr_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!textBox1->Text->Contains("-"))
		{
			double num = System::Convert::ToDouble(textBox1->Text);
			textBox1->Text = System::Convert::ToString(sqrt(num));
		}
		else
		{
			MessageBox::Show("Запрещено брать корень от отрицательных чисел!", "Calc - Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void drob_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "0" || textBox1->Text == "0," || textBox1->Text == "-0,")

		{
			MessageBox::Show("Деление на 0 запрещено", "Calc - Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else
		{
			double num = System::Convert::ToDouble(textBox1->Text);
			textBox1->Text = System::Convert::ToString(1 / num);
		}

	}
	private: bool BIMBIMBAMBAM() {
		if ((arithOp != "")) {
			return true;
		}
		return false;
	}
	private: System::Void prcnt_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!textBox1->Text->Contains("%"))
		{
			
			double num = System::Convert::ToDouble(textBox1->Text);
			if (arithOp == "-") {
				textBox1->Text = System::Convert::ToString(firstNum - ((firstNum / 100) * num));
			}
			else if (arithOp == "+") {
				textBox1->Text = System::Convert::ToString(firstNum + ((firstNum / 100) * num));
			}
			else if (arithOp == "*") {
				textBox1->Text = System::Convert::ToString(firstNum * ((firstNum / 100) * num));
			}
			else if (arithOp == "/") {
				textBox1->Text = System::Convert::ToString(firstNum / ((firstNum / 100) * num));
			
			}
			arithOp = "";
		}
	}
};
}