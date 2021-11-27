//CLservice.h********************************************************************************
#pragma once
#include "exemplemap.h"
#include "CAD.h"
#include "Cl_Mapping_Client.h"
#include "CL_Mapping_Employer.h"



namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad; // CAD
								   
		
		// Classe de mappage 
		NS_Comp_Mappage::CLmapTB^ oMappTB;
		NS_Comp_Mappage::CL_Mapping_Client^ Mapp_client;
		NS_Comp_Mappage::CL_Mapping_Employer^ Mapp_employer;

	
	
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


		// Nous ajoutons nous fonctions de service qui utilisera nous méthode du CAD et de nos classe de mappage
		//System::Data::DataSet^ sel (System::String^);


	};




}
 