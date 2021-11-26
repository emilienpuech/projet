
//CLmap.CPP*****************************************************************************************
#include "pch.h"
#include "CL_Mapping_Client.h"



System::String^ NS_Comp_Mappage::CL_Mapping_Client::Select(void)
{
	return"SELECT [numeroClient], [Nom], [Prenom], [DateNaissance] FROM [projetpoo].[dbo].[Client];";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Client::Insert(void)
{
		return "INSERT INTO [projetpoo].[dbo].[Client] ([Nom], [Prenom], [DateNaissance]) VALUES('" + this->nom + "','" + this->prenom + "','" + this->date_de_naissance + "');";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Client::Delete(void)
{
	return "DELETE FROM [projetpoo].[dbo].[Client] WHERE numeroClient = "+ this->Id +";";
}

System::String^ NS_Comp_Mappage::CL_Mapping_Client::Update(void)
{
	return;
}





/*
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
		System::String^ date_de_naissance;

	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);

		void setId(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setdate_de_naissance(System::String^);

	};
}

*/