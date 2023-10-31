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
    private: System::Windows::Forms::Button^ btnSolve;

    private: System::Windows::Forms::Button^ btnReset;
    private: System::Windows::Forms::Label^ lblOper;
    private: System::Windows::Forms::Label^ lblA;
    private: System::Windows::Forms::Label^ lblB;
    private: System::Windows::Forms::Label^ lblC;



    private: System::Windows::Forms::TextBox^ a;
    private: System::Windows::Forms::TextBox^ b;
    private: System::Windows::Forms::TextBox^ c;
    private: System::Windows::Forms::Label^ lblOdds;
    private: System::Windows::Forms::Label^ lblX1;
    private: System::Windows::Forms::Label^ lblX2;
    private: System::Windows::Forms::TextBox^ x1;
    private: System::Windows::Forms::TextBox^ x2;


    private: System::Windows::Forms::Label^ lblRoots;
    private: System::Windows::Forms::Label^ lblComments;
















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
            this->btnSolve = (gcnew System::Windows::Forms::Button());
            this->btnReset = (gcnew System::Windows::Forms::Button());
            this->lblOper = (gcnew System::Windows::Forms::Label());
            this->lblA = (gcnew System::Windows::Forms::Label());
            this->lblB = (gcnew System::Windows::Forms::Label());
            this->lblC = (gcnew System::Windows::Forms::Label());
            this->a = (gcnew System::Windows::Forms::TextBox());
            this->b = (gcnew System::Windows::Forms::TextBox());
            this->c = (gcnew System::Windows::Forms::TextBox());
            this->lblOdds = (gcnew System::Windows::Forms::Label());
            this->lblX1 = (gcnew System::Windows::Forms::Label());
            this->lblX2 = (gcnew System::Windows::Forms::Label());
            this->x1 = (gcnew System::Windows::Forms::TextBox());
            this->x2 = (gcnew System::Windows::Forms::TextBox());
            this->lblRoots = (gcnew System::Windows::Forms::Label());
            this->lblComments = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // btnClose
            // 
            this->btnClose->Location = System::Drawing::Point(429, 208);
            this->btnClose->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->btnClose->Name = L"btnClose";
            this->btnClose->Size = System::Drawing::Size(133, 37);
            this->btnClose->TabIndex = 0;
            this->btnClose->Text = L"Закрыть";
            this->btnClose->UseVisualStyleBackColor = true;
            this->btnClose->Click += gcnew System::EventHandler(this, &FFirst::btnClose_Click);
            // 
            // btnSolve
            // 
            this->btnSolve->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btnSolve->Location = System::Drawing::Point(227, 208);
            this->btnSolve->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->btnSolve->Name = L"btnSolve";
            this->btnSolve->Size = System::Drawing::Size(133, 37);
            this->btnSolve->TabIndex = 1;
            this->btnSolve->Text = L"Решить";
            this->btnSolve->UseVisualStyleBackColor = true;
            this->btnSolve->Click += gcnew System::EventHandler(this, &FFirst::btnSolve_Click);
            // 
            // btnReset
            // 
            this->btnReset->Location = System::Drawing::Point(13, 208);
            this->btnReset->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->btnReset->Name = L"btnReset";
            this->btnReset->Size = System::Drawing::Size(133, 37);
            this->btnReset->TabIndex = 2;
            this->btnReset->Text = L"Сброс";
            this->btnReset->UseVisualStyleBackColor = true;
            this->btnReset->Click += gcnew System::EventHandler(this, &FFirst::btnReset_Click);
            // 
            // lblOper
            // 
            this->lblOper->AutoSize = true;
            this->lblOper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblOper->Location = System::Drawing::Point(147, 12);
            this->lblOper->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblOper->Name = L"lblOper";
            this->lblOper->Size = System::Drawing::Size(0, 20);
            this->lblOper->TabIndex = 3;
            this->lblOper->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // lblA
            // 
            this->lblA->AutoSize = true;
            this->lblA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblA->Location = System::Drawing::Point(20, 74);
            this->lblA->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblA->Name = L"lblA";
            this->lblA->Size = System::Drawing::Size(29, 18);
            this->lblA->TabIndex = 4;
            this->lblA->Text = L"a =";
            this->lblA->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // lblB
            // 
            this->lblB->AutoSize = true;
            this->lblB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblB->Location = System::Drawing::Point(20, 111);
            this->lblB->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblB->Name = L"lblB";
            this->lblB->Size = System::Drawing::Size(29, 18);
            this->lblB->TabIndex = 5;
            this->lblB->Text = L"b =";
            this->lblB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // lblC
            // 
            this->lblC->AutoSize = true;
            this->lblC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblC->Location = System::Drawing::Point(20, 148);
            this->lblC->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblC->Name = L"lblC";
            this->lblC->Size = System::Drawing::Size(29, 18);
            this->lblC->TabIndex = 6;
            this->lblC->Text = L"c =";
            this->lblC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // a
            // 
            this->a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->a->Location = System::Drawing::Point(53, 74);
            this->a->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->a->Name = L"a";
            this->a->Size = System::Drawing::Size(119, 23);
            this->a->TabIndex = 7;
            this->a->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // b
            // 
            this->b->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->b->Location = System::Drawing::Point(53, 111);
            this->b->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->b->Name = L"b";
            this->b->Size = System::Drawing::Size(119, 23);
            this->b->TabIndex = 8;
            this->b->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // c
            // 
            this->c->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->c->Location = System::Drawing::Point(53, 146);
            this->c->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->c->Name = L"c";
            this->c->Size = System::Drawing::Size(119, 23);
            this->c->TabIndex = 9;
            this->c->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // lblOdds
            // 
            this->lblOdds->AutoSize = true;
            this->lblOdds->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblOdds->Location = System::Drawing::Point(47, 12);
            this->lblOdds->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblOdds->Name = L"lblOdds";
            this->lblOdds->Size = System::Drawing::Size(131, 36);
            this->lblOdds->TabIndex = 13;
            this->lblOdds->Text = L"Коэффициенты\r\nуравнения";
            this->lblOdds->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // lblX1
            // 
            this->lblX1->AutoSize = true;
            this->lblX1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblX1->Location = System::Drawing::Point(200, 74);
            this->lblX1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblX1->Name = L"lblX1";
            this->lblX1->Size = System::Drawing::Size(36, 18);
            this->lblX1->TabIndex = 14;
            this->lblX1->Text = L"x1 =";
            this->lblX1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // lblX2
            // 
            this->lblX2->AutoSize = true;
            this->lblX2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblX2->Location = System::Drawing::Point(380, 74);
            this->lblX2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblX2->Name = L"lblX2";
            this->lblX2->Size = System::Drawing::Size(36, 18);
            this->lblX2->TabIndex = 15;
            this->lblX2->Text = L"x2 =";
            this->lblX2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // x1
            // 
            this->x1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->x1->Location = System::Drawing::Point(240, 73);
            this->x1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->x1->Name = L"x1";
            this->x1->ReadOnly = true;
            this->x1->Size = System::Drawing::Size(119, 23);
            this->x1->TabIndex = 16;
            this->x1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // x2
            // 
            this->x2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->x2->Location = System::Drawing::Point(420, 73);
            this->x2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->x2->Name = L"x2";
            this->x2->ReadOnly = true;
            this->x2->Size = System::Drawing::Size(119, 23);
            this->x2->TabIndex = 17;
            this->x2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // lblRoots
            // 
            this->lblRoots->AutoSize = true;
            this->lblRoots->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblRoots->Location = System::Drawing::Point(313, 22);
            this->lblRoots->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblRoots->Name = L"lblRoots";
            this->lblRoots->Size = System::Drawing::Size(141, 18);
            this->lblRoots->TabIndex = 18;
            this->lblRoots->Text = L"Корни уравнения";
            this->lblRoots->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // lblComments
            // 
            this->lblComments->AutoSize = true;
            this->lblComments->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblComments->Location = System::Drawing::Point(236, 134);
            this->lblComments->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->lblComments->Name = L"lblComments";
            this->lblComments->Size = System::Drawing::Size(0, 18);
            this->lblComments->TabIndex = 19;
            this->lblComments->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // FFirst
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(579, 260);
            this->Controls->Add(this->lblComments);
            this->Controls->Add(this->lblRoots);
            this->Controls->Add(this->x2);
            this->Controls->Add(this->x1);
            this->Controls->Add(this->lblX2);
            this->Controls->Add(this->lblX1);
            this->Controls->Add(this->lblOdds);
            this->Controls->Add(this->c);
            this->Controls->Add(this->b);
            this->Controls->Add(this->a);
            this->Controls->Add(this->lblC);
            this->Controls->Add(this->lblB);
            this->Controls->Add(this->lblA);
            this->Controls->Add(this->lblOper);
            this->Controls->Add(this->btnReset);
            this->Controls->Add(this->btnSolve);
            this->Controls->Add(this->btnClose);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->MaximizeBox = false;
            this->Name = L"FFirst";
            this->Text = L"Решение квадратного уравнения";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }
    private: System::Void btnSolve_Click(System::Object^ sender, System::EventArgs^ e) {
        double a, b, c;
        System::String^ textA = this->a->Text;
        System::String^ textB = this->b->Text;
        System::String^ textC = this->c->Text;
        if (!Check(textA, textB, textC)) {
            return;
        }
        a = Convert::ToDouble(this->a->Text);
        b = Convert::ToDouble(this->b->Text);
        c = Convert::ToDouble(this->c->Text);

        if (a == 0) {
            if (b == 0) {
                if (c == 0.0) {
                    this->lblComments->Text = Convert::ToString(L"0 = 0. Верное равенство.");
                }
                else {
                    this->lblComments->Text = Convert::ToString(c + L" = 0. Неверное равенство.");
                }
                return;
            }
            double x = -c / b;
            this->x1->Text = Convert::ToString(x);
            this->lblComments->Text = Convert::ToString(L"Линейное уравнение.\nИмеет один корень.");
            return;
        }

        if (b == 0) {
            if (c == 0) {
                this->x1->Text = Convert::ToString(L"0");
                this->lblComments->Text = Convert::ToString(L"Линейное уравнение.\nИмеет один корень.");
                return;
            }
            double difference = -c / a;
            if (difference < 0) {
                this->lblComments->Text = Convert::ToString(L"x^2 = " + -c + " / " + a + ".\nУравнение не имеет\nдействительных корней.");
                return;
            }
            else {
                double x1 = -sqrt(difference);
                double x2 = sqrt(difference);
                this->x1->Text = Convert::ToString(x1);
                this->x2->Text = Convert::ToString(x2);
                this->lblComments->Text = Convert::ToString(L"x^2 = " + -c + " / " + a + ".\nУравнение имеет два корня.");
            }
        }

        double discriminant = b * b - 4 * a * c;
        if (discriminant > 0) {
            double x1 = (-b - sqrt(discriminant)) / (2 * a);
            double x2 = (-b + sqrt(discriminant)) / (2 * a);
            this->x1->Text = Convert::ToString(x1);
            this->x2->Text = Convert::ToString(x2);
            this->lblComments->Text = Convert::ToString(L"Дискриминант > 0. Уравнение\nимеет два корня.");
        }
        else if (discriminant == 0) {
            double x = -b / (2 * a);
            this->x1->Text = Convert::ToString(x);
            this->x2->Text = Convert::ToString(x);
            this->lblComments->Text = Convert::ToString(L"Дискриминант = 0. Уравнение\nимеет два одинаковых корня.");
        }
        else {
            this->lblComments->Text = Convert::ToString(L"Дискриминант < 0. Уравнение\nне имеет действительных корней.");
        }
    }
    private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
        this->a->Text = L"";
        this->b->Text = L"";
        this->c->Text = L"";
        this->x1->Text = L"";
        this->x2->Text = L"";
        this->lblComments->Text = L"";
    }
    private: System::Boolean Check(System::String^ text1, System::String^ text2, System::String^ text3) {
        this->x1->Text = L"";
        this->x2->Text = L"";
        this->lblComments->Text = L"";
        System::String^ errorMessage;
        if (text1->Length < 1) {
            errorMessage = L"Переменная A не должна быть пустой";
            error(errorMessage);
            return false;
        }
        if (text2->Length < 1) {
            errorMessage = L"Переменная B не должна быть пустой";
            error(errorMessage);
            return false;
        }
        if (text3->Length < 1) {
            errorMessage = L"Переменная C не должна быть пустой";
            error(errorMessage);
            return false;
        }
        double d;
        if (!Double::TryParse(text1, d)) {
            errorMessage = L"Переменная A должна являться числом";
            error(errorMessage);
            return false;
        }
        if (!Double::TryParse(text2, d)) {
            errorMessage = L"Переменная B должна являться числом";
            error(errorMessage);
            return false;
        }
        if (!Double::TryParse(text3, d)) {
            errorMessage = L"Переменная C должна являться числом";
            error(errorMessage);
            return false;
        }
        if (this->a->Text->StartsWith(",")) {
            this->a->Text = L"0" + this->a->Text;
        }
        if (this->b->Text->StartsWith(",")) {
            this->b->Text = L"0" + this->b->Text;
        }
        if (this->c->Text->StartsWith(",")) {
            this->c->Text = L"0" + this->c->Text;
        }
        return true;
    }
    private: System::Void error(System::String^ text) {
        MessageBox::Show(text, "Квадратные уравнения - Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    };
}
