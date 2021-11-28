//CL_Mapping_Client.h*********************************************************************************
#pragma once
namespace NS_Comp_Mappage
{
	ref class CL_Mapping_Client
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ nom;
		System::String^ prenom;
		System::String^ date_de_naissance; // formater la string pour correspondre aux DATE en SQL
		// YYYY-MM-DD format du string en SQL

	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);


		void setid(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setdate_de_naissance(System::String^);
		
	};
}