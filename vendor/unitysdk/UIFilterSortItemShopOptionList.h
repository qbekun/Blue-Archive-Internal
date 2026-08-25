#pragma once
#include "unitysdk.h"

class ShopResourceFilterTabController;

#define UIFILTERSORTITEMSHOPOPTIONLIST_LOADANDSETTABS_OFFSET UNITYSDK_OFFSET(0xAFD1F0)
#define UIFILTERSORTITEMSHOPOPTIONLIST_RESTOREFILTER_OFFSET UNITYSDK_OFFSET(0xAFD4C0)
#define UIFILTERSORTITEMSHOPOPTIONLIST_RESETALL_OFFSET UNITYSDK_OFFSET(0xAFD590)
#define UIFILTERSORTITEMSHOPOPTIONLIST_SAVEFILTER_OFFSET UNITYSDK_OFFSET(0xAFD7A0)
#define UIFILTERSORTITEMSHOPOPTIONLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xAFD870)
#define UIFILTERSORTITEMSHOPOPTIONLIST_PREINITIALIZEFORSHOP_OFFSET UNITYSDK_OFFSET(0xAFD880)
#define UIFILTERSORTITEMSHOPOPTIONLIST_GET_FILTERTABS_OFFSET UNITYSDK_OFFSET(0xAFD410)

	inline static constexpr unsigned int UIFilterSortItemShopOptionList_TypeDefinitionIndex = 8167;

	class UIFilterSortItemShopOptionList : public Il2CppObject
	{
	public:
		ShopResourceFilterTabController* resourceController; // 0x20
		Il2CppObject* filterTabList; // 0x28

		::System::Void LoadAndSetTabs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTITEMSHOPOPTIONLIST_LOADANDSETTABS_OFFSET))(nullptr);
		}

		::System::Void RestoreFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTITEMSHOPOPTIONLIST_RESTOREFILTER_OFFSET))(nullptr);
		}

		::System::Void ResetAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTITEMSHOPOPTIONLIST_RESETALL_OFFSET))(nullptr);
		}

		::System::Void SaveFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTITEMSHOPOPTIONLIST_SAVEFILTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTITEMSHOPOPTIONLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PreInitializeForShop(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTITEMSHOPOPTIONLIST_PREINITIALIZEFORSHOP_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_FilterTabs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTITEMSHOPOPTIONLIST_GET_FILTERTABS_OFFSET))(nullptr);
		}

	};

