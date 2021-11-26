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

	
	
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		void ajouterUnePersonne(System::String^, System::String^);
		

		// Nous ajoutons nous fonctions de service qui utilisera nous méthode du CAD et de nos classe de mappage


	};




}
