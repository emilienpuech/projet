//CLservice.CPP***************************************************************************************
#include "pch.h"
#include "CLservices.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->Mapp_client = gcnew NS_Comp_Mappage::CL_Mapping_Client();
	this->Mapp_adresse = gcnew NS_Comp_Mappage::CL_Mapping_Adresse();
	this->Mapp_employer = gcnew NS_Comp_Mappage::CL_Mapping_Employer();
	this->Mapp_remise = gcnew NS_Comp_Mappage::CL_Mapping_Remise();
	this->Mapp_taxe = gcnew NS_Comp_Mappage::CL_Mapping_Taxe();
	this->Mapp_commande = gcnew NS_Comp_Mappage::CL_Mapping_Commande();
	
}
int NS_Comp_Svc::CLservices::convert_string_to_int(System::String^ int_1)
{
	return System::Int32::Parse(int_1);
}


/*
	fait

Client 
Employer
Mode de paiement
Article
Adresse (ajouter les villes)
Remise
Mode Paiement

A faire




Taxe
Commande
Satistique


*/



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
}// Employer 






//ADRESSE
System::Data::DataSet^ NS_Comp_Svc::CLservices::select_tout_nos_adresse(System::String^ dataTableName)
{

	System::String^ sql;
	sql = this->Mapp_adresse->Select();
	return this->oCad->getRows(sql, dataTableName);

}


void NS_Comp_Svc::CLservices::ins_une_adresse(int numero , System::String^ rue, System::String^ type_adresse, int numero_client, int id_ville)
{
	System::String^ sql;

	this->Mapp_adresse->setnumero(numero);
	this->Mapp_adresse->setrue(rue);
	this->Mapp_adresse->settype_adresse(type_adresse);
	this->Mapp_adresse->setnumero_client(numero_client);
	this->Mapp_adresse->setid_ville(id_ville);

	sql = this->Mapp_adresse->Insert();

	this->oCad->actionRows(sql);
}


void NS_Comp_Svc::CLservices::upd_une_adresse(int id , int numero, System::String^ rue, System::String^ type_adresse, int numero_client, int id_ville)
{
	System::String^ sql;
	this->Mapp_adresse->setid(id);
	this->Mapp_adresse->setnumero(numero);
	this->Mapp_adresse->setrue(rue);
	this->Mapp_adresse->settype_adresse(type_adresse);
	this->Mapp_adresse->setnumero_client(numero_client);
	this->Mapp_adresse->setid_ville(id_ville);

	sql = this->Mapp_adresse->Update();

	this->oCad->actionRows(sql);
}


void NS_Comp_Svc::CLservices::del_une_adresse(int id)
{
	System::String^ sql;

	this->Mapp_adresse->setid(id);
	sql = this->Mapp_adresse->Delete();

	this->oCad->actionRows(sql);
}// ADRESSE 





// PAIEMENT
System::Data::DataSet^ NS_Comp_Svc::CLservices::select_tout_nos_mode_de_paiement(System::String^ dataTableName){
	System::String^ sql;
	sql = this->Mapp_paiement->Select();
	return this->oCad->getRows(sql, dataTableName);

}


void NS_Comp_Svc::CLservices::ins_un_mode_de_paiement(System::String^ mode_de_paiement)
{
	System::String^ sql;

	this->Mapp_paiement->setmoyen_de_paiment(mode_de_paiement);

	sql = this->Mapp_paiement->Insert();

	this->oCad->actionRows(sql);
}


void NS_Comp_Svc::CLservices::upd_un_mode_de_paiement(int id,System::String^ mode_de_paiement)
{
	System::String^ sql;
	this->Mapp_paiement->setid(id);
	this->Mapp_paiement->setmoyen_de_paiment(mode_de_paiement);
	sql = this->Mapp_paiement->Update();

	this->oCad->actionRows(sql);
}


void NS_Comp_Svc::CLservices::del_un_mode_de_paiement(int id)
{
	System::String^ sql;

	this->Mapp_paiement->setid(id);
	sql = this->Mapp_paiement->Delete();

	this->oCad->actionRows(sql);
}// PAIEMENT






// Article
System::Data::DataSet^ NS_Comp_Svc::CLservices::select_tout_nos_articles(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->Mapp_article->Select();
	return this->oCad->getRows(sql, dataTableName);

}


void NS_Comp_Svc::CLservices::ins_un_article(System::String^ nom, int quantite_de_stock, int prix_produit, int seuil_reapprovisionnement)
{
	System::String^ sql;

	this->Mapp_article->setnom(nom);
	this->Mapp_article->setquantite_de_stock(quantite_de_stock);
	this->Mapp_article->setprix_produit(prix_produit);
	this->Mapp_article->setseuilreapprovisionnement(seuil_reapprovisionnement);

	sql = this->Mapp_article->Insert();

	this->oCad->actionRows(sql);
}


void NS_Comp_Svc::CLservices::upd_un_article(int id, System::String^ nom, int quantite_de_stock, int prix_produit, int seuil_reapprovisionnement)
{
	System::String^ sql;

	this->Mapp_article->setid(id);
	this->Mapp_article->setnom(nom);
	this->Mapp_article->setquantite_de_stock(quantite_de_stock);
	this->Mapp_article->setprix_produit(prix_produit);
	this->Mapp_article->setseuilreapprovisionnement(seuil_reapprovisionnement);

	sql = this->Mapp_article->Update();

	this->oCad->actionRows(sql);
}


void NS_Comp_Svc::CLservices::del_un_article(int id)
{
	System::String^ sql;

	this->Mapp_article->setid(id);
	sql = this->Mapp_article->Delete();

	this->oCad->actionRows(sql);
}// Article




//Remise 

System::Data::DataSet^ NS_Comp_Svc::CLservices::select_tout_nos_remises(System::String^ dataTableName) {
	System::String^ sql;
	sql = this->Mapp_remise->Select();
	return this->oCad->getRows(sql, dataTableName);

}


void NS_Comp_Svc::CLservices::ins_une_remise(System::String^nomremise, int id, float pourcentageRemise)
{
	System::String^ sql;
	this->Mapp_remise->setid(id);
	this->Mapp_remise->setnomRemise(nomremise);
	this->Mapp_remise->setPourcentageRemise(pourcentageRemise);

	sql = this->Mapp_remise->Insert();

	this->oCad->actionRows(sql);
}


void NS_Comp_Svc::CLservices::upd_une_remise(int id, System::String^ nomremise, float pourcentageRemise)
{
	System::String^ sql;
	this->Mapp_remise->setid(id);
	this->Mapp_remise->setnomRemise(nomremise);
	this->Mapp_remise->setPourcentageRemise(pourcentageRemise);
	sql = this->Mapp_remise->Update();

	this->oCad->actionRows(sql);
}


void NS_Comp_Svc::CLservices::del_une_remise(int id){
	System::String^ sql;

	this->Mapp_remise->setid(id);
	sql = this->Mapp_remise->Delete();

	this->oCad->actionRows(sql);
}


//Commande

System::Data::DataSet^ NS_Comp_Svc::CLservices::select_toutes_nos_commandes(System::String^ dataTableName) {

	System::String^ sql;
	sql = this->Mapp_commande->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ins_une_commande(System::String^, int RefCommande) {

	System::String^ sql;

	this->Mapp_commande->setRefCommande(RefCommande);

	sql = this->Mapp_commande->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::upd_une_commande(int RefCommande, System::String^ DateEmission, System::String^ DateLivraison ) {

	System::String^ sql;
	this->Mapp_commande->setRefCommande(RefCommande);
	this->Mapp_commande->setDateEmission(DateEmission);
	this->Mapp_commande->setDateLivraison(DateLivraison);

	sql = this->Mapp_commande->Update();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::del_une_commande(int RefCommande) {

	System::String^ sql;
	this->Mapp_commande->setRefCommande(RefCommande);

	sql = this->Mapp_commande->Delete();

	this->oCad->actionRows(sql);
}

//Ville

System::Data::DataSet^ NS_Comp_Svc::CLservices::select_toutes_nos_villes(System::String^ dataTableName) {

	System::String^ sql;
	sql = this->Mapp_ville->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ins_une_ville(System::String^ nom_ville , int idville ) {

	System::String^ sql;

	this->Mapp_ville->setid(idville);
	this->Mapp_ville->setnom_ville(nom_ville); 

	sql = this->Mapp_ville->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::upd_une_ville(int idville, System::String^ nom_ville) {

	System::String^ sql;
	this->Mapp_ville->setid(idville);
	this->Mapp_ville->setnom_ville(nom_ville);
	
	sql = this->Mapp_ville->Update();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::del_une_ville(int idville, System::String^ nom_ville) {

	System::String^ sql;
	this->Mapp_ville->setid(idville);
	this->Mapp_ville->setnom_ville(nom_ville);

	sql = this->Mapp_ville->Delete();

	this->oCad->actionRows(sql);
}

//Mode de paiement

System::Data::DataSet^ NS_Comp_Svc::CLservices::select_tout_nos_ModePaiement(System::String^ dataTableName) {

	System::String^ sql;
	sql = this->Mapp_modepaiement->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ins_un_mode_paiement(int idmodepaiement, System::String^ ModePaiement) {

	System::String^ sql;

	this->Mapp_modepaiement->setid(idmodepaiement);
	this->Mapp_modepaiement->setmodepaiement(ModePaiement);

	sql = this->Mapp_modepaiement->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::upd_un_mode_paiement(int idmodepaiement, System::String^ ModePaiement) {

	System::String^ sql;
	this->Mapp_modepaiement->setid(idmodepaiement);
	this->Mapp_modepaiement->setmodepaiement(ModePaiement);

	sql = this->Mapp_modepaiement->Update();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::del_un_mode_paiement(int idmodepaiement, System::String^ ModePaiement) {

	System::String^ sql;
	this->Mapp_modepaiement->setid(idmodepaiement);
	this->Mapp_modepaiement->setmodepaiement(ModePaiement);

	sql = this->Mapp_modepaiement->Delete();

	this->oCad->actionRows(sql);
}

