#pragma once

using  namespace System;
namespace NS_Comp_Mappage
{
    ref class CL_Mapping_Ville
    {
    private:
        int id;
        System::String^ nom_ville;




    public:
        System::String^ Select(void);
        System::String^ Insert(void);
        System::String^ Delete(void);
        System::String^ Update(void);
        void setid(int idville);
        void setnom_ville(System::String^ nom_ville);


    };

};