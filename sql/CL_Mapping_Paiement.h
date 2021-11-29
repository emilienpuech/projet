#pragma once
namespace NS_Comp_Mappage
{
	ref class CL_Mapping_Paiement
	{
	private:
		int id;
		System::String^ moyen_de_paiment;


	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);

		void setid(int id);
		void setmoyen_de_paiment(System::String^ moyen_de_paiment);
	};
}