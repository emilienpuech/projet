#pragma once

namespace NS_Comp_Mappage
{
	ref class CL_Mapping_Commande
	{
	private:
		
		int RefCommande;
		System::String^ DateEmission;
		System::String^ DateLivraison;
		

	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);


		void setRefCommande(int RefCommande);
		void setDateEmission(System::String^ DateEmission);
		void setDateLivraison(System::String^ DateLivraison);
		

	};

}
