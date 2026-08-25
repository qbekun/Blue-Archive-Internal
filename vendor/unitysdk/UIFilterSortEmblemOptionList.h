#pragma once
#include "unitysdk.h"

#define UIFILTERSORTEMBLEMOPTIONLIST_LOADANDSETTABS_OFFSET UNITYSDK_OFFSET(0xB0BF70)
#define UIFILTERSORTEMBLEMOPTIONLIST_RESETALL_OFFSET UNITYSDK_OFFSET(0xB0C240)
#define UIFILTERSORTEMBLEMOPTIONLIST_SAVEFILTER_OFFSET UNITYSDK_OFFSET(0xB0C400)
#define UIFILTERSORTEMBLEMOPTIONLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xB0C480)
#define UIFILTERSORTEMBLEMOPTIONLIST_GET_FILTERTABS_OFFSET UNITYSDK_OFFSET(0xB0C190)
#define UIFILTERSORTEMBLEMOPTIONLIST_RESTOREFILTER_OFFSET UNITYSDK_OFFSET(0xB0C490)

	inline static constexpr unsigned int UIFilterSortEmblemOptionList_TypeDefinitionIndex = 8201;

	class UIFilterSortEmblemOptionList : public Il2CppObject
	{
	public:
		Il2CppObject* filterTabList; // 0x20

		::System::Void LoadAndSetTabs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTEMBLEMOPTIONLIST_LOADANDSETTABS_OFFSET))(nullptr);
		}

		::System::Void ResetAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTEMBLEMOPTIONLIST_RESETALL_OFFSET))(nullptr);
		}

		::System::Void SaveFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTEMBLEMOPTIONLIST_SAVEFILTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTEMBLEMOPTIONLIST_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_FilterTabs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTEMBLEMOPTIONLIST_GET_FILTERTABS_OFFSET))(nullptr);
		}

		::System::Void RestoreFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTEMBLEMOPTIONLIST_RESTOREFILTER_OFFSET))(nullptr);
		}

	};

