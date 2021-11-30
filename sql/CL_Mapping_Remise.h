#pragma once
using  namespace System;
namespace NS_Comp_Mappage
{
    ref class CL_Mapping_Remise
    {
    private:

        int ID_Paiement;
        System::String^ nomRemise;
        float pourcentageRemise;
        int RefCommande;
       


    public:
        System::String^ Select(void);
        System::String^ Insert(void);
        System::String^ Delete(void);
        System::String^ Update(void);
        void setid(int id);
        void setnomRemise(System::String^ nomRemise);
        void setPourcentageRemise(float pourcentageRemise);
       

    };
}