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
			this->ID_Produit = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewStock = (gcnew System::Windows::Forms::DataGridView());
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
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->DELETE_Personnel = (gcnew System::Windows::Forms::Button());
			this->Update_Personnel = (gcnew System::Windows::Forms::Button());
			this->Insert_Personnel = (gcnew System::Windows::Forms::Button());
			this->Load_BDD_Personnel = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewPersonnel = (gcnew System::Windows::Forms::DataGridView());
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
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewVille = (gcnew System::Windows::Forms::DataGridView());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->Uptade_Composer = (gcnew System::Windows::Forms::Button());
			this->Delete_Composer = (gcnew System::Windows::Forms::Button());
			this->Insert_Composer = (gcnew System::Windows::Forms::Button());
			this->Load_BDD_Composer = (gcnew System::Windows::Forms::Button());
			this->dataGridViewComposer = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
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
			this->tabPage9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabPage12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			this->tabPage13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewVille))->BeginInit();
			this->tabPage14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewComposer))->BeginInit();
			this->tabPage15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
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
			// Delete_Paiement
			// 
			this->Delete_Paiement->Location = System::Drawing::Point(94, 259);
			this->Delete_Paiement->Name = L"Delete_Paiement";
			this->Delete_Paiement->Size = System::Drawing::Size(89, 38);
			this->Delete_Paiement->TabIndex = 34;
			this->Delete_Paiement->Text = L"DELETE";
			this->Delete_Paiement->UseVisualStyleBackColor = true;
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
			// Insert_Paiement
			// 
			this->Insert_Paiement->Location = System::Drawing::Point(94, 170);
			this->Insert_Paiement->Name = L"Insert_Paiement";
			this->Insert_Paiement->Size = System::Drawing::Size(89, 38);
			this->Insert_Paiement->TabIndex = 32;
			this->Insert_Paiement->Text = L"INSERT";
			this->Insert_Paiement->UseVisualStyleBackColor = true;
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
			this->label21->Size = System::Drawing::Size(86, 13);
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
			// Delete_Stat
			// 
			this->Delete_Stat->Location = System::Drawing::Point(109, 259);
			this->Delete_Stat->Name = L"Delete_Stat";
			this->Delete_Stat->Size = System::Drawing::Size(82, 38);
			this->Delete_Stat->TabIndex = 24;
			this->Delete_Stat->Text = L"DELETE";
			this->Delete_Stat->UseVisualStyleBackColor = true;
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
			// Insert_Stat
			// 
			this->Insert_Stat->Location = System::Drawing::Point(109, 171);
			this->Insert_Stat->Name = L"Insert_Stat";
			this->Insert_Stat->Size = System::Drawing::Size(82, 39);
			this->Insert_Stat->TabIndex = 22;
			this->Insert_Stat->Text = L"INSERT";
			this->Insert_Stat->UseVisualStyleBackColor = true;
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
			// Delete_Stock
			// 
			this->Delete_Stock->Location = System::Drawing::Point(97, 263);
			this->Delete_Stock->Name = L"Delete_Stock";
			this->Delete_Stock->Size = System::Drawing::Size(85, 36);
			this->Delete_Stock->TabIndex = 28;
			this->Delete_Stock->Text = L"DELETE";
			this->Delete_Stock->UseVisualStyleBackColor = true;
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
			// Insert_Stock
			// 
			this->Insert_Stock->Location = System::Drawing::Point(97, 175);
			this->Insert_Stock->Name = L"Insert_Stock";
			this->Insert_Stock->Size = System::Drawing::Size(85, 39);
			this->Insert_Stock->TabIndex = 26;
			this->Insert_Stock->Text = L"INSERT";
			this->Insert_Stock->UseVisualStyleBackColor = true;
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
			// ID_Produit
			// 
			this->ID_Produit->Location = System::Drawing::Point(347, 175);
			this->ID_Produit->Name = L"ID_Produit";
			this->ID_Produit->Size = System::Drawing::Size(141, 20);
			this->ID_Produit->TabIndex = 15;
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
			// DELETE_Commande
			// 
			this->DELETE_Commande->Location = System::Drawing::Point(118, 267);
			this->DELETE_Commande->Name = L"DELETE_Commande";
			this->DELETE_Commande->Size = System::Drawing::Size(81, 34);
			this->DELETE_Commande->TabIndex = 24;
			this->DELETE_Commande->Text = L"DELETE";
			this->DELETE_Commande->UseVisualStyleBackColor = true;
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
			// Insert_Commande
			// 
			this->Insert_Commande->Location = System::Drawing::Point(118, 178);
			this->Insert_Commande->Name = L"Insert_Commande";
			this->Insert_Commande->Size = System::Drawing::Size(81, 39);
			this->Insert_Commande->TabIndex = 22;
			this->Insert_Commande->Text = L"INSERT";
			this->Insert_Commande->UseVisualStyleBackColor = true;
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
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(499, 304);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Personnel";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(234, 283);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(61, 13);
			this->label25->TabIndex = 22;
			this->label25->Text = L"id superieur";
			this->label25->Click += gcnew System::EventHandler(this, &MyForm::label25_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(234, 261);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(55, 13);
			this->label24->TabIndex = 21;
			this->label24->Text = L"id adresse";
			this->label24->Click += gcnew System::EventHandler(this, &MyForm::label24_Click);
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(298, 283);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(181, 20);
			this->textBox22->TabIndex = 20;
			this->textBox22->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox22_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(298, 261);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(181, 20);
			this->textBox7->TabIndex = 19;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// DELETE_Personnel
			// 
			this->DELETE_Personnel->Location = System::Drawing::Point(101, 254);
			this->DELETE_Personnel->Margin = System::Windows::Forms::Padding(2);
			this->DELETE_Personnel->Name = L"DELETE_Personnel";
			this->DELETE_Personnel->Size = System::Drawing::Size(89, 31);
			this->DELETE_Personnel->TabIndex = 18;
			this->DELETE_Personnel->Text = L"DELETE";
			this->DELETE_Personnel->UseVisualStyleBackColor = true;
			this->DELETE_Personnel->Click += gcnew System::EventHandler(this, &MyForm::DELETE_Personnel_Click);
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
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(202, 238);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(91, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Date d\'embauche";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(249, 217);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Prenom";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(262, 191);
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
			this->textBox15->Location = System::Drawing::Point(298, 238);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(181, 20);
			this->textBox15->TabIndex = 10;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox15_TextChanged);
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(298, 169);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(181, 20);
			this->txt_prenom->TabIndex = 7;
			this->txt_prenom->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_prenom_TextChanged);
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(298, 191);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(181, 20);
			this->txt_nom->TabIndex = 6;
			this->txt_nom->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_nom_TextChanged);
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(298, 215);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(181, 20);
			this->txt_id->TabIndex = 5;
			this->txt_id->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_id_TextChanged);
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
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(235, 192);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(254, 20);
			this->textBox2->TabIndex = 14;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
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
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(7, 200);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 37);
			this->button4->TabIndex = 12;
			this->button4->Text = L"UPD";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
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
			this->tabControl1->Location = System::Drawing::Point(1, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(507, 330);
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
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(499, 304);
			this->tabPage9->TabIndex = 8;
			this->tabPage9->Text = L"Taxe";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(280, 254);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(92, 13);
			this->label28->TabIndex = 10;
			this->label28->Text = L"PourcentageTaxe";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(319, 221);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(53, 13);
			this->label27->TabIndex = 9;
			this->label27->Text = L"NomTaxe";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(327, 187);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(45, 13);
			this->label26->TabIndex = 8;
			this->label26->Text = L"ID Taxe";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(378, 247);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(100, 20);
			this->textBox25->TabIndex = 7;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(378, 214);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(100, 20);
			this->textBox24->TabIndex = 6;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(378, 182);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(100, 20);
			this->textBox23->TabIndex = 5;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(16, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(463, 159);
			this->dataGridView1->TabIndex = 4;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(91, 251);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 31);
			this->button8->TabIndex = 3;
			this->button8->Text = L"DEL";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(91, 212);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 33);
			this->button7->TabIndex = 2;
			this->button7->Text = L"UPD";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(91, 171);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 34);
			this->button6->TabIndex = 1;
			this->button6->Text = L"INS";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(7, 182);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(65, 115);
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
			this->tabPage10->Location = System::Drawing::Point(4, 22);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(499, 304);
			this->tabPage10->TabIndex = 9;
			this->tabPage10->Text = L"Adresse";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(389, 269);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(100, 20);
			this->textBox29->TabIndex = 12;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(339, 273);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(40, 13);
			this->label32->TabIndex = 11;
			this->label32->Text = L"ID Ville";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(353, 246);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(27, 13);
			this->label31->TabIndex = 10;
			this->label31->Text = L"Rue";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(336, 224);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(44, 13);
			this->label30->TabIndex = 9;
			this->label30->Text = L"Numéro";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(321, 197);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(59, 13);
			this->label29->TabIndex = 8;
			this->label29->Text = L"ID Adresse";
			this->label29->Click += gcnew System::EventHandler(this, &MyForm::label29_Click);
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(389, 243);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(100, 20);
			this->textBox28->TabIndex = 7;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(389, 217);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(100, 20);
			this->textBox27->TabIndex = 6;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(389, 191);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(100, 20);
			this->textBox26->TabIndex = 5;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(96, 205);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 4;
			this->button12->Text = L"DEL";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(96, 263);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 3;
			this->button11->Text = L"UPD";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(96, 234);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 2;
			this->button10->Text = L"INS";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(19, 197);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(71, 96);
			this->button9->TabIndex = 1;
			this->button9->Text = L"Load BDD";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(8, 7);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(485, 178);
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
			this->tabPage11->Location = System::Drawing::Point(4, 22);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(499, 304);
			this->tabPage11->TabIndex = 10;
			this->tabPage11->Text = L"Paiement";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(272, 283);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(115, 13);
			this->label37->TabIndex = 14;
			this->label37->Text = L"ID Moyen de Paiement";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(307, 257);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(80, 13);
			this->label36->TabIndex = 13;
			this->label36->Text = L"Ref Commande";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(294, 231);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(93, 13);
			this->label35->TabIndex = 12;
			this->label35->Text = L"Montant Paiement";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(310, 206);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(77, 13);
			this->label34->TabIndex = 11;
			this->label34->Text = L"Date Paiement";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(322, 177);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(65, 13);
			this->label33->TabIndex = 10;
			this->label33->Text = L"ID Paiement";
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(393, 276);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(100, 20);
			this->textBox34->TabIndex = 9;
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(393, 254);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(100, 20);
			this->textBox33->TabIndex = 8;
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(393, 228);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(100, 20);
			this->textBox32->TabIndex = 7;
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(393, 200);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(100, 20);
			this->textBox31->TabIndex = 6;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(393, 174);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(100, 20);
			this->textBox30->TabIndex = 5;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(90, 254);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 23);
			this->button16->TabIndex = 4;
			this->button16->Text = L"DEL";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(90, 225);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 3;
			this->button15->Text = L"UPD";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(90, 196);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 2;
			this->button14->Text = L"INS";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(8, 7);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(481, 150);
			this->dataGridView3->TabIndex = 1;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(8, 195);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(76, 102);
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
			this->tabPage12->Location = System::Drawing::Point(4, 22);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(499, 304);
			this->tabPage12->TabIndex = 11;
			this->tabPage12->Text = L"Mode Paiement";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(24, 0);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->Size = System::Drawing::Size(445, 159);
			this->dataGridView6->TabIndex = 9;
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(369, 199);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(100, 20);
			this->textBox36->TabIndex = 6;
			this->textBox36->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox36_TextChanged);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(121, 170);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 23);
			this->button20->TabIndex = 4;
			this->button20->Text = L"DEL";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(121, 228);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 3;
			this->button19->Text = L"UPD";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(121, 199);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 23);
			this->button18->TabIndex = 2;
			this->button18->Text = L"INS";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(24, 165);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 132);
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
			this->tabPage13->Location = System::Drawing::Point(4, 22);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Padding = System::Windows::Forms::Padding(3);
			this->tabPage13->Size = System::Drawing::Size(499, 304);
			this->tabPage13->TabIndex = 12;
			this->tabPage13->Text = L"Ville";
			this->tabPage13->UseVisualStyleBackColor = true;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(326, 207);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(51, 13);
			this->label45->TabIndex = 9;
			this->label45->Text = L"Nom Ville";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(337, 178);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(40, 13);
			this->label44->TabIndex = 8;
			this->label44->Text = L"ID Ville";
			// 
			// textBox43
			// 
			this->textBox43->Location = System::Drawing::Point(383, 204);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(100, 20);
			this->textBox43->TabIndex = 7;
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(383, 175);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(100, 20);
			this->textBox42->TabIndex = 6;
			// 
			// dataGridViewVille
			// 
			this->dataGridViewVille->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewVille->Location = System::Drawing::Point(8, 7);
			this->dataGridViewVille->Name = L"dataGridViewVille";
			this->dataGridViewVille->Size = System::Drawing::Size(481, 160);
			this->dataGridViewVille->TabIndex = 5;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(113, 231);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(75, 23);
			this->button24->TabIndex = 4;
			this->button24->Text = L"DEL";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(113, 202);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 23);
			this->button23->TabIndex = 3;
			this->button23->Text = L"UPD";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(113, 173);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 23);
			this->button22->TabIndex = 2;
			this->button22->Text = L"INS";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(27, 173);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(80, 124);
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
			this->tabPage14->Location = System::Drawing::Point(4, 22);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Padding = System::Windows::Forms::Padding(3);
			this->tabPage14->Size = System::Drawing::Size(499, 304);
			this->tabPage14->TabIndex = 13;
			this->tabPage14->Text = L"Composer";
			this->tabPage14->UseVisualStyleBackColor = true;
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(381, 280);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(100, 20);
			this->textBox41->TabIndex = 17;
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(381, 258);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(100, 20);
			this->textBox40->TabIndex = 16;
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(381, 234);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(100, 20);
			this->textBox39->TabIndex = 15;
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(381, 208);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(100, 20);
			this->textBox38->TabIndex = 14;
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(381, 185);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(100, 20);
			this->textBox37->TabIndex = 13;
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(381, 154);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(100, 20);
			this->textBox35->TabIndex = 11;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(276, 258);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(43, 13);
			this->label43->TabIndex = 10;
			this->label43->Text = L"Couleur";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(276, 182);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(50, 13);
			this->label42->TabIndex = 9;
			this->label42->Text = L"Prix UHT";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(276, 235);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(92, 13);
			this->label41->TabIndex = 8;
			this->label41->Text = L"Pourcentage TVA";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(276, 287);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(76, 13);
			this->label40->TabIndex = 7;
			this->label40->Text = L"Nombre Article";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(276, 211);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(80, 13);
			this->label39->TabIndex = 6;
			this->label39->Text = L"Ref Commande";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(276, 154);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(57, 13);
			this->label38->TabIndex = 5;
			this->label38->Text = L"Reference";
			this->label38->Click += gcnew System::EventHandler(this, &MyForm::label38_Click);
			// 
			// Uptade_Composer
			// 
			this->Uptade_Composer->Location = System::Drawing::Point(106, 248);
			this->Uptade_Composer->Name = L"Uptade_Composer";
			this->Uptade_Composer->Size = System::Drawing::Size(75, 23);
			this->Uptade_Composer->TabIndex = 4;
			this->Uptade_Composer->Text = L"UPDATE";
			this->Uptade_Composer->UseVisualStyleBackColor = true;
			// 
			// Delete_Composer
			// 
			this->Delete_Composer->Location = System::Drawing::Point(106, 201);
			this->Delete_Composer->Name = L"Delete_Composer";
			this->Delete_Composer->Size = System::Drawing::Size(75, 23);
			this->Delete_Composer->TabIndex = 3;
			this->Delete_Composer->Text = L"DELETE";
			this->Delete_Composer->UseVisualStyleBackColor = true;
			// 
			// Insert_Composer
			// 
			this->Insert_Composer->Location = System::Drawing::Point(106, 154);
			this->Insert_Composer->Name = L"Insert_Composer";
			this->Insert_Composer->Size = System::Drawing::Size(75, 23);
			this->Insert_Composer->TabIndex = 2;
			this->Insert_Composer->Text = L"INSERT";
			this->Insert_Composer->UseVisualStyleBackColor = true;
			// 
			// Load_BDD_Composer
			// 
			this->Load_BDD_Composer->Location = System::Drawing::Point(7, 154);
			this->Load_BDD_Composer->Name = L"Load_BDD_Composer";
			this->Load_BDD_Composer->Size = System::Drawing::Size(75, 23);
			this->Load_BDD_Composer->TabIndex = 1;
			this->Load_BDD_Composer->Text = L"Load_BDD_Composer";
			this->Load_BDD_Composer->UseVisualStyleBackColor = true;
			// 
			// dataGridViewComposer
			// 
			this->dataGridViewComposer->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewComposer->Location = System::Drawing::Point(6, 3);
			this->dataGridViewComposer->Name = L"dataGridViewComposer";
			this->dataGridViewComposer->Size = System::Drawing::Size(481, 131);
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
			this->tabPage15->Location = System::Drawing::Point(4, 22);
			this->tabPage15->Name = L"tabPage15";
			this->tabPage15->Padding = System::Windows::Forms::Padding(3);
			this->tabPage15->Size = System::Drawing::Size(499, 304);
			this->tabPage15->TabIndex = 14;
			this->tabPage15->Text = L"Remise";
			this->tabPage15->UseVisualStyleBackColor = true;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(278, 200);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(106, 13);
			this->label47->TabIndex = 8;
			this->label47->Text = L"Pourcentage Remise";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(319, 173);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(65, 13);
			this->label46->TabIndex = 7;
			this->label46->Text = L"ID Paiement";
			// 
			// textBox45
			// 
			this->textBox45->Location = System::Drawing::Point(390, 197);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(100, 20);
			this->textBox45->TabIndex = 6;
			// 
			// textBox44
			// 
			this->textBox44->Location = System::Drawing::Point(390, 170);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(100, 20);
			this->textBox44->TabIndex = 5;
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(123, 229);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(75, 23);
			this->button28->TabIndex = 4;
			this->button28->Text = L"DEL";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(123, 200);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(75, 23);
			this->button27->TabIndex = 3;
			this->button27->Text = L"UPD";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(123, 168);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(75, 23);
			this->button26->TabIndex = 2;
			this->button26->Text = L"INS";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(32, 155);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(85, 127);
			this->button25->TabIndex = 1;
			this->button25->Text = L"Load BDD";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(8, 7);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(481, 142);
			this->dataGridView4->TabIndex = 0;
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
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage10->ResumeLayout(false);
			this->tabPage10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage11->ResumeLayout(false);
			this->tabPage11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabPage12->ResumeLayout(false);
			this->tabPage12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			this->tabPage13->ResumeLayout(false);
			this->tabPage13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewVille))->EndInit();
			this->tabPage14->ResumeLayout(false);
			this->tabPage14->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewComposer))->EndInit();
			this->tabPage15->ResumeLayout(false);
			this->tabPage15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
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