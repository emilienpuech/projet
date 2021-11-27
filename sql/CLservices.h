//CLservice.h********************************************************************************
#pragma once
#include "exemplemap.h"
#include "CAD.h"
#include "Cl_Mapping_Client.h"


namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad; // CAD
								   
		
		// Classe de mappage 
		NS_Comp_Mappage::CLmapTB^ oMappTB;
		NS_Comp_Mappage::CL_Mapping_Client^ Mapp_client;

	
	
	public:
		CLservices(void);
		System::Data::DataSet^ select_tout_nos_client(System::String^);
		void ajouterUnePersonne(System::String^, System::String^);
		

		// Nous ajoutons nous fonctions de service qui utilisera nous méthode du CAD et de nos classe de mappage
		System::Data::DataSet^ sel (System::String^);


	};




}
 