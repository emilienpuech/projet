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
	/// Description r�sum�e de MyForm
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
		/// Nettoyage des ressources utilis�es.
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
	private: System::Windows::Forms::TabPage^ tabPage9;
	private: System::Windows::Forms::TabPage^ tabPage10;
	private: System::Windows::Forms::TabPage^ tabPage11;
	private: System::Windows::Forms::TabPage^ tabPage12;
	private: System::Windows::Forms::TabPage^ tabPage13;
	private: System::Windows::Forms::TabPage^ tabPage14;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ textBox28;
private: System::Windows::Forms::TextBox^ textBox27;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::TextBox^ textBox29;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::TextBox^ textBox34;
private: System::Windows::Forms::TextBox^ textBox33;
private: System::Windows::Forms::TextBox^ textBox32;
private: System::Windows::Forms::TextBox^ textBox31;
private: System::Windows::Forms::TextBox^ textBox30;
private: System::Windows::Forms::TabPage^ tabPage15;
private: System::Windows::Forms::DataGridView^ dataGridView4;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::TextBox^ textBox36;
private: System::Windows::Forms::TextBox^ textBox35;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::DataGridView^ dataGridViewComposer;

private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::TextBox^ textBox38;
private: System::Windows::Forms::TextBox^ textBox37;
private: System::Windows::Forms::DataGridView^ dataGridView6;





private: System::Windows::Forms::Button^ Uptade_Composer;
private: System::Windows::Forms::Button^ Delete_Composer;
private: System::Windows::Forms::Button^ Insert_Composer;
private: System::Windows::Forms::Button^ Load_BDD_Composer;
private: System::Windows::Forms::DataGridView^ dataGridView5;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::TextBox^ textBox41;
private: System::Windows::Forms::TextBox^ textBox40;
private: System::Windows::Forms::TextBox^ textBox39;



private: System::Windows::Forms::DataGridView^ dataGridViewVille;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::TextBox^ textBox43;
private: System::Windows::Forms::TextBox^ textBox42;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::TextBox^ textBox45;
private: System::Windows::Forms::TextBox^ textBox44;
































































































































	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
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
			this->tabPage4->Controls->Add(this->ID_Produit);
			this->tabPage4->Controls->Add(this->textBox8);
			this->tabPage4->Controls->Add(this->textBox9);
			this->tabPage4->Controls->Add(this->dataGridViewStock);
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
			this->Delete_Stock->Click += gcnew System::EventHandler(this, &MyForm::Delete_Stock_Click);
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
			this->Update_Stock->Click += gcnew System::EventHandler(this, &MyForm::Update_Stock_Click);
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
			this->Insert_Stock->Click += gcnew System::EventHandler(this, &MyForm::Insert_Stock_Click);
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
			this->Load_Bdd_Stock->Click += gcnew System::EventHandler(this, &MyForm::Load_Bdd_Stock_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(436, 542);
			this->label16->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(255, 25);
			this->label16->TabIndex = 24;
			this->label16->Text = L"Seuil r�aprovisionnement";
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
			this->label14->Text = L"Quantit� en stock";
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
			this->textBox17->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox17_TextChanged);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(694, 487);
			this->textBox16->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(276, 31);
			this->textBox16->TabIndex = 18;
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox16_TextChanged);
			// 
			// ID_Produit
			// 
			this->ID_Produit->Location = System::Drawing::Point(694, 337);
			this->ID_Produit->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->ID_Produit->Name = L"ID_Produit";
			this->ID_Produit->Size = System::Drawing::Size(278, 31);
			this->ID_Produit->TabIndex = 15;
			this->ID_Produit->TextChanged += gcnew System::EventHandler(this, &MyForm::ID_Produit_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(696, 387);
			this->textBox8->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(278, 31);
			this->textBox8->TabIndex = 14;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(698, 437);
			this->textBox9->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(276, 31);
			this->textBox9->TabIndex = 13;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
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
			this->tabPage2->Controls->Add(this->label25);
			this->tabPage2->Controls->Add(this->label24);
			this->tabPage2->Controls->Add(this->textBox22);
			this->tabPage2->Controls->Add(this->textBox7);
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
			this->tabPage2->Location = System::Drawing::Point(8, 39);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabPage2->Size = System::Drawing::Size(998, 588);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Personnel";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(468, 544);
			this->label25->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(125, 25);
			this->label25->TabIndex = 22;
			this->label25->Text = L"id superieur";
			this->label25->Click += gcnew System::EventHandler(this, &MyForm::label25_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(468, 502);
			this->label24->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(112, 25);
			this->label24->TabIndex = 21;
			this->label24->Text = L"id adresse";
			this->label24->Click += gcnew System::EventHandler(this, &MyForm::label24_Click);
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(596, 544);
			this->textBox22->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(358, 31);
			this->textBox22->TabIndex = 20;
			this->textBox22->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox22_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(596, 502);
			this->textBox7->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(358, 31);
			this->textBox7->TabIndex = 19;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// DELETE_Personnel
			// 
			this->DELETE_Personnel->Location = System::Drawing::Point(202, 488);
			this->DELETE_Personnel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->DELETE_Personnel->Name = L"DELETE_Personnel";
			this->DELETE_Personnel->Size = System::Drawing::Size(178, 60);
			this->DELETE_Personnel->TabIndex = 18;
			this->DELETE_Personnel->Text = L"DELETE";
			this->DELETE_Personnel->UseVisualStyleBackColor = true;
			this->DELETE_Personnel->Click += gcnew System::EventHandler(this, &MyForm::DELETE_Personnel_Click);
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
			this->label8->Location = System::Drawing::Point(404, 458);
			this->label8->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(179, 25);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Date d\'embauche";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(498, 417);
			this->label7->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 25);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Prenom";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(524, 367);
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
			this->textBox15->Location = System::Drawing::Point(596, 458);
			this->textBox15->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(358, 31);
			this->textBox15->TabIndex = 10;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox15_TextChanged);
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(596, 325);
			this->txt_prenom->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(358, 31);
			this->txt_prenom->TabIndex = 7;
			this->txt_prenom->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_prenom_TextChanged);
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(596, 367);
			this->txt_nom->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(358, 31);
			this->txt_nom->TabIndex = 6;
			this->txt_nom->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_nom_TextChanged);
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(596, 413);
			this->txt_id->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(358, 31);
			this->txt_id->TabIndex = 5;
			this->txt_id->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_id_TextChanged);
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
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(470, 369);
			this->textBox2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(504, 31);
			this->textBox2->TabIndex = 14;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
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
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
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
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
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
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Controls->Add(this->tabPage9);
			this->tabControl1->Controls->Add(this->tabPage10);
			this->tabControl1->Controls->Add(this->tabPage11);
			this->tabControl1->Controls->Add(this->tabPage12);
			this->tabControl1->Controls->Add(this->tabPage13);
			this->tabControl1->Controls->Add(this->tabPage14);
			this->tabControl1->Controls->Add(this->tabPage15);
			this->tabControl1->Location = System::Drawing::Point(2, 2);
			this->tabControl1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1014, 635);
			this->tabControl1->TabIndex = 8;
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->label28);
			this->tabPage9->Controls->Add(this->label27);
			this->tabPage9->Controls->Add(this->label26);
			this->tabPage9->Controls->Add(this->textBox25);
			this->tabPage9->Controls->Add(this->textBox24);
			this->tabPage9->Controls->Add(this->textBox23);
			this->tabPage9->Controls->Add(this->dataGridView1);
			this->tabPage9->Controls->Add(this->button8);
			this->tabPage9->Controls->Add(this->button7);
			this->tabPage9->Controls->Add(this->button6);
			this->tabPage9->Controls->Add(this->button1);
			this->tabPage9->Location = System::Drawing::Point(8, 39);
			this->tabPage9->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabPage9->Size = System::Drawing::Size(998, 588);
			this->tabPage9->TabIndex = 8;
			this->tabPage9->Text = L"Taxe";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(560, 488);
			this->label28->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(182, 25);
			this->label28->TabIndex = 10;
			this->label28->Text = L"PourcentageTaxe";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(638, 425);
			this->label27->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(104, 25);
			this->label27->TabIndex = 9;
			this->label27->Text = L"NomTaxe";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(654, 360);
			this->label26->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(86, 25);
			this->label26->TabIndex = 8;
			this->label26->Text = L"ID Taxe";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(756, 475);
			this->textBox25->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(196, 31);
			this->textBox25->TabIndex = 7;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(756, 412);
			this->textBox24->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(196, 31);
			this->textBox24->TabIndex = 6;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(756, 350);
			this->textBox23->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(196, 31);
			this->textBox23->TabIndex = 5;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(32, 12);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->Size = System::Drawing::Size(926, 306);
			this->dataGridView1->TabIndex = 4;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(182, 483);
			this->button8->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(150, 60);
			this->button8->TabIndex = 3;
			this->button8->Text = L"DEL";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(182, 408);
			this->button7->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(150, 63);
			this->button7->TabIndex = 2;
			this->button7->Text = L"UPD";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(182, 329);
			this->button6->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(150, 65);
			this->button6->TabIndex = 1;
			this->button6->Text = L"INS";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(14, 350);
			this->button1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 221);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Load BDD";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->textBox29);
			this->tabPage10->Controls->Add(this->label32);
			this->tabPage10->Controls->Add(this->label31);
			this->tabPage10->Controls->Add(this->label30);
			this->tabPage10->Controls->Add(this->label29);
			this->tabPage10->Controls->Add(this->textBox28);
			this->tabPage10->Controls->Add(this->textBox27);
			this->tabPage10->Controls->Add(this->textBox26);
			this->tabPage10->Controls->Add(this->button12);
			this->tabPage10->Controls->Add(this->button11);
			this->tabPage10->Controls->Add(this->button10);
			this->tabPage10->Controls->Add(this->button9);
			this->tabPage10->Controls->Add(this->dataGridView2);
			this->tabPage10->Location = System::Drawing::Point(8, 39);
			this->tabPage10->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabPage10->Size = System::Drawing::Size(998, 588);
			this->tabPage10->TabIndex = 9;
			this->tabPage10->Text = L"Adresse";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(778, 517);
			this->textBox29->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(196, 31);
			this->textBox29->TabIndex = 12;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(678, 525);
			this->label32->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(79, 25);
			this->label32->TabIndex = 11;
			this->label32->Text = L"ID Ville";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(706, 473);
			this->label31->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(51, 25);
			this->label31->TabIndex = 10;
			this->label31->Text = L"Rue";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(672, 431);
			this->label30->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(87, 25);
			this->label30->TabIndex = 9;
			this->label30->Text = L"Num�ro";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(642, 379);
			this->label29->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(117, 25);
			this->label29->TabIndex = 8;
			this->label29->Text = L"ID Adresse";
			this->label29->Click += gcnew System::EventHandler(this, &MyForm::label29_Click);
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(778, 467);
			this->textBox28->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(196, 31);
			this->textBox28->TabIndex = 7;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(778, 417);
			this->textBox27->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(196, 31);
			this->textBox27->TabIndex = 6;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(778, 367);
			this->textBox26->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(196, 31);
			this->textBox26->TabIndex = 5;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(192, 394);
			this->button12->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(150, 44);
			this->button12->TabIndex = 4;
			this->button12->Text = L"DEL";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(192, 506);
			this->button11->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(150, 44);
			this->button11->TabIndex = 3;
			this->button11->Text = L"UPD";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(192, 450);
			this->button10->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(150, 44);
			this->button10->TabIndex = 2;
			this->button10->Text = L"INS";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(38, 379);
			this->button9->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(142, 185);
			this->button9->TabIndex = 1;
			this->button9->Text = L"Load BDD";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(16, 13);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 82;
			this->dataGridView2->Size = System::Drawing::Size(970, 342);
			this->dataGridView2->TabIndex = 0;
			// 
			// tabPage11
			// 
			this->tabPage11->Controls->Add(this->label37);
			this->tabPage11->Controls->Add(this->label36);
			this->tabPage11->Controls->Add(this->label35);
			this->tabPage11->Controls->Add(this->label34);
			this->tabPage11->Controls->Add(this->label33);
			this->tabPage11->Controls->Add(this->textBox34);
			this->tabPage11->Controls->Add(this->textBox33);
			this->tabPage11->Controls->Add(this->textBox32);
			this->tabPage11->Controls->Add(this->textBox31);
			this->tabPage11->Controls->Add(this->textBox30);
			this->tabPage11->Controls->Add(this->button16);
			this->tabPage11->Controls->Add(this->button15);
			this->tabPage11->Controls->Add(this->button14);
			this->tabPage11->Controls->Add(this->dataGridView3);
			this->tabPage11->Controls->Add(this->button13);
			this->tabPage11->Location = System::Drawing::Point(8, 39);
			this->tabPage11->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabPage11->Size = System::Drawing::Size(998, 588);
			this->tabPage11->TabIndex = 10;
			this->tabPage11->Text = L"Paiement";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(544, 544);
			this->label37->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(229, 25);
			this->label37->TabIndex = 14;
			this->label37->Text = L"ID Moyen de Paiement";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(614, 494);
			this->label36->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(160, 25);
			this->label36->TabIndex = 13;
			this->label36->Text = L"Ref Commande";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(588, 444);
			this->label35->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(186, 25);
			this->label35->TabIndex = 12;
			this->label35->Text = L"Montant Paiement";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(620, 396);
			this->label34->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(153, 25);
			this->label34->TabIndex = 11;
			this->label34->Text = L"Date Paiement";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(644, 340);
			this->label33->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(128, 25);
			this->label33->TabIndex = 10;
			this->label33->Text = L"ID Paiement";
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(786, 531);
			this->textBox34->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(196, 31);
			this->textBox34->TabIndex = 9;
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(786, 488);
			this->textBox33->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(196, 31);
			this->textBox33->TabIndex = 8;
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(786, 438);
			this->textBox32->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(196, 31);
			this->textBox32->TabIndex = 7;
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(786, 385);
			this->textBox31->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(196, 31);
			this->textBox31->TabIndex = 6;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(786, 335);
			this->textBox30->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(196, 31);
			this->textBox30->TabIndex = 5;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(180, 488);
			this->button16->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(150, 44);
			this->button16->TabIndex = 4;
			this->button16->Text = L"DEL";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(180, 433);
			this->button15->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(150, 44);
			this->button15->TabIndex = 3;
			this->button15->Text = L"UPD";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(180, 377);
			this->button14->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(150, 44);
			this->button14->TabIndex = 2;
			this->button14->Text = L"INS";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(16, 13);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 82;
			this->dataGridView3->Size = System::Drawing::Size(962, 288);
			this->dataGridView3->TabIndex = 1;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(16, 375);
			this->button13->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(152, 196);
			this->button13->TabIndex = 0;
			this->button13->Text = L"Load BDD";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// tabPage12
			// 
			this->tabPage12->Controls->Add(this->dataGridView6);
			this->tabPage12->Controls->Add(this->textBox36);
			this->tabPage12->Controls->Add(this->button20);
			this->tabPage12->Controls->Add(this->button19);
			this->tabPage12->Controls->Add(this->button18);
			this->tabPage12->Controls->Add(this->button17);
			this->tabPage12->Location = System::Drawing::Point(8, 39);
			this->tabPage12->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabPage12->Size = System::Drawing::Size(998, 588);
			this->tabPage12->TabIndex = 11;
			this->tabPage12->Text = L"Mode Paiement";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(48, 0);
			this->dataGridView6->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->RowHeadersWidth = 82;
			this->dataGridView6->Size = System::Drawing::Size(890, 306);
			this->dataGridView6->TabIndex = 9;
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(738, 383);
			this->textBox36->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(196, 31);
			this->textBox36->TabIndex = 6;
			this->textBox36->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox36_TextChanged);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(242, 327);
			this->button20->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(150, 44);
			this->button20->TabIndex = 4;
			this->button20->Text = L"DEL";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(242, 438);
			this->button19->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(150, 44);
			this->button19->TabIndex = 3;
			this->button19->Text = L"UPD";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(242, 383);
			this->button18->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(150, 44);
			this->button18->TabIndex = 2;
			this->button18->Text = L"INS";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(48, 317);
			this->button17->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(150, 254);
			this->button17->TabIndex = 1;
			this->button17->Text = L"Load BDD";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// tabPage13
			// 
			this->tabPage13->Controls->Add(this->label45);
			this->tabPage13->Controls->Add(this->label44);
			this->tabPage13->Controls->Add(this->textBox43);
			this->tabPage13->Controls->Add(this->textBox42);
			this->tabPage13->Controls->Add(this->dataGridViewVille);
			this->tabPage13->Controls->Add(this->button24);
			this->tabPage13->Controls->Add(this->button23);
			this->tabPage13->Controls->Add(this->button22);
			this->tabPage13->Controls->Add(this->button21);
			this->tabPage13->Location = System::Drawing::Point(8, 39);
			this->tabPage13->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Padding = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabPage13->Size = System::Drawing::Size(998, 588);
			this->tabPage13->TabIndex = 12;
			this->tabPage13->Text = L"Ville";
			this->tabPage13->UseVisualStyleBackColor = true;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(652, 398);
			this->label45->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(103, 25);
			this->label45->TabIndex = 9;
			this->label45->Text = L"Nom Ville";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(674, 342);
			this->label44->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(79, 25);
			this->label44->TabIndex = 8;
			this->label44->Text = L"ID Ville";
			// 
			// textBox43
			// 
			this->textBox43->Location = System::Drawing::Point(766, 392);
			this->textBox43->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(196, 31);
			this->textBox43->TabIndex = 7;
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(766, 337);
			this->textBox42->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(196, 31);
			this->textBox42->TabIndex = 6;
			// 
			// dataGridViewVille
			// 
			this->dataGridViewVille->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewVille->Location = System::Drawing::Point(16, 13);
			this->dataGridViewVille->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->dataGridViewVille->Name = L"dataGridViewVille";
			this->dataGridViewVille->RowHeadersWidth = 82;
			this->dataGridViewVille->Size = System::Drawing::Size(962, 308);
			this->dataGridViewVille->TabIndex = 5;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(226, 444);
			this->button24->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(150, 44);
			this->button24->TabIndex = 4;
			this->button24->Text = L"DEL";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(226, 388);
			this->button23->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(150, 44);
			this->button23->TabIndex = 3;
			this->button23->Text = L"UPD";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(226, 333);
			this->button22->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(150, 44);
			this->button22->TabIndex = 2;
			this->button22->Text = L"INS";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(54, 333);
			this->button21->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(160, 238);
			this->button21->TabIndex = 0;
			this->button21->Text = L"Loas BDD";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// tabPage14
			// 
			this->tabPage14->Controls->Add(this->textBox41);
			this->tabPage14->Controls->Add(this->textBox40);
			this->tabPage14->Controls->Add(this->textBox39);
			this->tabPage14->Controls->Add(this->textBox38);
			this->tabPage14->Controls->Add(this->textBox37);
			this->tabPage14->Controls->Add(this->textBox35);
			this->tabPage14->Controls->Add(this->label43);
			this->tabPage14->Controls->Add(this->label42);
			this->tabPage14->Controls->Add(this->label41);
			this->tabPage14->Controls->Add(this->label40);
			this->tabPage14->Controls->Add(this->label39);
			this->tabPage14->Controls->Add(this->label38);
			this->tabPage14->Controls->Add(this->Uptade_Composer);
			this->tabPage14->Controls->Add(this->Delete_Composer);
			this->tabPage14->Controls->Add(this->Insert_Composer);
			this->tabPage14->Controls->Add(this->Load_BDD_Composer);
			this->tabPage14->Controls->Add(this->dataGridViewComposer);
			this->tabPage14->Location = System::Drawing::Point(8, 39);
			this->tabPage14->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Padding = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabPage14->Size = System::Drawing::Size(998, 588);
			this->tabPage14->TabIndex = 13;
			this->tabPage14->Text = L"Composer";
			this->tabPage14->UseVisualStyleBackColor = true;
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(762, 538);
			this->textBox41->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(196, 31);
			this->textBox41->TabIndex = 17;
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(762, 496);
			this->textBox40->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(196, 31);
			this->textBox40->TabIndex = 16;
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(762, 450);
			this->textBox39->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(196, 31);
			this->textBox39->TabIndex = 15;
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(762, 400);
			this->textBox38->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(196, 31);
			this->textBox38->TabIndex = 14;
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(762, 356);
			this->textBox37->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(196, 31);
			this->textBox37->TabIndex = 13;
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(762, 296);
			this->textBox35->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(196, 31);
			this->textBox35->TabIndex = 11;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(552, 496);
			this->label43->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(87, 25);
			this->label43->TabIndex = 10;
			this->label43->Text = L"Couleur";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(552, 350);
			this->label42->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(98, 25);
			this->label42->TabIndex = 9;
			this->label42->Text = L"Prix UHT";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(552, 452);
			this->label41->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(181, 25);
			this->label41->TabIndex = 8;
			this->label41->Text = L"Pourcentage TVA";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(552, 552);
			this->label40->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(153, 25);
			this->label40->TabIndex = 7;
			this->label40->Text = L"Nombre Article";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(552, 406);
			this->label39->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(160, 25);
			this->label39->TabIndex = 6;
			this->label39->Text = L"Ref Commande";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(552, 296);
			this->label38->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(111, 25);
			this->label38->TabIndex = 5;
			this->label38->Text = L"Reference";
			this->label38->Click += gcnew System::EventHandler(this, &MyForm::label38_Click);
			// 
			// Uptade_Composer
			// 
			this->Uptade_Composer->Location = System::Drawing::Point(212, 477);
			this->Uptade_Composer->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Uptade_Composer->Name = L"Uptade_Composer";
			this->Uptade_Composer->Size = System::Drawing::Size(150, 44);
			this->Uptade_Composer->TabIndex = 4;
			this->Uptade_Composer->Text = L"UPDATE";
			this->Uptade_Composer->UseVisualStyleBackColor = true;
			// 
			// Delete_Composer
			// 
			this->Delete_Composer->Location = System::Drawing::Point(212, 387);
			this->Delete_Composer->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Delete_Composer->Name = L"Delete_Composer";
			this->Delete_Composer->Size = System::Drawing::Size(150, 44);
			this->Delete_Composer->TabIndex = 3;
			this->Delete_Composer->Text = L"DELETE";
			this->Delete_Composer->UseVisualStyleBackColor = true;
			// 
			// Insert_Composer
			// 
			this->Insert_Composer->Location = System::Drawing::Point(212, 296);
			this->Insert_Composer->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Insert_Composer->Name = L"Insert_Composer";
			this->Insert_Composer->Size = System::Drawing::Size(150, 44);
			this->Insert_Composer->TabIndex = 2;
			this->Insert_Composer->Text = L"INSERT";
			this->Insert_Composer->UseVisualStyleBackColor = true;
			// 
			// Load_BDD_Composer
			// 
			this->Load_BDD_Composer->Location = System::Drawing::Point(14, 296);
			this->Load_BDD_Composer->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Load_BDD_Composer->Name = L"Load_BDD_Composer";
			this->Load_BDD_Composer->Size = System::Drawing::Size(150, 44);
			this->Load_BDD_Composer->TabIndex = 1;
			this->Load_BDD_Composer->Text = L"Load_BDD_Composer";
			this->Load_BDD_Composer->UseVisualStyleBackColor = true;
			// 
			// dataGridViewComposer
			// 
			this->dataGridViewComposer->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewComposer->Location = System::Drawing::Point(12, 6);
			this->dataGridViewComposer->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->dataGridViewComposer->Name = L"dataGridViewComposer";
			this->dataGridViewComposer->RowHeadersWidth = 82;
			this->dataGridViewComposer->Size = System::Drawing::Size(962, 252);
			this->dataGridViewComposer->TabIndex = 0;
			this->dataGridViewComposer->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView5_CellContentClick);
			// 
			// tabPage15
			// 
			this->tabPage15->Controls->Add(this->label47);
			this->tabPage15->Controls->Add(this->label46);
			this->tabPage15->Controls->Add(this->textBox45);
			this->tabPage15->Controls->Add(this->textBox44);
			this->tabPage15->Controls->Add(this->button28);
			this->tabPage15->Controls->Add(this->button27);
			this->tabPage15->Controls->Add(this->button26);
			this->tabPage15->Controls->Add(this->button25);
			this->tabPage15->Controls->Add(this->dataGridView4);
			this->tabPage15->Location = System::Drawing::Point(8, 39);
			this->tabPage15->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabPage15->Name = L"tabPage15";
			this->tabPage15->Padding = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->tabPage15->Size = System::Drawing::Size(998, 588);
			this->tabPage15->TabIndex = 14;
			this->tabPage15->Text = L"Remise";
			this->tabPage15->UseVisualStyleBackColor = true;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(556, 385);
			this->label47->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(212, 25);
			this->label47->TabIndex = 8;
			this->label47->Text = L"Pourcentage Remise";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(638, 333);
			this->label46->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(128, 25);
			this->label46->TabIndex = 7;
			this->label46->Text = L"ID Paiement";
			// 
			// textBox45
			// 
			this->textBox45->Location = System::Drawing::Point(780, 379);
			this->textBox45->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(196, 31);
			this->textBox45->TabIndex = 6;
			// 
			// textBox44
			// 
			this->textBox44->Location = System::Drawing::Point(780, 327);
			this->textBox44->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(196, 31);
			this->textBox44->TabIndex = 5;
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(246, 440);
			this->button28->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(150, 44);
			this->button28->TabIndex = 4;
			this->button28->Text = L"DEL";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(246, 385);
			this->button27->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(150, 44);
			this->button27->TabIndex = 3;
			this->button27->Text = L"UPD";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(246, 323);
			this->button26->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(150, 44);
			this->button26->TabIndex = 2;
			this->button26->Text = L"INS";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(64, 298);
			this->button25->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(170, 244);
			this->button25->TabIndex = 1;
			this->button25->Text = L"Load BDD";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(16, 13);
			this->dataGridView4->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 82;
			this->dataGridView4->Size = System::Drawing::Size(962, 273);
			this->dataGridView4->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1012, 638);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load_1);
			this->ResumeLayout(false);

		}
#pragma endregion


		// private m�thode pour nos evenement




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


		   /*
		   Fait
		   client (sauf delete)
		   employer (sauf update et delete)
		   stock/article
		   
		   
		   */


		/*   // Paiement


		   //SELECT Paiement
		   private: System::Void Load_BDD_Paiement(System::Object^ sender, System::EventArgs^ e) {
			   this->Refresh();
			   this->oDs = this->oSvc->select_tout_nos_paiement("Rsl");
			   this->dataGridViewPaiement->DataSource = this->oDs;
			   this->dataGridViewPaiement->DataMember = "Rsl";
		   }
			//UPD Paiement
				  private: System::Void UPDATE_Paiement(System::Object^ sender, System::EventArgs^ e) {
					  this->oSvc->upd_un_paiement(this->oSvc->convert_string_to_int(this->textBox18->Text),)
				  }


*/

		   /*
			*
			* CLIENT
			* 1		id
			* 2		nom
			* 3		prenom
			* 14	date de naissance
			*
			*/

			// SELECT Client
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Refresh();
		this->oDs = this->oSvc->select_tout_nos_client("Rsl");
		this->DataGrindViewClient->DataSource = this->oDs;
		this->DataGrindViewClient->DataMember = "Rsl";
	}

		   // UPD client
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->upd_un_client(this->oSvc->convert_string_to_int(this->textBox1->Text), this->textBox2->Text, this->textBox3->Text, this->textBox14->Text);
	}

		   // INS client 
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->ins_un_client(this->textBox2->Text, this->textBox3->Text, this->textBox14->Text);
	}
		   // DEL Client
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->del_un_client(this->oSvc->convert_string_to_int(this->textBox1->Text));
	}// end client


	// Employe
	// 
	//  id employe   txt_prenom
	//  nom          txt_nom
	//  prenom       txt_id
	//	dateembauche 15
	//	idadresse    7
	//	id sup       2
	// 

				// Select employe
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Refresh();
		this->oDs = this->oSvc->select_tout_nos_employer("Rsl");
		this->dataGridViewPersonnel->DataSource = this->oDs;
		this->dataGridViewPersonnel->DataMember = "Rsl";
	}
		   
		   //upd employe
	private: System::Void button1_Click_3(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->upd_un_employer(this->oSvc->convert_string_to_int(this->txt_prenom->Text), this->txt_nom->Text, this->txt_id->Text, this->textBox15->Text, this->oSvc->convert_string_to_int(this->textBox7->Text), this->oSvc->convert_string_to_int(this->textBox22->Text));
	} // void upd_un_employer(int, System::String^, System::String^, System::String^, int id_adresse, int id_sup);

		   // ins employe
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->ins_un_employer(this->txt_nom->Text, this->txt_id->Text, this->textBox15->Text, this->oSvc->convert_string_to_int(this->textBox7->Text), this->oSvc->convert_string_to_int(this->textBox22->Text));

	}

		   // del employe
	private: System::Void DELETE_Personnel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->del_un_employer(this->oSvc->convert_string_to_int(this->txt_prenom->Text));
	}



		   // STOCK
		   //
		   //  reference
		   //  nom
		   //  quantitestock
		   //  prixproduit
		   //  seuilreaprovisionnement
		   // 
		   //

private: System::Void Load_Bdd_Stock_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Refresh();
	this->oDs = this->oSvc->select_tout_nos_articles("Rsl");
	this->dataGridViewStock->DataSource = this->oDs;
	this->dataGridViewStock->DataMember = "Rsl";
}
private: System::Void Insert_Stock_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->ins_un_article( this->textBox8->Text, this->oSvc->convert_string_to_int(this->textBox9->Text), this->oSvc->convert_string_to_int(this->textBox16->Text), this->oSvc->convert_string_to_int(this->textBox17->Text));
}
private: System::Void Update_Stock_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->upd_un_article(this->oSvc->convert_string_to_int(this->ID_Produit->Text), this->textBox8->Text, this->oSvc->convert_string_to_int(this->textBox9->Text) , this->oSvc->convert_string_to_int(this->textBox16->Text), this->oSvc->convert_string_to_int(this->textBox17->Text));
}
private: System::Void Delete_Stock_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->del_un_article(this->oSvc->convert_string_to_int(this->ID_Produit->Text));
}// END STOCK


private: System::Void ID_Produit_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox16_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox17_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	


	
private: System::Void txt_prenom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void txt_nom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_id_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox15_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox22_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label38_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView5_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void textBox36_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

};
}

/*

 ------------		MyFrom.h

// CLIENT
		System::Data::DataSet^ select_tout_nos_client(System::String^);
		void upd_un_client(int, System::String^, System::String^, System::String^);
		void ins_un_client(System::String^, System::String^, System::String^);
		void del_un_client(int);


		// Employer
		System::Data::DataSet^ select_tout_nos_employer(System::String^);
		void upd_un_employer(int, System::String^, System::String^, System::String^, int id_adresse, int id_sup);
		void ins_un_employer(System::String^, System::String^, System::String^, int id_adresse, int id_sup);
		void del_un_employer(int);

		// Adresse
		System::Data::DataSet^ select_tout_nos_adresse(System::String^);
		void upd_une_adresse(int, int, System::String^, System::String^, int, int);
		void ins_une_adresse(int, System::String^, System::String^, int, int);
		void del_une_adresse(int);

		// Mode de Paiement
		System::Data::DataSet^ select_tout_nos_mode_de_paiement(System::String^);
		void upd_un_mode_de_paiement(int, System::String^);
		void ins_un_mode_de_paiement(System::String^);
		void del_un_mode_de_paiement(int);

		// Article
		System::Data::DataSet^ select_tout_nos_articles(System::String^);
		void upd_un_article(int id, System::String^ nom, int quantite_de_stock, int prix_produit, int seuil_reapprovisionnement);
		void ins_un_article(System::String^ nom, int quantite_de_stock, int prix_produit, int seuil_reapprovisionnement);
		void del_un_article(int);

		// Remise.h
		System::Data::DataSet^ select_tout_nos_remises(System::String^);
		void upd_une_remise(int id, System::String^, float pourcentageRemise);
		void ins_une_remise(System::String^ nomremise, int id, float pourcentageRemise);
		void del_une_remise(int);


		// Commande

		System::Data::DataSet^ select_toutes_nos_commandes(System::String^);
		void upd_une_commande(int RefCommande, System::String^ DateEmission, System::String^ DateLivraison);
		void ins_une_commande(System::String^, int RefCommande);
		void del_une_commande(int);


		//Ville

		System::Data::DataSet^ select_toutes_nos_villes(System::String^);
		void upd_une_ville(int idville, System::String^ nom_ville);
		void ins_une_ville(System::String^nom_ville, int idville);
		void del_une_ville(int idville, System::String^ nom_ville);

		//ModePaiement
		System::Data::DataSet^ select_tout_nos_ModePaiement(System::String^);
		void upd_un_mode_paiement(int idmodepaiement, System::String^ ModePaiement);
		void ins_un_mode_paiement(int idmodepaiement, System::String^ ModePaiement);
		void del_un_mode_paiement(int idmodepaiement, System::String^ ModePaiement);



		//composer
		System::Data::DataSet^ select_tout_composer(System::String^);
		void upd_composer(int reference, System::String^ refcommande, int nombrearticle, int prixuht, float pourcentagetva, System::String^ couleur);
		void ins_composer(System::String^ refcommande, int nombrearticle, int prixuht, float pourcentagetva, System::String^ couleur);
		void del_composer(int reference);

		//Taxer
		System::Data::DataSet^ select_tout_taxer(System::String^);
		void upd_taxer(int reference, int idTaxe);
		void ins_taxer(int reference, int idTaxe);
		void del_taxer(int reference, int idTaxe);

		//Taxe
		System::Data::DataSet^ select_taxe(System::String^);
		void upd_taxe(System::String^ nomtaxe, int idTaxe, float pourcentageTaxe);
		void ins_taxe(System::String^ nomtaxe, int idTaxe, float pourcentageTaxe);
		void del_taxe(System::String^ nomtaxe, int idTaxe, float pourcentageTaxe);




*/