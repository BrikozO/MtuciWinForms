#pragma once

#include <cmath>

namespace Calc {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Сводка для FFirst
    /// </summary>
    public ref class FFirst : public System::Windows::Forms::Form
    {
    public:
        FFirst(void)
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
        ~FFirst()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^ btnClose;
    private: System::Windows::Forms::Button^ btnConvert;



    private: System::Windows::Forms::Label^ lblOper;
    private: System::Windows::Forms::Label^ lblSum;
    private: System::Windows::Forms::TextBox^ sum;









    private: System::Windows::Forms::Label^ lblOdds;







    private: System::Windows::Forms::Label^ lblComments;
    private: System::Windows::Forms::RadioButton^ dollarsToRubbles;

    private: System::Windows::Forms::RadioButton^ rubblesToDollars;
    private: System::Windows::Forms::TextBox^ rate;

    private: System::Windows::Forms::Label^ lblRate;








    private: System::Windows::Forms::Label^ lblDirection;
    private: System::Windows::Forms::Label^ lblResult;
    private: System::Windows::Forms::TextBox^ from;




    private: System::Windows::Forms::Label^ lblFrom;
    private: System::Windows::Forms::Label^ lblEquals;
    private: System::Windows::Forms::TextBox^ to;



    private: System::Windows::Forms::Label^ lblTo;
    private: System::Windows::Forms::RadioButton^ eurosToRubbles;
    private: System::Windows::Forms::RadioButton^ rubblesToEuros;


    private: System::Double dollarsToRubblesRate;
    private: System::Double rubblesToDollarsRate;
    private: System::Double eurosToRubblesRate;
    private: System::Double rubblesToEurosRate;


















    protected:

    protected:

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
            this->btnClose = (gcnew System::Windows::Forms::Button());
            this->btnConvert = (gcnew System::Windows::Forms::Button());
            this->lblOper = (gcnew System::Windows::Forms::Label());
            this->lblSum = (gcnew System::Windows::Forms::Label());
            this->sum = (gcnew System::Windows::Forms::TextBox());
            this->lblOdds = (gcnew System::Windows::Forms::Label());
            this->lblComments = (gcnew System::Windows::Forms::Label());
            this->dollarsToRubbles = (gcnew System::Windows::Forms::RadioButton());
            this->rubblesToDollars = (gcnew System::Windows::Forms::RadioButton());
            this->rate = (gcnew System::Windows::Forms::TextBox());
            this->lblRate = (gcnew System::Windows::Forms::Label());
            this->lblDirection = (gcnew System::Windows::Forms::Label());
            this->lblResult = (gcnew System::Windows::Forms::Label());
            this->from = (gcnew System::Windows::Forms::TextBox());
            this->lblFrom = (gcnew System::Windows::Forms::Label());
            this->lblEquals = (gcnew System::Windows::Forms::Label());
            this->to = (gcnew System::Windows::Forms::TextBox());
            this->lblTo = (gcnew System::Windows::Forms::Label());
            this->eurosToRubbles = (gcnew System::Windows::Forms::RadioButton());
            this->rubblesToEuros = (gcnew System::Windows::Forms::RadioButton());
            this->SuspendLayout();
            // 
            // btnClose
            // 
            this->btnClose->Location = System::Drawing::Point(355, 178);
            this->btnClose->Name = L"btnClose";
            this->btnClose->Size = System::Drawing::Size(100, 30);
            this->btnClose->TabIndex = 0;
            this->btnClose->Text = L"Закрыть";
            this->btnClose->UseVisualStyleBackColor = true;
            this->btnClose->Click += gcnew System::EventHandler(this, &FFirst::btnClose_Click);
            // 
            // btnConvert
            // 
            this->btnConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btnConvert->Location = System::Drawing::Point(335, 142);
            this->btnConvert->Name = L"btnConvert";
            this->btnConvert->Size = System::Drawing::Size(120, 30);
            this->btnConvert->TabIndex = 1;
            this->btnConvert->Text = L"Конвертировать";
            this->btnConvert->UseVisualStyleBackColor = true;
            this->btnConvert->Click += gcnew System::EventHandler(this, &FFirst::btnConvert_Click);
            // 
            // lblOper
            // 
            this->lblOper->AutoSize = true;
            this->lblOper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblOper->Location = System::Drawing::Point(110, 10);
            this->lblOper->Name = L"lblOper";
            this->lblOper->Size = System::Drawing::Size(0, 17);
            this->lblOper->TabIndex = 3;
            this->lblOper->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // lblSum
            // 
            this->lblSum->AutoSize = true;
            this->lblSum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblSum->Location = System::Drawing::Point(12, 39);
            this->lblSum->Name = L"lblSum";
            this->lblSum->Size = System::Drawing::Size(151, 15);
            this->lblSum->TabIndex = 4;
            this->lblSum->Text = L"Сумма для конвертации:";
            this->lblSum->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // sum
            // 
            this->sum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->sum->Location = System::Drawing::Point(169, 38);
            this->sum->Name = L"sum";
            this->sum->Size = System::Drawing::Size(90, 20);
            this->sum->TabIndex = 7;
            this->sum->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // lblOdds
            // 
            this->lblOdds->AutoSize = true;
            this->lblOdds->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblOdds->Location = System::Drawing::Point(37, 12);
            this->lblOdds->Name = L"lblOdds";
            this->lblOdds->Size = System::Drawing::Size(114, 13);
            this->lblOdds->TabIndex = 13;
            this->lblOdds->Text = L"Исходные данные";
            this->lblOdds->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // lblComments
            // 
            this->lblComments->AutoSize = true;
            this->lblComments->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblComments->Location = System::Drawing::Point(177, 109);
            this->lblComments->Name = L"lblComments";
            this->lblComments->Size = System::Drawing::Size(0, 15);
            this->lblComments->TabIndex = 19;
            this->lblComments->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // dollarsToRubbles
            // 
            this->dollarsToRubbles->AutoSize = true;
            this->dollarsToRubbles->Checked = true;
            this->dollarsToRubbles->Location = System::Drawing::Point(301, 41);
            this->dollarsToRubbles->Name = L"dollarsToRubbles";
            this->dollarsToRubbles->Size = System::Drawing::Size(113, 17);
            this->dollarsToRubbles->TabIndex = 20;
            this->dollarsToRubbles->TabStop = true;
            this->dollarsToRubbles->Text = L"Доллары в рубли";
            this->dollarsToRubbles->UseVisualStyleBackColor = true;
            this->dollarsToRubbles->CheckedChanged += gcnew System::EventHandler(this, &FFirst::dollarsToRubbles_CheckedChanged);
            // 
            // rubblesToDollars
            // 
            this->rubblesToDollars->AutoSize = true;
            this->rubblesToDollars->Location = System::Drawing::Point(301, 67);
            this->rubblesToDollars->Name = L"rubblesToDollars";
            this->rubblesToDollars->Size = System::Drawing::Size(111, 17);
            this->rubblesToDollars->TabIndex = 21;
            this->rubblesToDollars->Text = L"Рубли в доллары";
            this->rubblesToDollars->UseVisualStyleBackColor = true;
            this->rubblesToDollars->CheckedChanged += gcnew System::EventHandler(this, &FFirst::rubblesToDollars_CheckedChanged);
            // 
            // rate
            // 
            this->rate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->rate->Location = System::Drawing::Point(169, 64);
            this->rate->Name = L"rate";
            this->rate->Size = System::Drawing::Size(90, 20);
            this->rate->TabIndex = 22;
            this->rate->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->rate->Leave += gcnew System::EventHandler(this, &FFirst::rate_leave);
            // 
            // lblRate
            // 
            this->lblRate->AutoSize = true;
            this->lblRate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblRate->Location = System::Drawing::Point(12, 64);
            this->lblRate->Name = L"lblRate";
            this->lblRate->Size = System::Drawing::Size(126, 15);
            this->lblRate->TabIndex = 23;
            this->lblRate->Text = L"Курс обмена (руб./$):";
            this->lblRate->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // lblDirection
            // 
            this->lblDirection->AutoSize = true;
            this->lblDirection->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblDirection->Location = System::Drawing::Point(298, 12);
            this->lblDirection->Name = L"lblDirection";
            this->lblDirection->Size = System::Drawing::Size(166, 13);
            this->lblDirection->TabIndex = 24;
            this->lblDirection->Text = L"Направление конвертации";
            this->lblDirection->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // lblResult
            // 
            this->lblResult->AutoSize = true;
            this->lblResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblResult->Location = System::Drawing::Point(30, 126);
            this->lblResult->Name = L"lblResult";
            this->lblResult->Size = System::Drawing::Size(148, 13);
            this->lblResult->TabIndex = 25;
            this->lblResult->Text = L"Результат конвертации";
            this->lblResult->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // from
            // 
            this->from->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->from->Location = System::Drawing::Point(13, 156);
            this->from->Name = L"from";
            this->from->Size = System::Drawing::Size(75, 20);
            this->from->TabIndex = 26;
            this->from->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // lblFrom
            // 
            this->lblFrom->AutoSize = true;
            this->lblFrom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblFrom->Location = System::Drawing::Point(94, 157);
            this->lblFrom->Name = L"lblFrom";
            this->lblFrom->Size = System::Drawing::Size(14, 15);
            this->lblFrom->TabIndex = 27;
            this->lblFrom->Text = L"$";
            this->lblFrom->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // lblEquals
            // 
            this->lblEquals->AutoSize = true;
            this->lblEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblEquals->Location = System::Drawing::Point(138, 156);
            this->lblEquals->Name = L"lblEquals";
            this->lblEquals->Size = System::Drawing::Size(14, 15);
            this->lblEquals->TabIndex = 28;
            this->lblEquals->Text = L"=";
            this->lblEquals->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // to
            // 
            this->to->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->to->Location = System::Drawing::Point(158, 157);
            this->to->Name = L"to";
            this->to->Size = System::Drawing::Size(90, 20);
            this->to->TabIndex = 29;
            this->to->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // lblTo
            // 
            this->lblTo->AutoSize = true;
            this->lblTo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblTo->Location = System::Drawing::Point(254, 157);
            this->lblTo->Name = L"lblTo";
            this->lblTo->Size = System::Drawing::Size(29, 15);
            this->lblTo->TabIndex = 30;
            this->lblTo->Text = L"руб.";
            this->lblTo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // eurosToRubbles
            // 
            this->eurosToRubbles->AutoSize = true;
            this->eurosToRubbles->Location = System::Drawing::Point(301, 90);
            this->eurosToRubbles->Name = L"eurosToRubbles";
            this->eurosToRubbles->Size = System::Drawing::Size(91, 17);
            this->eurosToRubbles->TabIndex = 31;
            this->eurosToRubbles->Text = L"Евро в рубли";
            this->eurosToRubbles->UseVisualStyleBackColor = true;
            this->eurosToRubbles->CheckedChanged += gcnew System::EventHandler(this, &FFirst::eurosToRubbles_CheckedChanged);
            // 
            // rubblesToEuros
            // 
            this->rubblesToEuros->AutoSize = true;
            this->rubblesToEuros->Location = System::Drawing::Point(301, 113);
            this->rubblesToEuros->Name = L"rubblesToEuros";
            this->rubblesToEuros->Size = System::Drawing::Size(91, 17);
            this->rubblesToEuros->TabIndex = 32;
            this->rubblesToEuros->Text = L"Рубли в евро";
            this->rubblesToEuros->UseVisualStyleBackColor = true;
            this->rubblesToEuros->CheckedChanged += gcnew System::EventHandler(this, &FFirst::rubblesToEuros_CheckedChanged);
            // 
            // FFirst
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(484, 221);
            this->Controls->Add(this->rubblesToEuros);
            this->Controls->Add(this->eurosToRubbles);
            this->Controls->Add(this->lblTo);
            this->Controls->Add(this->to);
            this->Controls->Add(this->lblEquals);
            this->Controls->Add(this->lblFrom);
            this->Controls->Add(this->from);
            this->Controls->Add(this->lblResult);
            this->Controls->Add(this->lblDirection);
            this->Controls->Add(this->lblRate);
            this->Controls->Add(this->rate);
            this->Controls->Add(this->rubblesToDollars);
            this->Controls->Add(this->dollarsToRubbles);
            this->Controls->Add(this->lblComments);
            this->Controls->Add(this->lblOdds);
            this->Controls->Add(this->sum);
            this->Controls->Add(this->lblSum);
            this->Controls->Add(this->lblOper);
            this->Controls->Add(this->btnConvert);
            this->Controls->Add(this->btnClose);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->MaximizeBox = false;
            this->Name = L"FFirst";
            this->Text = L"APM оператора обменного пункта";
            this->ResumeLayout(false);
            this->PerformLayout();

        }


#pragma endregion
    private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }
    private: System::Void btnConvert_Click(System::Object^ sender, System::EventArgs^ e) {
        double sumFrom, sumTo;
        System::String^ text1 = this->sum->Text;
        System::String^ text2 = this->rate->Text;
        if (!Check(text1, text2)) {
            return;
        }

        setRate();

        sumFrom = Convert::ToDouble(this->sum->Text);
        if (this->dollarsToRubbles->Checked || this->eurosToRubbles->Checked) {
            sumTo = Convert::ToDouble(this->rate->Text) * sumFrom;
        }
        else {
            sumTo = sumFrom / Convert::ToDouble(this->rate->Text);
        }
        this->from->Text = Convert::ToString(sumFrom);
        this->to->Text = Convert::ToString(sumTo);
        return;
    }
    private: System::Boolean Check(System::String^ text1, System::String^ text2) {
        this->from->Text = L"";
        this->to->Text = L"";
        if (this->sum->Text->StartsWith(",")) {
            this->sum->Text = L"0" + this->sum->Text;
        }
        if (this->rate->Text->StartsWith(",")) {
            this->rate->Text = L"0" + this->rate->Text;
        }
        System::String^ errorMessage;
        if (text1->Length < 1) {
            if (text2->Length > 1) {
                double d;
                if (Double::TryParse(text2, d)) {
                    setRate();
                    return false;
                }
            }
            errorMessage = L"Сумма не должна быть пустой";
            this->sum->Text = L"";
            error(errorMessage);
            return false;
        }
        // 18.10.2023 15:50
        // 93,70
        // 101,40
        // 98,50
        // 107,20
        if (text2->Length < 1) {
            errorMessage = L"Курс обмена не должен быть пустой";
            this->rate->Text = L"";
            error(errorMessage);
            return false;
        }
        double d;
        if (!Double::TryParse(text1, d)) {
            errorMessage = L"Сумма должна являться числом";
            this->sum->Text = L"";
            error(errorMessage);
            return false;
        }
        if (!Double::TryParse(text2, d)) {
            errorMessage = L"Курс обмена должен являться числом";
            this->rate->Text = L"";
            error(errorMessage);
            return false;
        }
        return true;
    }
    private: System::Void error(System::String^ text) {
        MessageBox::Show(text, "APM - Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    private: System::Void dollarsToRubbles_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
        this->lblRate->Text = L"Курс обмена (руб./$):";
        this->lblFrom->Text = L"$";
        this->lblTo->Text = L"руб.";
        this->from->Text = L"";
        this->to->Text = L"";
        ratesCheck();
        return;
    }
    private: System::Void rubblesToDollars_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
        this->lblRate->Text = L"Курс обмена (руб./$):";
        this->lblFrom->Text = L"руб.";
        this->lblTo->Text = L"$";
        this->from->Text = L"";
        this->to->Text = L"";
        ratesCheck();
        return;
    }
    private: System::Void eurosToRubbles_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
        this->lblRate->Text = L"Курс обмена (руб./€):";
        this->lblFrom->Text = L"€";
        this->lblTo->Text = L"руб.";
        this->from->Text = L"";
        this->to->Text = L"";
        ratesCheck();
        return;
    }
    private: System::Void rubblesToEuros_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
        this->lblRate->Text = L"Курс обмена (руб./€):";
        this->lblFrom->Text = L"руб.";
        this->lblTo->Text = L"€";
        this->from->Text = L"";
        this->to->Text = L"";
        ratesCheck();
        return;
    }
    private: System::Void rate_leave(System::Object^ sender, System::EventArgs^ e) {
        setRate();
        return;
    }
    private: System::Void ratesCheck() {
        if (this->dollarsToRubbles->Checked && dollarsToRubblesRate != 0) {
            this->rate->Text = dollarsToRubblesRate.ToString("F2");
        }
        else if (this->rubblesToDollars->Checked && rubblesToDollarsRate != 0) {
            this->rate->Text = rubblesToDollarsRate.ToString("F2");
        }
        else if (this->eurosToRubbles->Checked && eurosToRubblesRate != 0) {
            this->rate->Text = eurosToRubblesRate.ToString("F2");
        }
        else if (rubblesToEurosRate != 0) {
            this->rate->Text = rubblesToEurosRate.ToString("F2");
        }
    }
    private: System::Void setRate() {
        if (this->dollarsToRubbles->Checked) {
            dollarsToRubblesRate = Convert::ToDouble(this->rate->Text);
        }
        else if (this->rubblesToDollars->Checked) {
            rubblesToDollarsRate = Convert::ToDouble(this->rate->Text);
        }
        else if (this->eurosToRubbles->Checked) {
            eurosToRubblesRate = Convert::ToDouble(this->rate->Text);
        }
        else {
            rubblesToEurosRate = Convert::ToDouble(this->rate->Text);
        }
    }
    };
}