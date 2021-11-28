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
		NS_Comp_Mappage::CL_Mapping_Remise^ Mapp_remise;
		NS_Comp_Mappage::CL_Mapping_Taxe^ Mapp_taxe;
	
	
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
		void upd_une_adresse(int, int, System::String^, System::String^, int , int );
		void ins_une_adresse(int, System::String^, System::String^, int, int);
		void del_une_adresse(int);





		// Nous ajoutons nous fonctions de service qui utilisera nous m�thode du CAD et de nos classe de mappage
		//System::Data::DataSet^ sel (System::String^);


	};




}
 