#pragma once
namespace NS_Comp_Mappage
{
	ref class CL_Mapping_Paiement
	{
	private:
		int id;
		System::String^ date_de_paiment;
		int montantpaiement;
		System::String^ refcommande;
		int idmoyenpaiement;


	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);

		void setid(int id);
		void setmoyen_de_paiment(System::String^ date_de_paiment);
		void setmontantpaiement(int montantpaiement);
		void setrefcommande(System::String^ refcommande);
		void setidmoyenpaiement(int idmoyenpaiement);
	};
}