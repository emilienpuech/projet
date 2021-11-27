
//MyForm.H*********************************************************************************************
#pragma once
#include "CLservices.h"

namespace P6new {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_enr;
		   //dgv_enr_CellContentClick
	protected:


	private: System::Windows::Forms::Button^ btn_insert;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::TextBox^ txt_id;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_prenom;



	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::TextBox^ textBox13;



	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(14, 14);
			this->dgv_enr->Margin = System::Windows::Forms::Padding(6);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 82;
			this->dgv_enr->Size = System::Drawing::Size(944, 288);
			this->dgv_enr->TabIndex = 0;
			this->dgv_enr->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dgv_enr_CellContentClick);
			// 
			// btn_insert
			// 
			this->btn_insert->Location = System::Drawing::Point(168, 488);
			this->btn_insert->Margin = System::Windows::Forms::Padding(6);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(150, 71);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"INS";
			this->btn_insert->UseVisualStyleBackColor = true;
			this->btn_insert->Click += gcnew System::EventHandler(this, &MyForm::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(168, 312);
			this->btn_delete->Margin = System::Windows::Forms::Padding(6);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(150, 71);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"DEL";
			this->btn_delete->UseVisualStyleBackColor = true;
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(168, 400);
			this->btn_update->Margin = System::Windows::Forms::Padding(6);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(150, 71);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"UPD";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &MyForm::btn_update_Click);
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(344, 500);
			this->txt_id->Margin = System::Windows::Forms::Padding(6);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(610, 31);
			this->txt_id->TabIndex = 5;
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(344, 417);
			this->txt_nom->Margin = System::Windows::Forms::Padding(6);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(610, 31);
			this->txt_nom->TabIndex = 6;
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(344, 325);
			this->txt_prenom->Margin = System::Windows::Forms::Padding(6);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(610, 31);
			this->txt_prenom->TabIndex = 7;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Location = System::Drawing::Point(2, 2);
			this->tabControl1->Margin = System::Windows::Forms::Padding(6);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1014, 635);
			this->tabControl1->TabIndex = 8;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox13);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->dgv_enr);
			this->tabPage1->Location = System::Drawing::Point(8, 39);
			this->tabPage1->Margin = System::Windows::Forms::Padding(6);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(6);
			this->tabPage1->Size = System::Drawing::Size(998, 588);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Client";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(370, 366);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(587, 31);
			this->textBox13->TabIndex = 17;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox13_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(34, 306);
			this->button2->Margin = System::Windows::Forms::Padding(6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 248);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Load DB";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(188, 483);
			this->button3->Margin = System::Windows::Forms::Padding(6);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 71);
			this->button3->TabIndex = 10;
			this->button3->Text = L"INS";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(364, 319);
			this->textBox1->Margin = System::Windows::Forms::Padding(6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(610, 31);
			this->textBox1->TabIndex = 15;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(188, 394);
			this->button4->Margin = System::Windows::Forms::Padding(6);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(150, 71);
			this->button4->TabIndex = 12;
			this->button4->Text = L"UPD";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(364, 412);
			this->textBox2->Margin = System::Windows::Forms::Padding(6);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(610, 31);
			this->textBox2->TabIndex = 14;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(188, 306);
			this->button5->Margin = System::Windows::Forms::Padding(6);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 71);
			this->button5->TabIndex = 11;
			this->button5->Text = L"DEL";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(364, 494);
			this->textBox3->Margin = System::Windows::Forms::Padding(6);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(610, 31);
			this->textBox3->TabIndex = 13;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Controls->Add(this->btn_insert);
			this->tabPage2->Controls->Add(this->txt_prenom);
			this->tabPage2->Controls->Add(this->btn_update);
			this->tabPage2->Controls->Add(this->txt_nom);
			this->tabPage2->Controls->Add(this->btn_delete);
			this->tabPage2->Controls->Add(this->txt_id);
			this->tabPage2->Location = System::Drawing::Point(8, 39);
			this->tabPage2->Margin = System::Windows::Forms::Padding(6);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(6);
			this->tabPage2->Size = System::Drawing::Size(998, 588);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Personnel";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(14, 312);
			this->button1->Margin = System::Windows::Forms::Padding(6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 248);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Load DB";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(14, 14);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->Size = System::Drawing::Size(944, 288);
			this->dataGridView1->TabIndex = 8;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->textBox4);
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->textBox5);
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Location = System::Drawing::Point(8, 39);
			this->tabPage3->Margin = System::Windows::Forms::Padding(6);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(6);
			this->tabPage3->Size = System::Drawing::Size(998, 588);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Commande";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(14, 14);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(6);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 82;
			this->dataGridView2->Size = System::Drawing::Size(944, 288);
			this->dataGridView2->TabIndex = 17;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(14, 323);
			this->button6->Margin = System::Windows::Forms::Padding(6);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(150, 248);
			this->button6->TabIndex = 16;
			this->button6->Text = L"Load DB";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(168, 502);
			this->button7->Margin = System::Windows::Forms::Padding(6);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(150, 71);
			this->button7->TabIndex = 10;
			this->button7->Text = L"INS";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(344, 337);
			this->textBox4->Margin = System::Windows::Forms::Padding(6);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(610, 31);
			this->textBox4->TabIndex = 15;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(168, 412);
			this->button8->Margin = System::Windows::Forms::Padding(6);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(150, 71);
			this->button8->TabIndex = 12;
			this->button8->Text = L"UPD";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(344, 429);
			this->textBox5->Margin = System::Windows::Forms::Padding(6);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(610, 31);
			this->textBox5->TabIndex = 14;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(168, 323);
			this->button9->Margin = System::Windows::Forms::Padding(6);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(150, 71);
			this->button9->TabIndex = 11;
			this->button9->Text = L"DEL";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(344, 512);
			this->textBox6->Margin = System::Windows::Forms::Padding(6);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(610, 31);
			this->textBox6->TabIndex = 13;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->dataGridView3);
			this->tabPage4->Controls->Add(this->button10);
			this->tabPage4->Controls->Add(this->button11);
			this->tabPage4->Controls->Add(this->textBox7);
			this->tabPage4->Controls->Add(this->button12);
			this->tabPage4->Controls->Add(this->textBox8);
			this->tabPage4->Controls->Add(this->button13);
			this->tabPage4->Controls->Add(this->textBox9);
			this->tabPage4->Location = System::Drawing::Point(8, 39);
			this->tabPage4->Margin = System::Windows::Forms::Padding(6);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(6);
			this->tabPage4->Size = System::Drawing::Size(998, 588);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Stock";
			this->tabPage4->UseVisualStyleBackColor = true;
			this->tabPage4->Click += gcnew System::EventHandler(this, &MyForm::tabPage4_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(14, 14);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(6);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 82;
			this->dataGridView3->Size = System::Drawing::Size(944, 288);
			this->dataGridView3->TabIndex = 17;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(32, 323);
			this->button10->Margin = System::Windows::Forms::Padding(6);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(150, 248);
			this->button10->TabIndex = 16;
			this->button10->Text = L"Load DB";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(186, 500);
			this->button11->Margin = System::Windows::Forms::Padding(6);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(150, 71);
			this->button11->TabIndex = 10;
			this->button11->Text = L"INS";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(362, 337);
			this->textBox7->Margin = System::Windows::Forms::Padding(6);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(610, 31);
			this->textBox7->TabIndex = 15;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(186, 412);
			this->button12->Margin = System::Windows::Forms::Padding(6);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(150, 71);
			this->button12->TabIndex = 12;
			this->button12->Text = L"UPD";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(362, 429);
			this->textBox8->Margin = System::Windows::Forms::Padding(6);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(610, 31);
			this->textBox8->TabIndex = 14;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(186, 323);
			this->button13->Margin = System::Windows::Forms::Padding(6);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(150, 71);
			this->button13->TabIndex = 11;
			this->button13->Text = L"DEL";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(362, 512);
			this->textBox9->Margin = System::Windows::Forms::Padding(6);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(610, 31);
			this->textBox9->TabIndex = 13;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->dataGridView4);
			this->tabPage5->Controls->Add(this->button14);
			this->tabPage5->Controls->Add(this->button15);
			this->tabPage5->Controls->Add(this->textBox10);
			this->tabPage5->Controls->Add(this->button16);
			this->tabPage5->Controls->Add(this->textBox11);
			this->tabPage5->Controls->Add(this->button17);
			this->tabPage5->Controls->Add(this->textBox12);
			this->tabPage5->Location = System::Drawing::Point(8, 39);
			this->tabPage5->Margin = System::Windows::Forms::Padding(6);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(6);
			this->tabPage5->Size = System::Drawing::Size(998, 588);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Stats";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(14, 14);
			this->dataGridView4->Margin = System::Windows::Forms::Padding(6);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 82;
			this->dataGridView4->Size = System::Drawing::Size(944, 288);
			this->dataGridView4->TabIndex = 17;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(34, 323);
			this->button14->Margin = System::Windows::Forms::Padding(6);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(150, 248);
			this->button14->TabIndex = 16;
			this->button14->Text = L"Load DB";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(188, 502);
			this->button15->Margin = System::Windows::Forms::Padding(6);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(150, 71);
			this->button15->TabIndex = 10;
			this->button15->Text = L"INS";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(364, 337);
			this->textBox10->Margin = System::Windows::Forms::Padding(6);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(610, 31);
			this->textBox10->TabIndex = 15;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(188, 412);
			this->button16->Margin = System::Windows::Forms::Padding(6);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(150, 71);
			this->button16->TabIndex = 12;
			this->button16->Text = L"UPD";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(364, 429);
			this->textBox11->Margin = System::Windows::Forms::Padding(6);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(610, 31);
			this->textBox11->TabIndex = 14;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(188, 323);
			this->button17->Margin = System::Windows::Forms::Padding(6);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(150, 71);
			this->button17->TabIndex = 11;
			this->button17->Text = L"DEL";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(364, 512);
			this->textBox12->Margin = System::Windows::Forms::Padding(6);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(610, 31);
			this->textBox12->TabIndex = 13;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1012, 638);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


		// private méthode pour nos evenement




	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Refresh();
		this->oDs = this->oSvc->select_tout_nos_client("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}







	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
	}




	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//this->oSvc->ajouterUnePersonne(this->txt_nom->Text, this->txt_prenom->Text);
	}




	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->oSvc = ;
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void tabPage4_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	private: System::Void dgv_enr_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}


// select client
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Refresh();
		this->oDs = this->oSvc->select_tout_nos_client("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
		// code test de string connection

	}

// del client
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->del_un_client(this->oSvc->convert_string_to_int(this->textBox1->Text));

	}


//upd client
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->upd_un_client(this->oSvc->convert_string_to_int(this->textBox1->Text),this->textBox13->Text, this->textBox2->Text, this->textBox3->Text);
			
	}
// ins client
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->ins_un_client(this->textBox2->Text, this->textBox13->Text, this->textBox3->Text);
	}
	/*
		   1 id
		   2 nom
		   13 prenom
		   3 date
	*/


	

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}   

	private: System::Void textBox13_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}


};





}
