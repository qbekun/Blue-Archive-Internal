#pragma once
#include "unitysdk.h"

#define UIFILTERSORTMEMORIALOPTIONLIST_LOADANDSETTABS_OFFSET UNITYSDK_OFFSET(0xAFDD90)
#define UIFILTERSORTMEMORIALOPTIONLIST_RESTOREFILTER_OFFSET UNITYSDK_OFFSET(0xAFE060)
#define UIFILTERSORTMEMORIALOPTIONLIST_SAVEFILTER_OFFSET UNITYSDK_OFFSET(0xAFE0E0)
#define UIFILTERSORTMEMORIALOPTIONLIST_GET_FILTERTABS_OFFSET UNITYSDK_OFFSET(0xAFDFB0)
#define UIFILTERSORTMEMORIALOPTIONLIST_RESETALL_OFFSET UNITYSDK_OFFSET(0xAFE160)
#define UIFILTERSORTMEMORIALOPTIONLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xAFE320)

	inline static constexpr unsigned int UIFilterSortMemorialOptionList_TypeDefinitionIndex = 8169;

	class UIFilterSortMemorialOptionList : public Il2CppObject
	{
	public:
		Il2CppObject* filterTabList; // 0x20

		::System::Void LoadAndSetTabs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTMEMORIALOPTIONLIST_LOADANDSETTABS_OFFSET))(nullptr);
		}

		::System::Void RestoreFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTMEMORIALOPTIONLIST_RESTOREFILTER_OFFSET))(nullptr);
		}

		::System::Void SaveFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTMEMORIALOPTIONLIST_SAVEFILTER_OFFSET))(nullptr);
		}

		Il2CppObject* get_FilterTabs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTMEMORIALOPTIONLIST_GET_FILTERTABS_OFFSET))(nullptr);
		}

		::System::Void ResetAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTMEMORIALOPTIONLIST_RESETALL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTMEMORIALOPTIONLIST_.CTOR_OFFSET))(nullptr);
		}

	};

