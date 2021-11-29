#pragma once
using  namespace System;
namespace NS_Comp_Mappage
{
    ref class CL_Mapping_Taxe
    {
    private:
        int id;
        System::String^ nom_Taxe;
        float pourcentageTaxe;
        


    public:
        System::String^ Select(void);
        System::String^ Insert(void);
        System::String^ Delete(void);
        System::String^ Update(void);
        void setid(int id);
        void setNom_Taxe(System::String^ nom_Taxe);
        void setPourcentageTaxe(float pourcentageTaxe);
        
    };
}