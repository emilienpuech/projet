#pragma once
namespace Ns_comp_Mappage
{
	ref class CL_Mapping_Employer
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ nom;
		System::String^ prenom;
		System::String^ date_Embauche;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);



		void setNom(System::String^);
		void setPrenom(System::String^);
		void setdate_Embauche(System::String^ date_Embauche);
		
		
	};

}
