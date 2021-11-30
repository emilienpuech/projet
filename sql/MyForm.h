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
	private: System::Windows::Forms::TabPage^ tabPage8;
	private: System::Windows::Forms::Button^ Delete_Paiement;
	private: System::Windows::Forms::Button^ UPDATE_Paiement;
	private: System::Windows::Forms::Button^ Insert_Paiement;
	private: System::Windows::Forms::Button^ Load_BDD_Paiement;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::DataGridView^ dataGridViewPaiement;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Button^ Delete_Stat;
	private: System::Windows::Forms::Button^ Update_Stat;
	private: System::Windows::Forms::Button^ Insert_Stat;
	private: System::Windows::Forms::Button^ Load_Bdd_Stat;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::DataGridView^ dataGridViewStat;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Button^ Delete_Stock;
	private: System::Windows::Forms::Button^ Update_Stock;
	private: System::Windows::Forms::Button^ Insert_Stock;
	private: System::Windows::Forms::Button^ Load_Bdd_Stock;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ ID_Produit;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::DataGridView^ dataGridViewStock;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ DELETE_Commande;
	private: System::Windows::Forms::Button^ Update_Commande;
	private: System::Windows::Forms::Button^ Insert_Commande;
	private: System::Windows::Forms::Button^ Load_Bdd_Commande;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DataGridView^ dataGridViewCommande;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ DELETE_Personnel;
	private: System::Windows::Forms::Button^ Update_Personnel;
	private: System::Windows::Forms::Button^ Insert_Personnel;
	private: System::Windows::Forms::Button^ Load_BDD_Personnel;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ txt_prenom;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_id;
	private: System::Windows::Forms::DataGridView^ dataGridViewPersonnel;
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
	private: System::Windows::Forms::DataGridView^ DataGrindViewClient;
	private: System::Windows::Forms::TabControl^ tabControl1;































































































































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
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridViewPaiement = (gcnew System::Windows::Forms::DataGridView());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->Load_BDD_Paiement = (gcnew System::Windows::Forms::Button());
			this->Insert_Paiement = (gcnew System::Windows::Forms::Button());
			this->UPDATE_Paiement = (gcnew System::Windows::Forms::Button());
			this->Delete_Paiement = (gcnew System::Windows::Forms::Button());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewStat = (gcnew System::Windows::Forms::DataGridView());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->Load_Bdd_Stat = (gcnew System::Windows::Forms::Button());
			this->Insert_Stat = (gcnew System::Windows::Forms::Button());
			this->Update_Stat = (gcnew System::Windows::Forms::Button());
			this->Delete_Stat = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->ID_Produit = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewStock = (gcnew System::Windows::Forms::DataGridView());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Load_Bdd_Stock = (gcnew System::Windows::Forms::Button());
			this->Insert_Stock = (gcnew System::Windows::Forms::Button());
			this->Update_Stock = (gcnew System::Windows::Forms::Button());
			this->Delete_Stock = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewCommande = (gcnew System::Windows::Forms::DataGridView());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Load_Bdd_Commande = (gcnew System::Windows::Forms::Button());
			this->Insert_Commande = (gcnew System::Windows::Forms::Button());
			this->Update_Commande = (gcnew System::Windows::Forms::Button());
			this->DELETE_Commande = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewPersonnel = (gcnew System::Windows::Forms::DataGridView());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Load_BDD_Personnel = (gcnew System::Windows::Forms::Button());
			this->Insert_Personnel = (gcnew System::Windows::Forms::Button());
			this->Update_Personnel = (gcnew System::Windows::Forms::Button());
			this->DELETE_Personnel = (gcnew System::Windows::Forms::Button());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->DataGrindViewClient = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPaiement))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStat))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStock))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCommande))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPersonnel))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGrindViewClient))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->Delete_Paiement);
			this->tabPage8->Controls->Add(this->UPDATE_Paiement);
			this->tabPage8->Controls->Add(this->Insert_Paiement);
			this->tabPage8->Controls->Add(this->Load_BDD_Paiement);
			this->tabPage8->Controls->Add(this->label23);
			this->tabPage8->Controls->Add(this->label22);
			this->tabPage8->Controls->Add(this->label21);
			this->tabPage8->Controls->Add(this->label20);
			this->tabPage8->Controls->Add(this->textBox21);
			this->tabPage8->Controls->Add(this->textBox18);
			this->tabPage8->Controls->Add(this->textBox19);
			this->tabPage8->Controls->Add(this->textBox20);
			this->tabPage8->Controls->Add(this->dataGridViewPaiement);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(499, 304);
			this->tabPage8->TabIndex = 7;
			this->tabPage8->Text = L"Paiement";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// dataGridViewPaiement
			// 
			this->dataGridViewPaiement->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewPaiement->Location = System::Drawing::Point(15, 2);
			this->dataGridViewPaiement->Margin = System::Windows::Forms::Padding(2);
			this->dataGridViewPaiement->Name = L"dataGridViewPaiement";
			this->dataGridViewPaiement->RowHeadersWidth = 82;
			this->dataGridViewPaiement->Size = System::Drawing::Size(471, 163);
			this->dataGridViewPaiement->TabIndex = 22;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(340, 225);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(149, 20);
			this->textBox20->TabIndex = 23;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(340, 196);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(149, 20);
			this->textBox19->TabIndex = 24;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(340, 170);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(149, 20);
			this->textBox18->TabIndex = 25;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(340, 251);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(149, 20);
			this->textBox21->TabIndex = 26;
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
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(237, 199);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(86, 13);
			this->label21->TabIndex = 28;
			this->label21->Text = L"Moyen Paiement";
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
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(288, 258);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(46, 13);
			this->label23->TabIndex = 30;
			this->label23->Text = L"Montant";
			// 
			// Load_BDD_Paiement
			// 
			this->Load_BDD_Paiement->Location = System::Drawing::Point(15, 170);
			this->Load_BDD_Paiement->Name = L"Load_BDD_Paiement";
			this->Load_BDD_Paiement->Size = System::Drawing::Size(72, 127);
			this->Load_BDD_Paiement->TabIndex = 31;
			this->Load_BDD_Paiement->Text = L"LOAD BDD";
			this->Load_BDD_Paiement->UseVisualStyleBackColor = true;
			// 
			// Insert_Paiement
			// 
			this->Insert_Paiement->Location = System::Drawing::Point(94, 170);
			this->Insert_Paiement->Name = L"Insert_Paiement";
			this->Insert_Paiement->Size = System::Drawing::Size(89, 38);
			this->Insert_Paiement->TabIndex = 32;
			this->Insert_Paiement->Text = L"INSERT";
			this->Insert_Paiement->UseVisualStyleBackColor = true;
			// 
			// UPDATE_Paiement
			// 
			this->UPDATE_Paiement->Location = System::Drawing::Point(94, 215);
			this->UPDATE_Paiement->Name = L"UPDATE_Paiement";
			this->UPDATE_Paiement->Size = System::Drawing::Size(89, 38);
			this->UPDATE_Paiement->TabIndex = 33;
			this->UPDATE_Paiement->Text = L"UPDATE";
			this->UPDATE_Paiement->UseVisualStyleBackColor = true;
			// 
			// Delete_Paiement
			// 
			this->Delete_Paiement->Location = System::Drawing::Point(94, 259);
			this->Delete_Paiement->Name = L"Delete_Paiement";
			this->Delete_Paiement->Size = System::Drawing::Size(89, 38);
			this->Delete_Paiement->TabIndex = 34;
			this->Delete_Paiement->Text = L"DELETE";
			this->Delete_Paiement->UseVisualStyleBackColor = true;
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
			this->tabPage5->Controls->Add(this->Delete_Stat);
			this->tabPage5->Controls->Add(this->Update_Stat);
			this->tabPage5->Controls->Add(this->Insert_Stat);
			this->tabPage5->Controls->Add(this->Load_Bdd_Stat);
			this->tabPage5->Controls->Add(this->label19);
			this->tabPage5->Controls->Add(this->label18);
			this->tabPage5->Controls->Add(this->label17);
			this->tabPage5->Controls->Add(this->dataGridViewStat);
			this->tabPage5->Controls->Add(this->textBox10);
			this->tabPage5->Controls->Add(this->textBox11);
			this->tabPage5->Controls->Add(this->textBox12);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Margin = System::Windows::Forms::Padding(2);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(2);
			this->tabPage5->Size = System::Drawing::Size(499, 304);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Stats";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(340, 223);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(149, 20);
			this->textBox12->TabIndex = 13;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(340, 194);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(149, 20);
			this->textBox11->TabIndex = 14;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(340, 168);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(149, 20);
			this->textBox10->TabIndex = 15;
			// 
			// dataGridViewStat
			// 
			this->dataGridViewStat->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewStat->Location = System::Drawing::Point(9, 0);
			this->dataGridViewStat->Margin = System::Windows::Forms::Padding(2);
			this->dataGridViewStat->Name = L"dataGridViewStat";
			this->dataGridViewStat->RowHeadersWidth = 82;
			this->dataGridViewStat->Size = System::Drawing::Size(481, 163);
			this->dataGridViewStat->TabIndex = 17;
			this->dataGridViewStat->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView4_CellContentClick);
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
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(278, 197);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(56, 13);
			this->label18->TabIndex = 19;
			this->label18->Text = L"ID Remise";
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
			// Load_Bdd_Stat
			// 
			this->Load_Bdd_Stat->Location = System::Drawing::Point(8, 171);
			this->Load_Bdd_Stat->Name = L"Load_Bdd_Stat";
			this->Load_Bdd_Stat->Size = System::Drawing::Size(76, 126);
			this->Load_Bdd_Stat->TabIndex = 21;
			this->Load_Bdd_Stat->Text = L"LOAD BDD";
			this->Load_Bdd_Stat->UseVisualStyleBackColor = true;
			// 
			// Insert_Stat
			// 
			this->Insert_Stat->Location = System::Drawing::Point(109, 171);
			this->Insert_Stat->Name = L"Insert_Stat";
			this->Insert_Stat->Size = System::Drawing::Size(82, 39);
			this->Insert_Stat->TabIndex = 22;
			this->Insert_Stat->Text = L"INSERT";
			this->Insert_Stat->UseVisualStyleBackColor = true;
			// 
			// Update_Stat
			// 
			this->Update_Stat->Location = System::Drawing::Point(109, 215);
			this->Update_Stat->Name = L"Update_Stat";
			this->Update_Stat->Size = System::Drawing::Size(82, 37);
			this->Update_Stat->TabIndex = 23;
			this->Update_Stat->Text = L"UPDATE";
			this->Update_Stat->UseVisualStyleBackColor = true;
			// 
			// Delete_Stat
			// 
			this->Delete_Stat->Location = System::Drawing::Point(109, 259);
			this->Delete_Stat->Name = L"Delete_Stat";
			this->Delete_Stat->Size = System::Drawing::Size(82, 38);
			this->Delete_Stat->TabIndex = 24;
			this->Delete_Stat->Text = L"DELETE";
			this->Delete_Stat->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->Delete_Stock);
			this->tabPage4->Controls->Add(this->Update_Stock);
			this->tabPage4->Controls->Add(this->Insert_Stock);
			this->tabPage4->Controls->Add(this->Load_Bdd_Stock);
			this->tabPage4->Controls->Add(this->label16);
			this->tabPage4->Controls->Add(this->label15);
			this->tabPage4->Controls->Add(this->label14);
			this->tabPage4->Controls->Add(this->label13);
			this->tabPage4->Controls->Add(this->label12);
			this->tabPage4->Controls->Add(this->textBox17);
			this->tabPage4->Controls->Add(this->textBox16);
			this->tabPage4->Controls->Add(this->ID_Produit);
			this->tabPage4->Controls->Add(this->textBox8);
			this->tabPage4->Controls->Add(this->textBox9);
			this->tabPage4->Controls->Add(this->dataGridViewStock);
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
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(349, 227);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(140, 20);
			this->textBox9->TabIndex = 13;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(348, 201);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(141, 20);
			this->textBox8->TabIndex = 14;
			// 
			// ID_Produit
			// 
			this->ID_Produit->Location = System::Drawing::Point(347, 175);
			this->ID_Produit->Name = L"ID_Produit";
			this->ID_Produit->Size = System::Drawing::Size(141, 20);
			this->ID_Produit->TabIndex = 15;
			// 
			// dataGridViewStock
			// 
			this->dataGridViewStock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewStock->Location = System::Drawing::Point(8, 3);
			this->dataGridViewStock->Margin = System::Windows::Forms::Padding(2);
			this->dataGridViewStock->Name = L"dataGridViewStock";
			this->dataGridViewStock->RowHeadersWidth = 82;
			this->dataGridViewStock->Size = System::Drawing::Size(480, 160);
			this->dataGridViewStock->TabIndex = 17;
			this->dataGridViewStock->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellContentClick);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(347, 253);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(140, 20);
			this->textBox16->TabIndex = 18;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(348, 279);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(140, 20);
			this->textBox17->TabIndex = 19;
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
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(313, 204);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(29, 13);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Nom";
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
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(281, 256);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(60, 13);
			this->label15->TabIndex = 23;
			this->label15->Text = L"Prix Produit";
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
			// Load_Bdd_Stock
			// 
			this->Load_Bdd_Stock->Location = System::Drawing::Point(8, 178);
			this->Load_Bdd_Stock->Name = L"Load_Bdd_Stock";
			this->Load_Bdd_Stock->Size = System::Drawing::Size(71, 117);
			this->Load_Bdd_Stock->TabIndex = 25;
			this->Load_Bdd_Stock->Text = L"LOAD BDD";
			this->Load_Bdd_Stock->UseVisualStyleBackColor = true;
			// 
			// Insert_Stock
			// 
			this->Insert_Stock->Location = System::Drawing::Point(97, 175);
			this->Insert_Stock->Name = L"Insert_Stock";
			this->Insert_Stock->Size = System::Drawing::Size(85, 39);
			this->Insert_Stock->TabIndex = 26;
			this->Insert_Stock->Text = L"INSERT";
			this->Insert_Stock->UseVisualStyleBackColor = true;
			// 
			// Update_Stock
			// 
			this->Update_Stock->Location = System::Drawing::Point(97, 215);
			this->Update_Stock->Name = L"Update_Stock";
			this->Update_Stock->Size = System::Drawing::Size(85, 42);
			this->Update_Stock->TabIndex = 27;
			this->Update_Stock->Text = L"UPDATE";
			this->Update_Stock->UseVisualStyleBackColor = true;
			// 
			// Delete_Stock
			// 
			this->Delete_Stock->Location = System::Drawing::Point(97, 263);
			this->Delete_Stock->Name = L"Delete_Stock";
			this->Delete_Stock->Size = System::Drawing::Size(85, 36);
			this->Delete_Stock->TabIndex = 28;
			this->Delete_Stock->Text = L"DELETE";
			this->Delete_Stock->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->DELETE_Commande);
			this->tabPage3->Controls->Add(this->Update_Commande);
			this->tabPage3->Controls->Add(this->Insert_Commande);
			this->tabPage3->Controls->Add(this->Load_Bdd_Commande);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->dataGridViewCommande);
			this->tabPage3->Controls->Add(this->textBox4);
			this->tabPage3->Controls->Add(this->textBox5);
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Margin = System::Windows::Forms::Padding(2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(2);
			this->tabPage3->Size = System::Drawing::Size(499, 304);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Commande";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(341, 227);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(138, 20);
			this->textBox6->TabIndex = 13;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(341, 201);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(138, 20);
			this->textBox5->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(341, 175);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(138, 20);
			this->textBox4->TabIndex = 15;
			// 
			// dataGridViewCommande
			// 
			this->dataGridViewCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewCommande->Location = System::Drawing::Point(4, 6);
			this->dataGridViewCommande->Margin = System::Windows::Forms::Padding(2);
			this->dataGridViewCommande->Name = L"dataGridViewCommande";
			this->dataGridViewCommande->RowHeadersWidth = 82;
			this->dataGridViewCommande->Size = System::Drawing::Size(475, 157);
			this->dataGridViewCommande->TabIndex = 17;
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
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(261, 204);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 13);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Date Emission";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(222, 230);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(113, 13);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Reference Commande";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// Load_Bdd_Commande
			// 
			this->Load_Bdd_Commande->Location = System::Drawing::Point(7, 178);
			this->Load_Bdd_Commande->Name = L"Load_Bdd_Commande";
			this->Load_Bdd_Commande->Size = System::Drawing::Size(81, 119);
			this->Load_Bdd_Commande->TabIndex = 21;
			this->Load_Bdd_Commande->Text = L"Load BDD";
			this->Load_Bdd_Commande->UseVisualStyleBackColor = true;
			// 
			// Insert_Commande
			// 
			this->Insert_Commande->Location = System::Drawing::Point(118, 178);
			this->Insert_Commande->Name = L"Insert_Commande";
			this->Insert_Commande->Size = System::Drawing::Size(81, 39);
			this->Insert_Commande->TabIndex = 22;
			this->Insert_Commande->Text = L"INSERT";
			this->Insert_Commande->UseVisualStyleBackColor = true;
			// 
			// Update_Commande
			// 
			this->Update_Commande->Location = System::Drawing::Point(118, 223);
			this->Update_Commande->Name = L"Update_Commande";
			this->Update_Commande->Size = System::Drawing::Size(81, 37);
			this->Update_Commande->TabIndex = 23;
			this->Update_Commande->Text = L"UPDATE";
			this->Update_Commande->UseVisualStyleBackColor = true;
			// 
			// DELETE_Commande
			// 
			this->DELETE_Commande->Location = System::Drawing::Point(118, 267);
			this->DELETE_Commande->Name = L"DELETE_Commande";
			this->DELETE_Commande->Size = System::Drawing::Size(81, 34);
			this->DELETE_Commande->TabIndex = 24;
			this->DELETE_Commande->Text = L"DELETE";
			this->DELETE_Commande->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->DELETE_Personnel);
			this->tabPage2->Controls->Add(this->Update_Personnel);
			this->tabPage2->Controls->Add(this->Insert_Personnel);
			this->tabPage2->Controls->Add(this->Load_BDD_Personnel);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->textBox15);
			this->tabPage2->Controls->Add(this->txt_prenom);
			this->tabPage2->Controls->Add(this->txt_nom);
			this->tabPage2->Controls->Add(this->txt_id);
			this->tabPage2->Controls->Add(this->dataGridViewPersonnel);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(499, 304);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Personnel";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(298, 225);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(181, 20);
			this->txt_id->TabIndex = 5;
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(298, 195);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(181, 20);
			this->txt_nom->TabIndex = 6;
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(298, 169);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(181, 20);
			this->txt_prenom->TabIndex = 7;
			// 
			// dataGridViewPersonnel
			// 
			this->dataGridViewPersonnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewPersonnel->Location = System::Drawing::Point(6, 4);
			this->dataGridViewPersonnel->Margin = System::Windows::Forms::Padding(2);
			this->dataGridViewPersonnel->Name = L"dataGridViewPersonnel";
			this->dataGridViewPersonnel->RowHeadersWidth = 82;
			this->dataGridViewPersonnel->Size = System::Drawing::Size(473, 153);
			this->dataGridViewPersonnel->TabIndex = 8;
			this->dataGridViewPersonnel->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(298, 251);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(181, 20);
			this->textBox15->TabIndex = 10;
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
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(249, 228);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Prenom";
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
			// Load_BDD_Personnel
			// 
			this->Load_BDD_Personnel->Location = System::Drawing::Point(7, 162);
			this->Load_BDD_Personnel->Name = L"Load_BDD_Personnel";
			this->Load_BDD_Personnel->Size = System::Drawing::Size(76, 122);
			this->Load_BDD_Personnel->TabIndex = 15;
			this->Load_BDD_Personnel->Text = L"Load BDD";
			this->Load_BDD_Personnel->UseVisualStyleBackColor = true;
			this->Load_BDD_Personnel->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// Insert_Personnel
			// 
			this->Insert_Personnel->Location = System::Drawing::Point(101, 164);
			this->Insert_Personnel->Name = L"Insert_Personnel";
			this->Insert_Personnel->Size = System::Drawing::Size(89, 36);
			this->Insert_Personnel->TabIndex = 16;
			this->Insert_Personnel->Text = L"INSERT";
			this->Insert_Personnel->UseVisualStyleBackColor = true;
			this->Insert_Personnel->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// Update_Personnel
			// 
			this->Update_Personnel->Location = System::Drawing::Point(101, 210);
			this->Update_Personnel->Name = L"Update_Personnel";
			this->Update_Personnel->Size = System::Drawing::Size(89, 35);
			this->Update_Personnel->TabIndex = 17;
			this->Update_Personnel->Text = L"UPDATE";
			this->Update_Personnel->UseVisualStyleBackColor = true;
			this->Update_Personnel->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_3);
			// 
			// DELETE_Personnel
			// 
			this->DELETE_Personnel->Location = System::Drawing::Point(101, 254);
			this->DELETE_Personnel->Name = L"DELETE_Personnel";
			this->DELETE_Personnel->Size = System::Drawing::Size(89, 30);
			this->DELETE_Personnel->TabIndex = 18;
			this->DELETE_Personnel->Text = L"DELETE";
			this->DELETE_Personnel->UseVisualStyleBackColor = true;
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
			this->tabPage1->Controls->Add(this->DataGrindViewClient);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(499, 304);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Client";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// DataGrindViewClient
			// 
			this->DataGrindViewClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGrindViewClient->Location = System::Drawing::Point(7, 7);
			this->DataGrindViewClient->Name = L"DataGrindViewClient";
			this->DataGrindViewClient->RowHeadersWidth = 82;
			this->DataGrindViewClient->Size = System::Drawing::Size(472, 150);
			this->DataGrindViewClient->TabIndex = 0;
			this->DataGrindViewClient->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dgv_enr_CellContentClick);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(84, 157);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 37);
			this->button5->TabIndex = 11;
			this->button5->Text = L"DEL";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
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
			// button3
			// 
			this->button3->Location = System::Drawing::Point(7, 251);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 37);
			this->button3->TabIndex = 10;
			this->button3->Text = L"INS";
			this->button3->UseVisualStyleBackColor = true;
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
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(235, 222);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(254, 20);
			this->textBox3->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(235, 192);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(254, 20);
			this->textBox2->TabIndex = 14;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(235, 166);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(254, 20);
			this->textBox1->TabIndex = 15;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(235, 251);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(254, 20);
			this->textBox14->TabIndex = 18;
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
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(137, 258);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Date de naissance";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Location = System::Drawing::Point(1, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(507, 330);
			this->tabControl1->TabIndex = 8;
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
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPaiement))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStat))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewStock))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCommande))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPersonnel))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGrindViewClient))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion


		// private méthode pour nos evenement




	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Refresh();
		this->oDs = this->oSvc->select_tout_nos_client("Rsl");
		this->DataGrindViewClient->DataSource = this->oDs;
		this->DataGrindViewClient->DataMember = "Rsl";
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
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_3(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};





}