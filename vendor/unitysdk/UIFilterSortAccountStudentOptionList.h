#pragma once
#include "unitysdk.h"

class UICharacterSelectPopupController;

#define UIFILTERSORTACCOUNTSTUDENTOPTIONLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xAFB4D0)
#define UIFILTERSORTACCOUNTSTUDENTOPTIONLIST_LOADANDSETTABS_OFFSET UNITYSDK_OFFSET(0xAFB4E0)
#define UIFILTERSORTACCOUNTSTUDENTOPTIONLIST_RESETALL_OFFSET UNITYSDK_OFFSET(0xAFB7B0)
#define UIFILTERSORTACCOUNTSTUDENTOPTIONLIST_RESTOREFILTER_OFFSET UNITYSDK_OFFSET(0xAFB970)
#define UIFILTERSORTACCOUNTSTUDENTOPTIONLIST_SAVEFILTER_OFFSET UNITYSDK_OFFSET(0xAFB9F0)
#define UIFILTERSORTACCOUNTSTUDENTOPTIONLIST_GET_FILTERTABS_OFFSET UNITYSDK_OFFSET(0xAFB700)

	inline static constexpr unsigned int UIFilterSortAccountStudentOptionList_TypeDefinitionIndex = 8161;

	class UIFilterSortAccountStudentOptionList : public Il2CppObject
	{
	public:
		UICharacterSelectPopupController* Controller; // 0x20
		Il2CppObject* filterTabList; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTACCOUNTSTUDENTOPTIONLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LoadAndSetTabs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTACCOUNTSTUDENTOPTIONLIST_LOADANDSETTABS_OFFSET))(nullptr);
		}

		::System::Void ResetAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTACCOUNTSTUDENTOPTIONLIST_RESETALL_OFFSET))(nullptr);
		}

		::System::Void RestoreFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTACCOUNTSTUDENTOPTIONLIST_RESTOREFILTER_OFFSET))(nullptr);
		}

		::System::Void SaveFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTACCOUNTSTUDENTOPTIONLIST_SAVEFILTER_OFFSET))(nullptr);
		}

		Il2CppObject* get_FilterTabs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTACCOUNTSTUDENTOPTIONLIST_GET_FILTERTABS_OFFSET))(nullptr);
		}

	};

