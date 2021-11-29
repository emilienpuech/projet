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

		//dgv_enr_CellContentClick
	protected:











	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;







































	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btn_insert;
	private: System::Windows::Forms::TextBox^ txt_prenom;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_id;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TabPage^ tabPage8;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::DataGridView^ dataGridView5;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button21;












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
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->SuspendLayout();
			// 
			// tabPage7
			// 
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(499, 304);
			this->tabPage7->TabIndex = 6;
			// 
			// tabPage6
			// 
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(499, 304);
			this->tabPage6->TabIndex = 5;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label19);
			this->tabPage5->Controls->Add(this->label18);
			this->tabPage5->Controls->Add(this->label17);
			this->tabPage5->Controls->Add(this->dataGridView4);
			this->tabPage5->Controls->Add(this->button14);
			this->tabPage5->Controls->Add(this->button15);
			this->tabPage5->Controls->Add(this->textBox10);
			this->tabPage5->Controls->Add(this->textBox11);
			this->tabPage5->Controls->Add(this->textBox12);
			this->tabPage5->Controls->Add(this->button16);
			this->tabPage5->Controls->Add(this->button17);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Margin = System::Windows::Forms::Padding(2);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(2);
			this->tabPage5->Size = System::Drawing::Size(499, 304);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Stats";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(233, 226);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(101, 13);
			this->label19->TabIndex = 20;
			this->label19->Text = L"Pourcentage remise";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(278, 197);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(56, 13);
			this->label18->TabIndex = 19;
			this->label18->Text = L"ID Remise";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(269, 171);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(65, 13);
			this->label17->TabIndex = 18;
			this->label17->Text = L"ID Paiement";
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(8, 0);
			this->dataGridView4->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(236, 78);
			this->dataGridView4->TabIndex = 17;
			this->dataGridView4->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView4_CellContentClick);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(17, 168);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 129);
			this->button14->TabIndex = 16;
			this->button14->Text = L"Load DB";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(94, 261);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 37);
			this->button15->TabIndex = 10;
			this->button15->Text = L"INS";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(340, 168);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(149, 20);
			this->textBox10->TabIndex = 15;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(340, 194);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(149, 20);
			this->textBox11->TabIndex = 14;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(340, 223);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(149, 20);
			this->textBox12->TabIndex = 13;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(94, 214);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 37);
			this->button16->TabIndex = 12;
			this->button16->Text = L"UPD";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(94, 168);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 37);
			this->button17->TabIndex = 11;
			this->button17->Text = L"DEL";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label16);
			this->tabPage4->Controls->Add(this->label15);
			this->tabPage4->Controls->Add(this->label14);
			this->tabPage4->Controls->Add(this->label13);
			this->tabPage4->Controls->Add(this->label12);
			this->tabPage4->Controls->Add(this->textBox17);
			this->tabPage4->Controls->Add(this->textBox16);
			this->tabPage4->Controls->Add(this->dataGridView3);
			this->tabPage4->Controls->Add(this->button10);
			this->tabPage4->Controls->Add(this->button11);
			this->tabPage4->Controls->Add(this->textBox7);
			this->tabPage4->Controls->Add(this->textBox8);
			this->tabPage4->Controls->Add(this->textBox9);
			this->tabPage4->Controls->Add(this->button12);
			this->tabPage4->Controls->Add(this->button13);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Margin = System::Windows::Forms::Padding(2);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(2);
			this->tabPage4->Size = System::Drawing::Size(499, 304);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Stock";
			this->tabPage4->UseVisualStyleBackColor = true;
			this->tabPage4->Click += gcnew System::EventHandler(this, &MyForm::tabPage4_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(218, 282);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(125, 13);
			this->label16->TabIndex = 24;
			this->label16->Text = L"Seuil réaprovisionnement";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(281, 256);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(60, 13);
			this->label15->TabIndex = 23;
			this->label15->Text = L"Prix Produit";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(252, 230);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(91, 13);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Quantité en stock";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(313, 204);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(29, 13);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Nom";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(287, 178);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 13);
			this->label12->TabIndex = 20;
			this->label12->Text = L"ID Produit";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(348, 279);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(140, 20);
			this->textBox17->TabIndex = 19;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(347, 253);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(140, 20);
			this->textBox16->TabIndex = 18;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(8, 3);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(480, 160);
			this->dataGridView3->TabIndex = 17;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellContentClick);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(16, 168);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 129);
			this->button10->TabIndex = 16;
			this->button10->Text = L"Load DB";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(93, 260);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 37);
			this->button11->TabIndex = 10;
			this->button11->Text = L"INS";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(347, 175);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(141, 20);
			this->textBox7->TabIndex = 15;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(348, 201);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(141, 20);
			this->textBox8->TabIndex = 14;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(349, 227);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(140, 20);
			this->textBox9->TabIndex = 13;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(93, 214);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 37);
			this->button12->TabIndex = 12;
			this->button12->Text = L"UPD";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(93, 168);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 37);
			this->button13->TabIndex = 11;
			this->button13->Text = L"DEL";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->textBox4);
			this->tabPage3->Controls->Add(this->textBox5);
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Margin = System::Windows::Forms::Padding(2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(2);
			this->tabPage3->Size = System::Drawing::Size(499, 304);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Commande";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(261, 234);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(74, 13);
			this->label11->TabIndex = 20;
			this->label11->Text = L"ID Commande";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(261, 204);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 13);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Date Emission";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(260, 178);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Date Livraison";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(4, 6);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(475, 157);
			this->dataGridView2->TabIndex = 17;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(7, 168);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 129);
			this->button6->TabIndex = 16;
			this->button6->Text = L"Load DB";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(84, 261);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 37);
			this->button7->TabIndex = 10;
			this->button7->Text = L"INS";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(341, 175);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(138, 20);
			this->textBox4->TabIndex = 15;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(341, 201);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(138, 20);
			this->textBox5->TabIndex = 14;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(341, 227);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(138, 20);
			this->textBox6->TabIndex = 13;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(84, 214);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 37);
			this->button8->TabIndex = 12;
			this->button8->Text = L"UPD";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(84, 168);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 37);
			this->button9->TabIndex = 11;
			this->button9->Text = L"DEL";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->textBox15);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Controls->Add(this->btn_insert);
			this->tabPage2->Controls->Add(this->txt_prenom);
			this->tabPage2->Controls->Add(this->txt_nom);
			this->tabPage2->Controls->Add(this->txt_id);
			this->tabPage2->Controls->Add(this->btn_update);
			this->tabPage2->Controls->Add(this->btn_delete);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(499, 304);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Personnel";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(201, 254);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(91, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Date d\'embauche";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(249, 228);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Prenom";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(263, 198);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Nom";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(224, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"ID Personnel";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(298, 251);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(181, 20);
			this->textBox15->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 162);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 113);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Load DB";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 4);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(473, 153);
			this->dataGridView1->TabIndex = 8;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// btn_insert
			// 
			this->btn_insert->Location = System::Drawing::Point(84, 254);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(75, 37);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"INS";
			this->btn_insert->UseVisualStyleBackColor = true;
			this->btn_insert->Click += gcnew System::EventHandler(this, &MyForm::btn_insert_Click);
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(298, 169);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(181, 20);
			this->txt_prenom->TabIndex = 7;
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(298, 195);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(181, 20);
			this->txt_nom->TabIndex = 6;
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(298, 225);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(181, 20);
			this->txt_id->TabIndex = 5;
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(84, 208);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(75, 37);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"UPD";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &MyForm::btn_update_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(84, 162);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(75, 37);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"DEL";
			this->btn_delete->UseVisualStyleBackColor = true;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox14);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->dgv_enr);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(499, 304);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Client";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(137, 258);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Date de naissance";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(161, 229);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Prenom Client";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(182, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 19;
			this->label2->Text = L"ID Client";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(235, 251);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(254, 20);
			this->textBox14->TabIndex = 18;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(235, 166);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(254, 20);
			this->textBox1->TabIndex = 15;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(235, 192);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(254, 20);
			this->textBox2->TabIndex = 14;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(235, 222);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(254, 20);
			this->textBox3->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(175, 199);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Nom Client";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(7, 157);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(71, 37);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Load DB";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(7, 251);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 37);
			this->button3->TabIndex = 10;
			this->button3->Text = L"INS";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(7, 200);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 37);
			this->button4->TabIndex = 12;
			this->button4->Text = L"UPD";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(84, 157);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 37);
			this->button5->TabIndex = 11;
			this->button5->Text = L"DEL";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(7, 7);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 82;
			this->dgv_enr->Size = System::Drawing::Size(472, 150);
			this->dgv_enr->TabIndex = 0;
			this->dgv_enr->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dgv_enr_CellContentClick);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Location = System::Drawing::Point(1, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(507, 330);
			this->tabControl1->TabIndex = 8;
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->label23);
			this->tabPage8->Controls->Add(this->label22);
			this->tabPage8->Controls->Add(this->label21);
			this->tabPage8->Controls->Add(this->label20);
			this->tabPage8->Controls->Add(this->textBox21);
			this->tabPage8->Controls->Add(this->textBox18);
			this->tabPage8->Controls->Add(this->textBox19);
			this->tabPage8->Controls->Add(this->textBox20);
			this->tabPage8->Controls->Add(this->dataGridView5);
			this->tabPage8->Controls->Add(this->button18);
			this->tabPage8->Controls->Add(this->button19);
			this->tabPage8->Controls->Add(this->button20);
			this->tabPage8->Controls->Add(this->button21);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(499, 304);
			this->tabPage8->TabIndex = 7;
			this->tabPage8->Text = L"Paiement";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(288, 258);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(46, 13);
			this->label23->TabIndex = 30;
			this->label23->Text = L"Montant";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(257, 228);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(77, 13);
			this->label22->TabIndex = 29;
			this->label22->Text = L"Date Paiement";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(237, 199);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(97, 13);
			this->label21->TabIndex = 28;
			this->label21->Text = L"Moyen Paiement";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(269, 170);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(65, 13);
			this->label20->TabIndex = 27;
			this->label20->Text = L"ID Paiement";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(340, 251);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(149, 20);
			this->textBox21->TabIndex = 26;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(340, 170);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(149, 20);
			this->textBox18->TabIndex = 25;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(340, 196);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(149, 20);
			this->textBox19->TabIndex = 24;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(340, 225);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(149, 20);
			this->textBox20->TabIndex = 23;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(6, 2);
			this->dataGridView5->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->Size = System::Drawing::Size(236, 78);
			this->dataGridView5->TabIndex = 22;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(15, 170);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 129);
			this->button18->TabIndex = 21;
			this->button18->Text = L"Load DB";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(92, 263);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 37);
			this->button19->TabIndex = 18;
			this->button19->Text = L"INS";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(92, 216);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 37);
			this->button20->TabIndex = 20;
			this->button20->Text = L"UPD";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(92, 170);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 37);
			this->button21->TabIndex = 19;
			this->button21->Text = L"DEL";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(506, 332);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
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
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
	private: System::Void dgv_enr_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void dataGridView4_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};





}