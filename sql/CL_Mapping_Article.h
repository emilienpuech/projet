#pragma once
namespace NS_Comp_Mappage
{
	ref class CL_Mapping_Article
	{
	private:
		System::String^ sSql;
		int id;
		System::String^ nom;
		int quantite_de_stock;
		int prix_produit;
		int seuil_reapprovisionnement;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);


		void setid(int id);
		void setnom(System::String^ nom);
		void setquantite_de_stock(int quantite_de_stock);
		void setprix_produit(int prix_produit);
		void setseuilreapprovisionnement(int seuil_reapprovisionnement);
		
		
	};
}
