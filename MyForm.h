#pragma once
#include "Functions.h"
#include <string>
#include <sstream>
#include <msclr/marshal_cppstd.h>
using namespace System;
using namespace System::Windows::Forms;

namespace RandomVariableModeling {

	//using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	//using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	std::vector<std::vector<int>> Variables;
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
	private: System::Windows::Forms::Label^ task;






	private: System::Windows::Forms::DataGridView^ Table1;



	private: System::Windows::Forms::Label^ SampleValue;



	private: System::Windows::Forms::TextBox^ Svalue;
	private: System::Windows::Forms::Button^ task1;


	private: System::Windows::Forms::DataGridView^ TableValues;
	private: System::Windows::Forms::Label^ S;










	private: System::Windows::Forms::Label^ N;
	private: System::Windows::Forms::TextBox^ NValue;
	private: System::Windows::Forms::Label^ M;
	private: System::Windows::Forms::TextBox^ MValue;
	private: System::Windows::Forms::Label^ r;
	private: System::Windows::Forms::TextBox^ rValue;
	private: System::Windows::Forms::DataGridView^ FeatureTable;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::Button^ task2;
	private: System::Windows::Forms::Button^ task3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ Graphics;
	private: System::Windows::Forms::Label^ DiscrText;
	private: System::Windows::Forms::TextBox^ DiscrVal;
	private: System::Windows::Forms::DataGridView^ ProbabilityTable;
	private: System::Windows::Forms::Label^ maxDif;
	private: System::Windows::Forms::TextBox^ maxDifVal;
	private: System::Windows::Forms::Label^ k;
	private: System::Windows::Forms::TextBox^ kVal;
	private: System::Windows::Forms::Label^ limits;
	private: System::Windows::Forms::TextBox^ limitsVal;
	private: System::Windows::Forms::Label^ alpha;
	private: System::Windows::Forms::TextBox^ alphaVal;
	private: System::Windows::Forms::DataGridView^ TableOfQ;
	private: System::Windows::Forms::Label^ F;
	private: System::Windows::Forms::TextBox^ FVal;
	private: System::Windows::Forms::Label^ okay;
	private: System::Windows::Forms::TextBox^ okayVal;
	private: System::Windows::Forms::Label^ notOkay;
	private: System::Windows::Forms::TextBox^ notOkayVal;



	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->task = (gcnew System::Windows::Forms::Label());
			this->Table1 = (gcnew System::Windows::Forms::DataGridView());
			this->SampleValue = (gcnew System::Windows::Forms::Label());
			this->Svalue = (gcnew System::Windows::Forms::TextBox());
			this->task1 = (gcnew System::Windows::Forms::Button());
			this->TableValues = (gcnew System::Windows::Forms::DataGridView());
			this->S = (gcnew System::Windows::Forms::Label());
			this->N = (gcnew System::Windows::Forms::Label());
			this->NValue = (gcnew System::Windows::Forms::TextBox());
			this->M = (gcnew System::Windows::Forms::Label());
			this->MValue = (gcnew System::Windows::Forms::TextBox());
			this->r = (gcnew System::Windows::Forms::Label());
			this->rValue = (gcnew System::Windows::Forms::TextBox());
			this->FeatureTable = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->task2 = (gcnew System::Windows::Forms::Button());
			this->task3 = (gcnew System::Windows::Forms::Button());
			this->Graphics = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->DiscrText = (gcnew System::Windows::Forms::Label());
			this->DiscrVal = (gcnew System::Windows::Forms::TextBox());
			this->ProbabilityTable = (gcnew System::Windows::Forms::DataGridView());
			this->maxDif = (gcnew System::Windows::Forms::Label());
			this->maxDifVal = (gcnew System::Windows::Forms::TextBox());
			this->k = (gcnew System::Windows::Forms::Label());
			this->kVal = (gcnew System::Windows::Forms::TextBox());
			this->limits = (gcnew System::Windows::Forms::Label());
			this->limitsVal = (gcnew System::Windows::Forms::TextBox());
			this->alpha = (gcnew System::Windows::Forms::Label());
			this->alphaVal = (gcnew System::Windows::Forms::TextBox());
			this->TableOfQ = (gcnew System::Windows::Forms::DataGridView());
			this->F = (gcnew System::Windows::Forms::Label());
			this->FVal = (gcnew System::Windows::Forms::TextBox());
			this->okay = (gcnew System::Windows::Forms::Label());
			this->okayVal = (gcnew System::Windows::Forms::TextBox());
			this->notOkay = (gcnew System::Windows::Forms::Label());
			this->notOkayVal = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableValues))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FeatureTable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Graphics))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProbabilityTable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableOfQ))->BeginInit();
			this->SuspendLayout();
			// 
			// task
			// 
			this->task->AutoSize = true;
			this->task->BackColor = System::Drawing::Color::White;
			this->task->Location = System::Drawing::Point(8, 9);
			this->task->Name = L"task";
			this->task->Size = System::Drawing::Size(422, 60);
			this->task->TabIndex = 0;
			this->task->Text = L"В лотерее среди N билетов M выигрышных. \r\nИгрок покупает r билетов. \r\nС.в. η — чи"
				L"сло выигрышных билетов среди купленных.";
			// 
			// Table1
			// 
			this->Table1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->Table1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Table1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Table1->ColumnHeadersVisible = false;
			this->Table1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Table1->Location = System::Drawing::Point(0, 732);
			this->Table1->Name = L"Table1";
			this->Table1->RowHeadersVisible = false;
			this->Table1->RowHeadersWidth = 62;
			this->Table1->RowTemplate->Height = 28;
			this->Table1->Size = System::Drawing::Size(1112, 0);
			this->Table1->TabIndex = 7;
			this->Table1->Visible = false;
			// 
			// SampleValue
			// 
			this->SampleValue->AutoSize = true;
			this->SampleValue->Location = System::Drawing::Point(441, 288);
			this->SampleValue->Name = L"SampleValue";
			this->SampleValue->Size = System::Drawing::Size(0, 20);
			this->SampleValue->TabIndex = 10;
			// 
			// Svalue
			// 
			this->Svalue->Location = System::Drawing::Point(289, 175);
			this->Svalue->Name = L"Svalue";
			this->Svalue->Size = System::Drawing::Size(100, 26);
			this->Svalue->TabIndex = 14;
			this->Svalue->Text = L"10";
			// 
			// task1
			// 
			this->task1->BackColor = System::Drawing::Color::SandyBrown;
			this->task1->Location = System::Drawing::Point(16, 207);
			this->task1->Name = L"task1";
			this->task1->Size = System::Drawing::Size(210, 83);
			this->task1->TabIndex = 15;
			this->task1->Text = L"Розыгрыш значений случайной величины";
			this->task1->UseVisualStyleBackColor = false;
			this->task1->Click += gcnew System::EventHandler(this, &MyForm::task1_Click);
			// 
			// TableValues
			// 
			this->TableValues->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->TableValues->BackgroundColor = System::Drawing::Color::White;
			this->TableValues->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TableValues->ColumnHeadersVisible = false;
			this->TableValues->Location = System::Drawing::Point(17, 296);
			this->TableValues->Name = L"TableValues";
			this->TableValues->RowHeadersVisible = false;
			this->TableValues->RowHeadersWidth = 62;
			this->TableValues->RowTemplate->Height = 28;
			this->TableValues->Size = System::Drawing::Size(618, 114);
			this->TableValues->TabIndex = 18;
			this->TableValues->Visible = false;
			// 
			// S
			// 
			this->S->AutoSize = true;
			this->S->Location = System::Drawing::Point(13, 173);
			this->S->Name = L"S";
			this->S->Size = System::Drawing::Size(221, 20);
			this->S->TabIndex = 19;
			this->S->Text = L"Количество экспериментов";
			// 
			// N
			// 
			this->N->AutoSize = true;
			this->N->Location = System::Drawing::Point(13, 79);
			this->N->Name = L"N";
			this->N->Size = System::Drawing::Size(168, 20);
			this->N->TabIndex = 22;
			this->N->Text = L"Количество билетов";
			// 
			// NValue
			// 
			this->NValue->Location = System::Drawing::Point(289, 79);
			this->NValue->Name = L"NValue";
			this->NValue->Size = System::Drawing::Size(100, 26);
			this->NValue->TabIndex = 23;
			this->NValue->Text = L"10";
			// 
			// M
			// 
			this->M->AutoSize = true;
			this->M->Location = System::Drawing::Point(13, 111);
			this->M->Name = L"M";
			this->M->Size = System::Drawing::Size(268, 20);
			this->M->TabIndex = 24;
			this->M->Text = L"Количество выигрышных билетов";
			// 
			// MValue
			// 
			this->MValue->Location = System::Drawing::Point(289, 111);
			this->MValue->Name = L"MValue";
			this->MValue->Size = System::Drawing::Size(100, 26);
			this->MValue->TabIndex = 25;
			this->MValue->Text = L"3";
			// 
			// r
			// 
			this->r->AutoSize = true;
			this->r->Location = System::Drawing::Point(13, 143);
			this->r->Name = L"r";
			this->r->Size = System::Drawing::Size(251, 20);
			this->r->TabIndex = 26;
			this->r->Text = L"Количество купленных билетов";
			// 
			// rValue
			// 
			this->rValue->Location = System::Drawing::Point(289, 143);
			this->rValue->Name = L"rValue";
			this->rValue->Size = System::Drawing::Size(100, 26);
			this->rValue->TabIndex = 27;
			this->rValue->Text = L"4";
			// 
			// FeatureTable
			// 
			this->FeatureTable->BackgroundColor = System::Drawing::Color::White;
			this->FeatureTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->FeatureTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->FeatureTable->Location = System::Drawing::Point(18, 428);
			this->FeatureTable->Name = L"FeatureTable";
			this->FeatureTable->RowHeadersVisible = false;
			this->FeatureTable->RowHeadersWidth = 62;
			this->FeatureTable->RowTemplate->Height = 28;
			this->FeatureTable->Size = System::Drawing::Size(907, 75);
			this->FeatureTable->TabIndex = 28;
			this->FeatureTable->Visible = false;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"E";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"x*";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"|E - x*|";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"D";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"S^2";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"|D -S^2|";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 150;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Me";
			this->Column7->MinimumWidth = 8;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 150;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"R";
			this->Column8->MinimumWidth = 8;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 150;
			// 
			// task2
			// 
			this->task2->BackColor = System::Drawing::Color::SandyBrown;
			this->task2->Location = System::Drawing::Point(231, 207);
			this->task2->Name = L"task2";
			this->task2->Size = System::Drawing::Size(199, 83);
			this->task2->TabIndex = 29;
			this->task2->Text = L"Показать характеристики случайной величины";
			this->task2->UseVisualStyleBackColor = false;
			this->task2->Click += gcnew System::EventHandler(this, &MyForm::task2_Click);
			// 
			// task3
			// 
			this->task3->BackColor = System::Drawing::Color::SandyBrown;
			this->task3->Location = System::Drawing::Point(436, 207);
			this->task3->Name = L"task3";
			this->task3->Size = System::Drawing::Size(199, 83);
			this->task3->TabIndex = 30;
			this->task3->Text = L"Проверить гипотезу о распределении";
			this->task3->UseVisualStyleBackColor = false;
			this->task3->Click += gcnew System::EventHandler(this, &MyForm::task3_Click);
			// 
			// Graphics
			// 
			chartArea2->Name = L"ChartArea1";
			this->Graphics->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->Graphics->Legends->Add(legend2);
			this->Graphics->Location = System::Drawing::Point(645, 8);
			this->Graphics->Name = L"Graphics";
			this->Graphics->Size = System::Drawing::Size(436, 282);
			this->Graphics->TabIndex = 31;
			this->Graphics->Text = L"chart1";
			this->Graphics->Visible = false;
			// 
			// DiscrText
			// 
			this->DiscrText->AutoSize = true;
			this->DiscrText->BackColor = System::Drawing::Color::White;
			this->DiscrText->ForeColor = System::Drawing::SystemColors::ControlText;
			this->DiscrText->Location = System::Drawing::Point(641, 329);
			this->DiscrText->Name = L"DiscrText";
			this->DiscrText->Size = System::Drawing::Size(170, 20);
			this->DiscrText->TabIndex = 32;
			this->DiscrText->Text = L"Мера расхождения = ";
			this->DiscrText->Visible = false;
			// 
			// DiscrVal
			// 
			this->DiscrVal->Location = System::Drawing::Point(817, 326);
			this->DiscrVal->Name = L"DiscrVal";
			this->DiscrVal->Size = System::Drawing::Size(100, 26);
			this->DiscrVal->TabIndex = 33;
			this->DiscrVal->Visible = false;
			// 
			// ProbabilityTable
			// 
			this->ProbabilityTable->BackgroundColor = System::Drawing::Color::White;
			this->ProbabilityTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ProbabilityTable->ColumnHeadersVisible = false;
			this->ProbabilityTable->Location = System::Drawing::Point(18, 529);
			this->ProbabilityTable->Name = L"ProbabilityTable";
			this->ProbabilityTable->RowHeadersVisible = false;
			this->ProbabilityTable->RowHeadersWidth = 62;
			this->ProbabilityTable->RowTemplate->Height = 28;
			this->ProbabilityTable->Size = System::Drawing::Size(618, 104);
			this->ProbabilityTable->TabIndex = 34;
			this->ProbabilityTable->Visible = false;
			// 
			// maxDif
			// 
			this->maxDif->AutoSize = true;
			this->maxDif->BackColor = System::Drawing::Color::White;
			this->maxDif->ForeColor = System::Drawing::SystemColors::ControlText;
			this->maxDif->Location = System::Drawing::Point(641, 570);
			this->maxDif->Name = L"maxDif";
			this->maxDif->Size = System::Drawing::Size(233, 20);
			this->maxDif->TabIndex = 35;
			this->maxDif->Text = L"Максимальное отклонение = ";
			this->maxDif->Visible = false;
			// 
			// maxDifVal
			// 
			this->maxDifVal->Location = System::Drawing::Point(880, 567);
			this->maxDifVal->Name = L"maxDifVal";
			this->maxDifVal->Size = System::Drawing::Size(100, 26);
			this->maxDifVal->TabIndex = 36;
			this->maxDifVal->Visible = false;
			// 
			// k
			// 
			this->k->AutoSize = true;
			this->k->Location = System::Drawing::Point(654, 23);
			this->k->Name = L"k";
			this->k->Size = System::Drawing::Size(220, 20);
			this->k->TabIndex = 37;
			this->k->Text = L"Введите число интервалов";
			this->k->Visible = false;
			// 
			// kVal
			// 
			this->kVal->Location = System::Drawing::Point(912, 17);
			this->kVal->Name = L"kVal";
			this->kVal->Size = System::Drawing::Size(100, 26);
			this->kVal->TabIndex = 38;
			this->kVal->Text = L"2";
			this->kVal->Visible = false;
			// 
			// limits
			// 
			this->limits->AutoSize = true;
			this->limits->Location = System::Drawing::Point(654, 62);
			this->limits->Name = L"limits";
			this->limits->Size = System::Drawing::Size(238, 20);
			this->limits->TabIndex = 39;
			this->limits->Text = L"Введите границы интервалов";
			this->limits->Visible = false;
			// 
			// limitsVal
			// 
			this->limitsVal->Location = System::Drawing::Point(912, 62);
			this->limitsVal->Name = L"limitsVal";
			this->limitsVal->Size = System::Drawing::Size(100, 26);
			this->limitsVal->TabIndex = 40;
			this->limitsVal->Text = L"1";
			this->limitsVal->Visible = false;
			// 
			// alpha
			// 
			this->alpha->AutoSize = true;
			this->alpha->Location = System::Drawing::Point(654, 111);
			this->alpha->Name = L"alpha";
			this->alpha->Size = System::Drawing::Size(235, 20);
			this->alpha->TabIndex = 41;
			this->alpha->Text = L"Введите уровень значимости";
			this->alpha->Visible = false;
			// 
			// alphaVal
			// 
			this->alphaVal->Location = System::Drawing::Point(912, 105);
			this->alphaVal->Name = L"alphaVal";
			this->alphaVal->Size = System::Drawing::Size(100, 26);
			this->alphaVal->TabIndex = 42;
			this->alphaVal->Text = L"0,5";
			this->alphaVal->Visible = false;
			// 
			// TableOfQ
			// 
			this->TableOfQ->BackgroundColor = System::Drawing::Color::White;
			this->TableOfQ->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TableOfQ->Enabled = false;
			this->TableOfQ->Location = System::Drawing::Point(18, 529);
			this->TableOfQ->Name = L"TableOfQ";
			this->TableOfQ->RowHeadersWidth = 62;
			this->TableOfQ->RowTemplate->Height = 28;
			this->TableOfQ->Size = System::Drawing::Size(623, 114);
			this->TableOfQ->TabIndex = 43;
			this->TableOfQ->Visible = false;
			// 
			// F
			// 
			this->F->AutoSize = true;
			this->F->Location = System::Drawing::Point(14, 428);
			this->F->Name = L"F";
			this->F->Size = System::Drawing::Size(58, 20);
			this->F->TabIndex = 44;
			this->F->Text = L"1 - F = ";
			this->F->Visible = false;
			// 
			// FVal
			// 
			this->FVal->Location = System::Drawing::Point(134, 428);
			this->FVal->Name = L"FVal";
			this->FVal->Size = System::Drawing::Size(100, 26);
			this->FVal->TabIndex = 45;
			this->FVal->Visible = false;
			// 
			// okay
			// 
			this->okay->AutoSize = true;
			this->okay->Location = System::Drawing::Point(14, 469);
			this->okay->Name = L"okay";
			this->okay->Size = System::Drawing::Size(75, 20);
			this->okay->TabIndex = 46;
			this->okay->Text = L"Принято";
			this->okay->Visible = false;
			// 
			// okayVal
			// 
			this->okayVal->Location = System::Drawing::Point(134, 469);
			this->okayVal->Name = L"okayVal";
			this->okayVal->Size = System::Drawing::Size(100, 26);
			this->okayVal->TabIndex = 47;
			this->okayVal->Visible = false;
			// 
			// notOkay
			// 
			this->notOkay->AutoSize = true;
			this->notOkay->Location = System::Drawing::Point(14, 506);
			this->notOkay->Name = L"notOkay";
			this->notOkay->Size = System::Drawing::Size(97, 20);
			this->notOkay->TabIndex = 48;
			this->notOkay->Text = L"Не принято";
			this->notOkay->Visible = false;
			// 
			// notOkayVal
			// 
			this->notOkayVal->Location = System::Drawing::Point(134, 503);
			this->notOkayVal->Name = L"notOkayVal";
			this->notOkayVal->Size = System::Drawing::Size(100, 26);
			this->notOkayVal->TabIndex = 49;
			this->notOkayVal->Visible = false;
			// 
			// MyForm
			// 
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1112, 732);
			this->Controls->Add(this->notOkayVal);
			this->Controls->Add(this->notOkay);
			this->Controls->Add(this->okayVal);
			this->Controls->Add(this->okay);
			this->Controls->Add(this->FVal);
			this->Controls->Add(this->F);
			this->Controls->Add(this->TableOfQ);
			this->Controls->Add(this->alphaVal);
			this->Controls->Add(this->alpha);
			this->Controls->Add(this->limitsVal);
			this->Controls->Add(this->limits);
			this->Controls->Add(this->kVal);
			this->Controls->Add(this->k);
			this->Controls->Add(this->maxDifVal);
			this->Controls->Add(this->maxDif);
			this->Controls->Add(this->ProbabilityTable);
			this->Controls->Add(this->DiscrVal);
			this->Controls->Add(this->DiscrText);
			this->Controls->Add(this->Graphics);
			this->Controls->Add(this->task3);
			this->Controls->Add(this->task2);
			this->Controls->Add(this->rValue);
			this->Controls->Add(this->r);
			this->Controls->Add(this->MValue);
			this->Controls->Add(this->M);
			this->Controls->Add(this->NValue);
			this->Controls->Add(this->N);
			this->Controls->Add(this->S);
			this->Controls->Add(this->TableValues);
			this->Controls->Add(this->task1);
			this->Controls->Add(this->Svalue);
			this->Controls->Add(this->SampleValue);
			this->Controls->Add(this->Table1);
			this->Controls->Add(this->task);
			this->Controls->Add(this->FeatureTable);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableValues))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FeatureTable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Graphics))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProbabilityTable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableOfQ))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
private: System::Void task1_Click(System::Object^ sender, System::EventArgs^ e) {
	TableValues->Rows->Clear();
	TableValues->Columns->Clear();
	int M = Convert::ToInt32(MValue->Text);
	int N = Convert::ToInt32(NValue->Text);
	int r = Convert::ToInt32(rValue->Text);
	int numberE = Convert::ToInt32(Svalue->Text);
	//double ValueP= Convert::ToDouble(Pvalue->Text);
	Variables = RandomVariable(M, N, r, numberE);

	int rowCount = 2;
	int columnCount = Variables[0].size();
	for (int i = 0; i < columnCount; i++)
	{
		TableValues->Columns->Add("Column" + i, "Column " + (i + 1));
	}
	for (int i = 0; i < rowCount; i++)
	{
		TableValues->Rows->Add();
	}
	int sum = 0;
	for (int i = 0; i < Variables[1].size(); i++) {
		sum += Variables[1][i];
	}
	for (int i = 0; i < Variables[0].size(); i++) {
		int elem = Variables[1][i];
		double ny = (double)elem / sum;
		TableValues->Rows[0]->Cells[i]->Value = Variables[0][i];
		TableValues->Rows[1]->Cells[i]->Value = Variables[1][i];
		TableValues->Rows[2]->Cells[i]->Value = ny;
	}
	TableValues->Visible = true;
}
private: System::Void SelectTask1_Click(System::Object^ sender, System::EventArgs^ e) {
	task1->Visible = true;
	task2->Visible = false;
	FeatureTable->Visible = false;
}
private: System::Void SelectTask2_Click(System::Object^ sender, System::EventArgs^ e) {
	FeatureTable->Rows->Clear();
	task1->Visible = false;
	TableValues->Visible = false;
	/*for each (Control ^ control in this->Controls)
	{
		control->Visible = false;
	}
	SelectTask1->Visible = true;
	SelectTask2->Visible = true;
	SelectTask3->Visible = true;
	task->Visible = true;
	N->Visible = true;
	M->Visible = true;
	r->Visible = true;
	S->Visible = true;
	P->Visible = true;
	NValue->Visible = true;
	MValue->Visible = true;
	rValue->Visible = true;
	Svalue->Visible = true;
	Pvalue->Visible = true;*/
	task2->Visible = true;
}
private: System::Void task2_Click(System::Object^ sender, System::EventArgs^ e) {
	FeatureTable->Rows->Clear();
	//FeatureTable->Columns->Clear();
	Graphics->Series->Clear();
	int M = Convert::ToInt32(MValue->Text);
	int N = Convert::ToInt32(NValue->Text);
	int r = Convert::ToInt32(rValue->Text);
	int numberE = Convert::ToInt32(Svalue->Text);
	std::vector<double> probab(Variables[0].size());
	for (int i = 0; i < probab.size(); i++) {
		probab[i] = Probability(M, N, r, Variables[0][i]);
	}

	FeatureTable->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	double MO= MatOz(Variables[0], probab);
	//double value_E = E_Value(M, N, r);
	double SampAve = SampleAverage(Variables[2], Variables[1]);
	double D = Dispersion(Variables[0], probab);
	double SampD= SampleDispersion(Variables[2], Variables[1]);
	double Med = Mediana(Variables[2]);
	int razmah= R(Variables[2]);
	//FeatureTable->Rows->Add();
	FeatureTable->Rows[0]->Cells[0]->Value = MO;
	FeatureTable->Rows[0]->Cells[1]->Value = SampAve;
	FeatureTable->Rows[0]->Cells[2]->Value = abs(MO - SampAve);
	FeatureTable->Rows[0]->Cells[3]->Value = D;
	FeatureTable->Rows[0]->Cells[4]->Value = SampD;
	FeatureTable->Rows[0]->Cells[5]->Value = abs(D - SampD);
	FeatureTable->Rows[0]->Cells[6]->Value = Med;
	FeatureTable->Rows[0]->Cells[7]->Value = razmah;
	FeatureTable->Visible = true;

	std::vector<double> DistribFunc = FuncRaspr(M, N, r, Variables[0]);
	std::vector<double> SampleDistribFunc = SampleF(Variables[1]);

	Series^ series = gcnew Series();
	series->ChartType = SeriesChartType::Line;
	series->Color = System::Drawing::Color::Gold;
	series->LegendText = "Функция распределения";
	series->DataPointCustomProperties::BorderWidth = 3;
	Graphics->Series->Add(series);

	Series^ series1 = gcnew Series();
	series1->ChartType = SeriesChartType::Line;
	series1->Color = System::Drawing::Color::Olive;
	series1->LegendText = "Выборочная функция распределения";
	series1->DataPointCustomProperties::BorderWidth = 3;
	Graphics->Series->Add(series1);

	for (int i = 0; i < (DistribFunc.size()-1); i++) {
		Graphics->Series[0]->Points->AddXY(Variables[0][i], DistribFunc[i]);
		Graphics->Series[0]->Points->AddXY(Variables[0][i+1], DistribFunc[i]);
		Graphics->Series[1]->Points->AddXY(Variables[0][i], SampleDistribFunc[i]);
		Graphics->Series[1]->Points->AddXY(Variables[0][i+1], SampleDistribFunc[i]);
	}
	Graphics->Series[0]->Points->AddXY(Variables[0][DistribFunc.size() - 1], DistribFunc[DistribFunc.size() - 1]);
	Graphics->Series[1]->Points->AddXY(Variables[0][SampleDistribFunc.size()-1], SampleDistribFunc[SampleDistribFunc.size()-1]);
	double Dsc = Discrepancy(DistribFunc, SampleDistribFunc);
	DiscrVal->Text = System::Convert::ToString(Dsc);


	int rowCount = 3;
	int columnCount = Variables[0].size();
	for (int i = 0; i < columnCount; i++)
	{
		ProbabilityTable->Columns->Add("Column" + i, "Column " + (i + 1));
	}
	for (int i = 0; i < rowCount; i++)
	{
		ProbabilityTable->Rows->Add();
	}
	std::vector<double> ver(Variables[0].size());
	for (int i = 0; i < ver.size(); i++) {
		ver[i] = Probability(M, N, r, Variables[0][i]);
	}
	int sum = 0;
	std::vector<double> dif(ver.size());
	for (int i = 0; i < Variables[1].size(); i++) {
		sum += Variables[1][i];
	}
	for (int i = 0; i < ver.size(); i++) {
		dif[i] = abs(Variables[1][i] / sum - ver[i]);
	}
	for (int j = 0; j < ver.size(); j++) {
		ProbabilityTable->Rows[0]->Cells[j]->Value = Variables[0][j];
		ProbabilityTable->Rows[1]->Cells[j]->Value = ver[j];
		ProbabilityTable->Rows[2]->Cells[j]->Value = dif[j];
	}
	double MaxDif = 0.0;
	for (int i = 0; i < ver.size(); i++) {
		if (MaxDif < dif[i]) {
			MaxDif = dif[i];
		}
	}

	ProbabilityTable->Visible = true;
	maxDif->Visible = true;
	maxDifVal->Visible = true;
	maxDifVal->Text = System::Convert::ToString(MaxDif);
	FeatureTable->Visible = true;
	Graphics->Visible = true;
	DiscrText->Visible = true;
	DiscrVal->Visible = true;

}
private: System::Void task3_Click(System::Object^ sender, System::EventArgs^ e) {
	TableOfQ->Rows->Clear();
	TableOfQ->Columns->Clear();

	Graphics->Visible = false;
	DiscrText->Visible = false;
	DiscrVal->Visible = false;
	FeatureTable->Visible = false;
	ProbabilityTable->Visible = false;
	maxDif->Visible = false;
	maxDifVal->Visible = false;

	k->Visible = true;
	kVal->Visible = true;
	limits->Visible = true;
	limitsVal->Visible = true;
	alpha->Visible = true;
	alphaVal->Visible = true;

	int M = Convert::ToInt32(MValue->Text);
	int N = Convert::ToInt32(NValue->Text);
	int r = Convert::ToInt32(rValue->Text);
	int numberE = Convert::ToInt32(Svalue->Text);

	int right_boarder = min(M, r);

	int kIntervals = Convert::ToInt32(kVal->Text);
	double alph = Convert::ToDouble(alphaVal->Text);
	String^ str = limitsVal->Text;
	str = Convert::ToString(str);
	cli::array<String^>^ zVals = str->Split(' ');

	std::vector<double> z;
	std::vector<double> q(kIntervals);
	z.push_back(-1);
	for (int i = 0; i < kIntervals -1; i++) {
		z.push_back(Convert::ToDouble(zVals[i]));
	}
	//z.push_back(right_boarder + 1);
	for (int i = 0; i < kIntervals; i++) {
		q[i] = 0;
	}

	q = Q(z, Variables[0], M, N, r);

	int rowCount = 1;
	int columnCount = q.size();
	for (int i = 0; i < columnCount; i++)
	{
		TableOfQ->Columns->Add(Convert::ToString(i), "q" + Convert::ToString(i));
	}
	for (int i = 0; i < rowCount; i++)
	{
		TableOfQ->Rows->Add();
	}
	for (int j = 0; j < q.size(); j++) {
		TableOfQ->Rows[0]->Cells[j]->Value = q[j];
	}
	TableOfQ->Visible = true;

	FVal->Text= System::Convert::ToString(DistributionFunction(q, z, Variables[2]));

	int ok = 0;
	int not_ok = 0;
	double Val = 0.0;
	for (int i = 0; i < 100; i++) {
		Variables = RandomVariable(M, N, r, numberE);
		Val = DistributionFunction(q, z, Variables[2]);
		if (Val < 1-alph) {
			ok++;
		}
		else {
			not_ok++;
		}
	}
	okayVal->Text = System::Convert::ToString(ok);
	notOkayVal->Text = System::Convert::ToString(not_ok);

	F->Visible = true;
	FVal->Visible = true;
	okay->Visible = true;
	okayVal->Visible = true;
	notOkay->Visible = true;
	notOkayVal->Visible = true;
}

};
}
