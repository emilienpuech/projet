//CLservice.CPP***************************************************************************************
#include "pch.h"
#include "CLservices.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
	this->Mapp_client = gcnew NS_Comp_Mappage::CL_Mapping_Client();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::select_tout_nos_client(System::String^ dataTableName)
{

	System::String^ sql;
	sql = this->Mapp_client->Select();
	return this->oCad->getRows(sql, dataTableName);

}

void NS_Comp_Svc::CLservices::ins_un_client(System::String^ nom, System::String^ prenom, System::String^ date)
{
	System::String^ sql;

	this->Mapp_client->setNom(nom);
	this->Mapp_client->setPrenom(prenom);
	this->Mapp_client->setdate_de_naissance(date);
	sql = this->Mapp_client->Insert();

	this->oCad->actionRows(sql);
}


void NS_Comp_Svc::CLservices::upd_un_client(int id, System::String^ nom, System::String^ prenom, System::String^ date)
{
	System::String^ sql;
	this->Mapp_client->setid(id);
	this->Mapp_client->setNom(nom);
	this->Mapp_client->setPrenom(prenom);
	this->Mapp_client->setdate_de_naissance(date);
	sql = this->Mapp_client->Update();

	this->oCad->actionRows(sql);
}


void NS_Comp_Svc::CLservices::del_un_client(int id)
{
	System::String^ sql;

	this->Mapp_client->setid(id);
	sql = this->Mapp_client->Delete();

	this->oCad->actionRows(sql);
}



int NS_Comp_Svc::CLservices::convert_string_to_int(System::String^ int_1)
{
	return System::Int32::Parse(int_1);
}


/*
*	Exemple méthode de service du Select Execute Query 

System::Data::DataSet^ NS_Comp_Svc::CLservices::METHODE SERVICE(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->CLASSE DE MAPPAGE->Select();
	return this->oCad->getRows(sql, dataTableName);
}




// Exemple méthode de service du Execute non query

void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ nom, System::String^ prenom)
{
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}

*/
