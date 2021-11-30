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
	private: System::Windows::Forms::DataGridView^ dataGridViewStat;



	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;


	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::DataGridView^ dataGridViewStock;



	private: System::Windows::Forms::TextBox^ ID_Produit;

	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;


	private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::DataGridView^ dataGridViewCommande;



	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;


	private: System::Windows::Forms::TabPage^ tabPage2;
private: System::Windows::Forms::DataGridView^ dataGridViewPersonnel;



	private: System::Windows::Forms::TextBox^ txt_prenom;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_id;


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
private: System::Windows::Forms::DataGridView^ dataGridViewPaiement;





private: System::Windows::Forms::Button^ Load_BDD_Personnel;
private: System::Windows::Forms::Button^ Insert_Personnel;
private: System::Windows::Forms::Button^ Update_Personnel;
private: System::Windows::Forms::Button^ Update_Stock;
private: System::Windows::Forms::Button^ Insert_Stock;
private: System::Windows::Forms::Button^ Load_Bdd_Stock;
private: System::Windows::Forms::Button^ DELETE_Commande;
private: System::Windows::Forms::Button^ Update_Commande;
private: System::Windows::Forms::Button^ Insert_Commande;
private: System::Windows::Forms::Button^ Load_Bdd_Commande;
private: System::Windows::Forms::Button^ DELETE_Personnel;
private: System::Windows::Forms::Button^ Delete_Stat;
private: System::Windows::Forms::Button^ Update_Stat;
private: System::Windows::Forms::Button^ Insert_Stat;
private: System::Windows::Forms::Button^ Load_Bdd_Stat;
private: System::Windows::Forms::Button^ Delete_Stock;
private: System::Windows::Forms::Button^ Delete_Paiement;
private: System::Windows::Forms::Button^ UPDATE_Paiement;
private: System::Windows::Forms::Button^ Insert_Paiement;
private: System::Windows::Forms::Button^ Load_BDD_Paiement;















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
			this->Delete_Stat = (gcnew System::Windows::Forms::Button());
			this->Update_Stat = (gcnew System::Windows::Forms::Button());
			this->Insert_Stat = (gcnew System::Windows::Forms::Button());
			this->Load_Bdd_Stat = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewStat = (gcnew System::Windows::Forms::DataGridView());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->Delete_Stock = (gcnew System::Windows::Forms::Button());
			this->Update_Stock = (gcnew System::Windows::Forms::Button());
			this->Insert_Stock = (gcnew System::Windows::Forms::Button());
			this->Load_Bdd_Stock = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewStock = (gcnew System::Windows::Forms::DataGridView());
			this->ID_Produit = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->DELETE_Commande = (gcnew System::Windows::Forms::Button());
			this->Update_Commande = (gcnew System::Windows::Forms::Button());
			this->Insert_Commande = (gcnew System::Windows::Forms::Button());
			this->Load_Bdd_Commande = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewCommande = (gcnew System::Windows::Forms::DataGridView());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->DELETE_Personnel = (gcnew System::Windows::Forms::Button());
			this->Update_Personnel = (gcnew System::Windows::Forms::Button());
			this->Insert_Personnel = (gcnew System::Windows::Forms::Button());
			this->Load_BDD_Personnel = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewPersonnel = (gcnew System::Windows::Forms::DataGridView());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
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
			this->DataGrindViewClient = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->Delete_Paiement = (gcnew System::Windows::Forms::Button());
			this->UPDATE_Paiement = (gcnew System::Windows::Forms::Button());
			this->Insert_Paiement = (gcnew System::Windows::Forms::Button());
			this->Load_BDD_Paiement = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewPaiement = (gcnew System::Windows::Forms::DataGridView());
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
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPaiement))->BeginInit();
			this->SuspendLayout();
			// 
			// tabPage7
			// 
			this->tabPage7->Location = System::Drawing::Point(8, 39);
			this->tabPage7->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(998, 588);
			this->tabPage7->TabIndex = 6;
			// 
			// tabPage6
			// 
			this->tabPage6->Location = System::Drawing::Point(8, 39);
			this->tabPage6->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(998, 588);
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
			this->tabPage5->Location = System::Drawing::Point(8, 39);
			this->tabPage5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabPage5->Size = System::Drawing::Size(998, 588);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Stats";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// Delete_Stat
			// 
			this->Delete_Stat->Location = System::Drawing::Point(218, 498);
			this->Delete_Stat->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Delete_Stat->Name = L"Delete_Stat";
			this->Delete_Stat->Size = System::Drawing::Size(164, 73);
			this->Delete_Stat->TabIndex = 24;
			this->Delete_Stat->Text = L"DELETE";
			this->Delete_Stat->UseVisualStyleBackColor = true;
			// 
			// Update_Stat
			// 
			this->Update_Stat->Location = System::Drawing::Point(218, 413);
			this->Update_Stat->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Update_Stat->Name = L"Update_Stat";
			this->Update_Stat->Size = System::Drawing::Size(164, 71);
			this->Update_Stat->TabIndex = 23;
			this->Update_Stat->Text = L"UPDATE";
			this->Update_Stat->UseVisualStyleBackColor = true;
			// 
			// Insert_Stat
			// 
			this->Insert_Stat->Location = System::Drawing::Point(218, 329);
			this->Insert_Stat->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Insert_Stat->Name = L"Insert_Stat";
			this->Insert_Stat->Size = System::Drawing::Size(164, 75);
			this->Insert_Stat->TabIndex = 22;
			this->Insert_Stat->Text = L"INSERT";
			this->Insert_Stat->UseVisualStyleBackColor = true;
			// 
			// Load_Bdd_Stat
			// 
			this->Load_Bdd_Stat->Location = System::Drawing::Point(16, 329);
			this->Load_Bdd_Stat->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Load_Bdd_Stat->Name = L"Load_Bdd_Stat";
			this->Load_Bdd_Stat->Size = System::Drawing::Size(152, 242);
			this->Load_Bdd_Stat->TabIndex = 21;
			this->Load_Bdd_Stat->Text = L"LOAD BDD";
			this->Load_Bdd_Stat->UseVisualStyleBackColor = true;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(466, 435);
			this->label19->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(204, 25);
			this->label19->TabIndex = 20;
			this->label19->Text = L"Pourcentage remise";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(556, 379);
			this->label18->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(110, 25);
			this->label18->TabIndex = 19;
			this->label18->Text = L"ID Remise";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(538, 329);
			this->label17->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(128, 25);
			this->label17->TabIndex = 18;
			this->label17->Text = L"ID Paiement";
			// 
			// dataGridViewStat
			// 
			this->dataGridViewStat->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewStat->Location = System::Drawing::Point(18, 0);
			this->dataGridViewStat->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridViewStat->Name = L"dataGridViewStat";
			this->dataGridViewStat->RowHeadersWidth = 82;
			this->dataGridViewStat->Size = System::Drawing::Size(962, 313);
			this->dataGridViewStat->TabIndex = 17;
			this->dataGridViewStat->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView4_CellContentClick);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(680, 323);
			this->textBox10->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(294, 31);
			this->textBox10->TabIndex = 15;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(680, 373);
			this->textBox11->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(294, 31);
			this->textBox11->TabIndex = 14;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(680, 429);
			this->textBox12->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(294, 31);
			this->textBox12->TabIndex = 13;
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
			this->tabPage4->Controls->Add(this->dataGridViewStock);
			this->tabPage4->Controls->Add(this->ID_Produit);
			this->tabPage4->Controls->Add(this->textBox8);
			this->tabPage4->Controls->Add(this->textBox9);
			this->tabPage4->Location = System::Drawing::Point(8, 39);
			this->tabPage4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabPage4->Size = System::Drawing::Size(998, 588);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Stock";
			this->tabPage4->UseVisualStyleBackColor = true;
			this->tabPage4->Click += gcnew System::EventHandler(this, &MyForm::tabPage4_Click);
			// 
			// Delete_Stock
			// 
			this->Delete_Stock->Location = System::Drawing::Point(194, 506);
			this->Delete_Stock->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Delete_Stock->Name = L"Delete_Stock";
			this->Delete_Stock->Size = System::Drawing::Size(170, 69);
			this->Delete_Stock->TabIndex = 28;
			this->Delete_Stock->Text = L"DELETE";
			this->Delete_Stock->UseVisualStyleBackColor = true;
			// 
			// Update_Stock
			// 
			this->Update_Stock->Location = System::Drawing::Point(194, 413);
			this->Update_Stock->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Update_Stock->Name = L"Update_Stock";
			this->Update_Stock->Size = System::Drawing::Size(170, 81);
			this->Update_Stock->TabIndex = 27;
			this->Update_Stock->Text = L"UPDATE";
			this->Update_Stock->UseVisualStyleBackColor = true;
			// 
			// Insert_Stock
			// 
			this->Insert_Stock->Location = System::Drawing::Point(194, 337);
			this->Insert_Stock->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Insert_Stock->Name = L"Insert_Stock";
			this->Insert_Stock->Size = System::Drawing::Size(170, 75);
			this->Insert_Stock->TabIndex = 26;
			this->Insert_Stock->Text = L"INSERT";
			this->Insert_Stock->UseVisualStyleBackColor = true;
			// 
			// Load_Bdd_Stock
			// 
			this->Load_Bdd_Stock->Location = System::Drawing::Point(16, 342);
			this->Load_Bdd_Stock->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Load_Bdd_Stock->Name = L"Load_Bdd_Stock";
			this->Load_Bdd_Stock->Size = System::Drawing::Size(142, 225);
			this->Load_Bdd_Stock->TabIndex = 25;
			this->Load_Bdd_Stock->Text = L"LOAD BDD";
			this->Load_Bdd_Stock->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(436, 542);
			this->label16->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(255, 25);
			this->label16->TabIndex = 24;
			this->label16->Text = L"Seuil réaprovisionnement";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(562, 492);
			this->label15->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(123, 25);
			this->label15->TabIndex = 23;
			this->label15->Text = L"Prix Produit";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(504, 442);
			this->label14->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(180, 25);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Quantité en stock";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(626, 392);
			this->label13->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(56, 25);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Nom";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(574, 342);
			this->label12->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(106, 25);
			this->label12->TabIndex = 20;
			this->label12->Text = L"ID Produit";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(696, 537);
			this->textBox17->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(276, 31);
			this->textBox17->TabIndex = 19;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(694, 487);
			this->textBox16->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(276, 31);
			this->textBox16->TabIndex = 18;
			// 
			// dataGridViewStock
			// 
			this->dataGridViewStock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewStock->Location = System::Drawing::Point(16, 6);
			this->dataGridViewStock->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridViewStock->Name = L"dataGridViewStock";
			this->dataGridViewStock->RowHeadersWidth = 82;
			this->dataGridViewStock->Size = System::Drawing::Size(960, 308);
			this->dataGridViewStock->TabIndex = 17;
			this->dataGridViewStock->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellContentClick);
			// 
			// ID_Produit
			// 
			this->ID_Produit->Location = System::Drawing::Point(694, 337);
			this->ID_Produit->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->ID_Produit->Name = L"ID_Produit";
			this->ID_Produit->Size = System::Drawing::Size(278, 31);
			this->ID_Produit->TabIndex = 15;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(696, 387);
			this->textBox8->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(278, 31);
			this->textBox8->TabIndex = 14;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(698, 437);
			this->textBox9->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(276, 31);
			this->textBox9->TabIndex = 13;
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
			this->tabPage3->Location = System::Drawing::Point(8, 39);
			this->tabPage3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabPage3->Size = System::Drawing::Size(998, 588);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Commande";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// DELETE_Commande
			// 
			this->DELETE_Commande->Location = System::Drawing::Point(236, 513);
			this->DELETE_Commande->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->DELETE_Commande->Name = L"DELETE_Commande";
			this->DELETE_Commande->Size = System::Drawing::Size(162, 65);
			this->DELETE_Commande->TabIndex = 24;
			this->DELETE_Commande->Text = L"DELETE";
			this->DELETE_Commande->UseVisualStyleBackColor = true;
			// 
			// Update_Commande
			// 
			this->Update_Commande->Location = System::Drawing::Point(236, 429);
			this->Update_Commande->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Update_Commande->Name = L"Update_Commande";
			this->Update_Commande->Size = System::Drawing::Size(162, 71);
			this->Update_Commande->TabIndex = 23;
			this->Update_Commande->Text = L"UPDATE";
			this->Update_Commande->UseVisualStyleBackColor = true;
			// 
			// Insert_Commande
			// 
			this->Insert_Commande->Location = System::Drawing::Point(236, 342);
			this->Insert_Commande->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Insert_Commande->Name = L"Insert_Commande";
			this->Insert_Commande->Size = System::Drawing::Size(162, 75);
			this->Insert_Commande->TabIndex = 22;
			this->Insert_Commande->Text = L"INSERT";
			this->Insert_Commande->UseVisualStyleBackColor = true;
			// 
			// Load_Bdd_Commande
			// 
			this->Load_Bdd_Commande->Location = System::Drawing::Point(14, 342);
			this->Load_Bdd_Commande->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Load_Bdd_Commande->Name = L"Load_Bdd_Commande";
			this->Load_Bdd_Commande->Size = System::Drawing::Size(162, 229);
			this->Load_Bdd_Commande->TabIndex = 21;
			this->Load_Bdd_Commande->Text = L"Load BDD";
			this->Load_Bdd_Commande->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(444, 442);
			this->label11->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(226, 25);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Reference Commande";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(522, 392);
			this->label10->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(150, 25);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Date Emission";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(520, 342);
			this->label9->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(150, 25);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Date Livraison";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// dataGridViewCommande
			// 
			this->dataGridViewCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewCommande->Location = System::Drawing::Point(8, 12);
			this->dataGridViewCommande->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridViewCommande->Name = L"dataGridViewCommande";
			this->dataGridViewCommande->RowHeadersWidth = 82;
			this->dataGridViewCommande->Size = System::Drawing::Size(950, 302);
			this->dataGridViewCommande->TabIndex = 17;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(682, 337);
			this->textBox4->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(272, 31);
			this->textBox4->TabIndex = 15;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(682, 387);
			this->textBox5->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(272, 31);
			this->textBox5->TabIndex = 14;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(682, 437);
			this->textBox6->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(272, 31);
			this->textBox6->TabIndex = 13;
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
			this->tabPage2->Controls->Add(this->dataGridViewPersonnel);
			this->tabPage2->Controls->Add(this->txt_prenom);
			this->tabPage2->Controls->Add(this->txt_nom);
			this->tabPage2->Controls->Add(this->txt_id);
			this->tabPage2->Location = System::Drawing::Point(8, 39);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabPage2->Size = System::Drawing::Size(998, 588);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Personnel";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// DELETE_Personnel
			// 
			this->DELETE_Personnel->Location = System::Drawing::Point(202, 488);
			this->DELETE_Personnel->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->DELETE_Personnel->Name = L"DELETE_Personnel";
			this->DELETE_Personnel->Size = System::Drawing::Size(178, 58);
			this->DELETE_Personnel->TabIndex = 18;
			this->DELETE_Personnel->Text = L"DELETE";
			this->DELETE_Personnel->UseVisualStyleBackColor = true;
			// 
			// Update_Personnel
			// 
			this->Update_Personnel->Location = System::Drawing::Point(202, 404);
			this->Update_Personnel->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Update_Personnel->Name = L"Update_Personnel";
			this->Update_Personnel->Size = System::Drawing::Size(178, 67);
			this->Update_Personnel->TabIndex = 17;
			this->Update_Personnel->Text = L"UPDATE";
			this->Update_Personnel->UseVisualStyleBackColor = true;
			this->Update_Personnel->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_3);
			// 
			// Insert_Personnel
			// 
			this->Insert_Personnel->Location = System::Drawing::Point(202, 315);
			this->Insert_Personnel->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Insert_Personnel->Name = L"Insert_Personnel";
			this->Insert_Personnel->Size = System::Drawing::Size(178, 69);
			this->Insert_Personnel->TabIndex = 16;
			this->Insert_Personnel->Text = L"INSERT";
			this->Insert_Personnel->UseVisualStyleBackColor = true;
			this->Insert_Personnel->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// Load_BDD_Personnel
			// 
			this->Load_BDD_Personnel->Location = System::Drawing::Point(14, 312);
			this->Load_BDD_Personnel->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Load_BDD_Personnel->Name = L"Load_BDD_Personnel";
			this->Load_BDD_Personnel->Size = System::Drawing::Size(152, 235);
			this->Load_BDD_Personnel->TabIndex = 15;
			this->Load_BDD_Personnel->Text = L"Load BDD";
			this->Load_BDD_Personnel->UseVisualStyleBackColor = true;
			this->Load_BDD_Personnel->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(402, 488);
			this->label8->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(179, 25);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Date d\'embauche";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(498, 438);
			this->label7->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 25);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Prenom";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(526, 381);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 25);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Nom";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(448, 325);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 25);
			this->label5->TabIndex = 11;
			this->label5->Text = L"ID Personnel";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(596, 483);
			this->textBox15->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(358, 31);
			this->textBox15->TabIndex = 10;
			// 
			// dataGridViewPersonnel
			// 
			this->dataGridViewPersonnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewPersonnel->Location = System::Drawing::Point(12, 8);
			this->dataGridViewPersonnel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridViewPersonnel->Name = L"dataGridViewPersonnel";
			this->dataGridViewPersonnel->RowHeadersWidth = 82;
			this->dataGridViewPersonnel->Size = System::Drawing::Size(946, 294);
			this->dataGridViewPersonnel->TabIndex = 8;
			this->dataGridViewPersonnel->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(596, 325);
			this->txt_prenom->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(358, 31);
			this->txt_prenom->TabIndex = 7;
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(596, 375);
			this->txt_nom->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(358, 31);
			this->txt_nom->TabIndex = 6;
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(596, 433);
			this->txt_id->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(358, 31);
			this->txt_id->TabIndex = 5;
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
			this->tabPage1->Location = System::Drawing::Point(8, 39);
			this->tabPage1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabPage1->Size = System::Drawing::Size(998, 588);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Client";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(274, 496);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(191, 25);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Date de naissance";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(322, 440);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(147, 25);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Prenom Client";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(364, 325);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 25);
			this->label2->TabIndex = 19;
			this->label2->Text = L"ID Client";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(470, 483);
			this->textBox14->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(504, 31);
			this->textBox14->TabIndex = 18;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(470, 319);
			this->textBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(504, 31);
			this->textBox1->TabIndex = 15;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(470, 369);
			this->textBox2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(504, 31);
			this->textBox2->TabIndex = 14;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(470, 427);
			this->textBox3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(504, 31);
			this->textBox3->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(350, 383);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 25);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Nom Client";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(14, 302);
			this->button2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 71);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Load DB";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(14, 483);
			this->button3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 71);
			this->button3->TabIndex = 10;
			this->button3->Text = L"INS";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(14, 385);
			this->button4->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(150, 71);
			this->button4->TabIndex = 12;
			this->button4->Text = L"UPD";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(168, 302);
			this->button5->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 71);
			this->button5->TabIndex = 11;
			this->button5->Text = L"DEL";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// DataGrindViewClient
			// 
			this->DataGrindViewClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGrindViewClient->Location = System::Drawing::Point(14, 13);
			this->DataGrindViewClient->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->DataGrindViewClient->Name = L"DataGrindViewClient";
			this->DataGrindViewClient->RowHeadersWidth = 82;
			this->DataGrindViewClient->Size = System::Drawing::Size(944, 288);
			this->DataGrindViewClient->TabIndex = 0;
			this->DataGrindViewClient->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dgv_enr_CellContentClick);
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
			this->tabControl1->Location = System::Drawing::Point(2, 2);
			this->tabControl1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1014, 635);
			this->tabControl1->TabIndex = 8;
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
			this->tabPage8->Location = System::Drawing::Point(8, 39);
			this->tabPage8->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabPage8->Size = System::Drawing::Size(998, 588);
			this->tabPage8->TabIndex = 7;
			this->tabPage8->Text = L"Paiement";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// Delete_Paiement
			// 
			this->Delete_Paiement->Location = System::Drawing::Point(188, 498);
			this->Delete_Paiement->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Delete_Paiement->Name = L"Delete_Paiement";
			this->Delete_Paiement->Size = System::Drawing::Size(178, 73);
			this->Delete_Paiement->TabIndex = 34;
			this->Delete_Paiement->Text = L"DELETE";
			this->Delete_Paiement->UseVisualStyleBackColor = true;
			// 
			// UPDATE_Paiement
			// 
			this->UPDATE_Paiement->Location = System::Drawing::Point(188, 413);
			this->UPDATE_Paiement->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->UPDATE_Paiement->Name = L"UPDATE_Paiement";
			this->UPDATE_Paiement->Size = System::Drawing::Size(178, 73);
			this->UPDATE_Paiement->TabIndex = 33;
			this->UPDATE_Paiement->Text = L"UPDATE";
			this->UPDATE_Paiement->UseVisualStyleBackColor = true;
			// 
			// Insert_Paiement
			// 
			this->Insert_Paiement->Location = System::Drawing::Point(188, 327);
			this->Insert_Paiement->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Insert_Paiement->Name = L"Insert_Paiement";
			this->Insert_Paiement->Size = System::Drawing::Size(178, 73);
			this->Insert_Paiement->TabIndex = 32;
			this->Insert_Paiement->Text = L"INSERT";
			this->Insert_Paiement->UseVisualStyleBackColor = true;
			// 
			// Load_BDD_Paiement
			// 
			this->Load_BDD_Paiement->Location = System::Drawing::Point(30, 327);
			this->Load_BDD_Paiement->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Load_BDD_Paiement->Name = L"Load_BDD_Paiement";
			this->Load_BDD_Paiement->Size = System::Drawing::Size(144, 244);
			this->Load_BDD_Paiement->TabIndex = 31;
			this->Load_BDD_Paiement->Text = L"LOAD BDD";
			this->Load_BDD_Paiement->UseVisualStyleBackColor = true;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(576, 496);
			this->label23->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(90, 25);
			this->label23->TabIndex = 30;
			this->label23->Text = L"Montant";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(514, 438);
			this->label22->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(153, 25);
			this->label22->TabIndex = 29;
			this->label22->Text = L"Date Paiement";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(474, 383);
			this->label21->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(173, 25);
			this->label21->TabIndex = 28;
			this->label21->Text = L"Moyen Paiement";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(538, 327);
			this->label20->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(128, 25);
			this->label20->TabIndex = 27;
			this->label20->Text = L"ID Paiement";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(680, 483);
			this->textBox21->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(294, 31);
			this->textBox21->TabIndex = 26;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(680, 327);
			this->textBox18->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(294, 31);
			this->textBox18->TabIndex = 25;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(680, 377);
			this->textBox19->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(294, 31);
			this->textBox19->TabIndex = 24;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(680, 433);
			this->textBox20->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(294, 31);
			this->textBox20->TabIndex = 23;
			// 
			// dataGridViewPaiement
			// 
			this->dataGridViewPaiement->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewPaiement->Location = System::Drawing::Point(30, 4);
			this->dataGridViewPaiement->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridViewPaiement->Name = L"dataGridViewPaiement";
			this->dataGridViewPaiement->RowHeadersWidth = 82;
			this->dataGridViewPaiement->Size = System::Drawing::Size(942, 313);
			this->dataGridViewPaiement->TabIndex = 22;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1012, 638);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
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
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPaiement))->EndInit();
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