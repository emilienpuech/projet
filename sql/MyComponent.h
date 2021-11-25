#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Diagnostics;


namespace sql {

	/// <summary>
	/// Description résumée de MyComponent
	/// </summary>
	public ref class MyComponent :  public System::ComponentModel::Component
	{
	public:
		MyComponent(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		MyComponent(System::ComponentModel::IContainer ^container)
		{
			/// <summary>
			/// Requis pour la prise en charge du Concepteur de composition de classes Windows.Forms
			/// </summary>

			container->Add(this);
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyComponent()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			components = gcnew System::ComponentModel::Container();
		}
#pragma endregion
	};
}
