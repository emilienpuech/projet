#pragma once
using  namespace System;
namespace NS_Comp_Mappage
{
    ref class CL_Mapping_Remise
    {
    private:
        System::String^ nomRemise;
        int pourcentageRemise;
        int Id_paiement;
        int ref_Commande;


    public:
        System::String^ Select(void);
        System::String^ Insert(void);
        System::String^ Delete(void);
        System::String^ Update(void);
        void setID_paiement(int id);

    };
}