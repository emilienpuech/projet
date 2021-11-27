#pragma once
namespace NS_Comp_Mappage
{
	ref class CL_Mapping_Employer
	{
	private:
		System::String^ sSql;
		int id;
		System::String^ nom;
		System::String^ prenom;
		System::String^ date_Embauche;
		int id_adresse;
		int id_superieur;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);


		void setid(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setdate_Embauche(System::String^ date_Embauche);
		void setid_adresse(int id_adresse);
		void setid_superieur(int id_superieur);
		
	};

}
