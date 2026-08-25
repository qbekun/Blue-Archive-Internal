#pragma once
#include "unitysdk.h"

namespace MX::Data { class CraftType; }

#define UIFILTERSORTNORMALCRAFTOPTIONLIST_RESTOREFILTER_OFFSET UNITYSDK_OFFSET(0xAFE5A0)
#define UIFILTERSORTNORMALCRAFTOPTIONLIST_LOADANDSETTABS_OFFSET UNITYSDK_OFFSET(0xAFE740)
#define UIFILTERSORTNORMALCRAFTOPTIONLIST_RESETALL_OFFSET UNITYSDK_OFFSET(0xAFEA10)
#define UIFILTERSORTNORMALCRAFTOPTIONLIST_GET_FILTERTABS_OFFSET UNITYSDK_OFFSET(0xAFE960)
#define UIFILTERSORTNORMALCRAFTOPTIONLIST_PREINITIALIZEFORCRAFT_OFFSET UNITYSDK_OFFSET(0xAFECD0)
#define UIFILTERSORTNORMALCRAFTOPTIONLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xAFEE80)
#define UIFILTERSORTNORMALCRAFTOPTIONLIST_SAVEFILTER_OFFSET UNITYSDK_OFFSET(0xAFEE90)

	inline static constexpr unsigned int UIFilterSortNormalCraftOptionList_TypeDefinitionIndex = 8171;

	class UIFilterSortNormalCraftOptionList : public Il2CppObject
	{
	public:
		::MX::Data::CraftType* craftType; // 0x20
		Il2CppObject* filterTabList; // 0x28

		::System::Void RestoreFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTNORMALCRAFTOPTIONLIST_RESTOREFILTER_OFFSET))(nullptr);
		}

		::System::Void LoadAndSetTabs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTNORMALCRAFTOPTIONLIST_LOADANDSETTABS_OFFSET))(nullptr);
		}

		::System::Void ResetAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTNORMALCRAFTOPTIONLIST_RESETALL_OFFSET))(nullptr);
		}

		Il2CppObject* get_FilterTabs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTNORMALCRAFTOPTIONLIST_GET_FILTERTABS_OFFSET))(nullptr);
		}

		::System::Void PreInitializeForCraft(::MX::Data::CraftType* arg)
		{
			((::System::Void(*)(::MX::Data::CraftType*, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTNORMALCRAFTOPTIONLIST_PREINITIALIZEFORCRAFT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTNORMALCRAFTOPTIONLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SaveFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTNORMALCRAFTOPTIONLIST_SAVEFILTER_OFFSET))(nullptr);
		}

	};

