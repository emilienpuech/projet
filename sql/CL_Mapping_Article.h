#pragma once
namespace Ns_comp_Mappage
{
	ref class CL_Mapping_Article
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ nom;
		System::String^ quantite_de_stock;
		System::String^ prix_produit;
		System::String^ seuil_reapprovisionnement;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);



		void setnom(System::String^);
		void setquantite_de_stock(System::String^);
		void setprix_produit(System::String^);
		void setseuilreapprovisionnement(System::String^ seuilreapprovisionnement);
		
		
	};
}
