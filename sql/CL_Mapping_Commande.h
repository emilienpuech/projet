#pragma once

namespace NS_Comp_Mappage
{
	ref class CL_Mapping_Commande
	{
	private:
		
		System::String^ RefCommande;
		System::String^ DateEmission;
		System::String^ DateLivraison;
		int numeroclient;
		

	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);


		void setRefCommande(System::String^ RefCommande);
		void setnumeroclient(int numeroclient);
		void setDateLivraison(System::String^ DateLivraison);
		void setDateEmission(System::String^ DateEmission);
		
		

	};

}
