//CLservice.h********************************************************************************
#pragma once
#include "CAD.h"

#include "Cl_Mapping_Client.h"
#include "CL_Mapping_Employer.h"
#include "CL_Mapping_Adresse.h"
#include "CL_Mapping_Article.h"
#include "CL_Mapping_Beneficier.h"
#include "CL_Mapping_Commande.h"
#include "CL_Mapping_Composer.h"
#include "CL_Mapping_Paiement.h"
#include "CL_Mapping_Remise.h"
#include "CL_Mapping_Taxe.h"
#include "CL_Mapping_Ville.h"




namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad; // CAD


		// Classe de mappage 
		NS_Comp_Mappage::CL_Mapping_Client^ Mapp_client;
		NS_Comp_Mappage::CL_Mapping_Employer^ Mapp_employer;
		NS_Comp_Mappage::CL_Mapping_Adresse^ Mapp_adresse;
		NS_Comp_Mappage::CL_Mapping_Remise^ Mapp_remise; // a faire 
		NS_Comp_Mappage::CL_Mapping_Taxe^ Mapp_taxe; //     a faire 
		NS_Comp_Mappage::CL_Mapping_Paiement^ Mapp_paiement;
		NS_Comp_Mappage::CL_Mapping_Article^ Mapp_article;
		NS_Comp_Mappage::CL_Mapping_Commande^ Mapp_commande;


	public:
		CLservices(void);

		int convert_string_to_int(System::String^);

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
		void upd_une_commande(int RefCommande, System::String^);
		void ins_une_commande(System::String^, int RefCommande);
		void del_une_commande(int);


		// Nous ajoutons nous fonctions de service qui utilisera nous méthode du CAD et de nos classe de mappage
		//System::Data::DataSet^ sel (System::String^);


	};




}
 