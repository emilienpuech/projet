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
			this->SuspendLayout();
			// 
			// MyForm
			// 
			this->ClientSize = System::Drawing::Size(707, 300);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load_1);
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
private: System::Void MyForm_Load_1(System::Object^ sender, System::EventArgs^ e) {
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