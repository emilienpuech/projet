//CLservice.CPP***************************************************************************************
#include "pch.h"
#include "CLservices.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
	this->Mapp_client = gcnew NS_Comp_Mappage::CL_Mapping_Client();
}
int NS_Comp_Svc::CLservices::convert_string_to_int(System::String^ int_1)
{
	return System::Int32::Parse(int_1);
}


// CLIENT



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
}// CLIENT







// Employer 
System::Data::DataSet^ NS_Comp_Svc::CLservices::select_tout_nos_employer(System::String^ dataTableName)
{

	System::String^ sql;
	sql = this->Mapp_employer->Select();
	return this->oCad->getRows(sql, dataTableName);

}


void NS_Comp_Svc::CLservices::ins_un_employer(System::String^ nom, System::String^ prenom, System::String^ date, int id_adresse, int id_sup)
{
	System::String^ sql;

	this->Mapp_employer->setNom(nom);
	this->Mapp_employer->setPrenom(prenom);
	this->Mapp_employer->setdate_Embauche(date);
	this->Mapp_employer->setid_adresse(id_adresse);
	this->Mapp_employer->setid_superieur(id_sup);

	sql = this->Mapp_employer->Insert();

	this->oCad->actionRows(sql);
}


void NS_Comp_Svc::CLservices::upd_un_employer(int id, System::String^ nom, System::String^ prenom, System::String^ date, int id_adresse, int id_sup)
{
	System::String^ sql;
	this->Mapp_employer->setNom(nom);
	this->Mapp_employer->setPrenom(prenom);
	this->Mapp_employer->setdate_Embauche(date);
	this->Mapp_employer->setid_adresse(id_adresse);
	this->Mapp_employer->setid_superieur(id_sup);

	sql = this->Mapp_employer->Update();

	this->oCad->actionRows(sql);
}


void NS_Comp_Svc::CLservices::del_un_employer(int id)
{
	System::String^ sql;

	this->Mapp_employer->setid(id);
	sql = this->Mapp_employer->Delete();

	this->oCad->actionRows(sql);
}

// Employer 






