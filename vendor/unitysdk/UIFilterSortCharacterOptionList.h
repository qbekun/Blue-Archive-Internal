#pragma once
#include "unitysdk.h"

class IUICharacterFilterTab;

#define UIFILTERSORTCHARACTEROPTIONLIST_GET_FILTERTABS_OFFSET UNITYSDK_OFFSET(0xAFBE10)
#define UIFILTERSORTCHARACTEROPTIONLIST_RESTOREFILTER_OFFSET UNITYSDK_OFFSET(0xAFBEC0)
#define UIFILTERSORTCHARACTEROPTIONLIST_SAVEFILTER_OFFSET UNITYSDK_OFFSET(0xAFBF40)
#define UIFILTERSORTCHARACTEROPTIONLIST_LOADANDSETTABS_OFFSET UNITYSDK_OFFSET(0xAFBFC0)
#define UIFILTERSORTCHARACTEROPTIONLIST__SETEXCEPTEDFILTER_B__3_0_OFFSET UNITYSDK_OFFSET(0xAFC1E0)
#define UIFILTERSORTCHARACTEROPTIONLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xAFC250)
#define UIFILTERSORTCHARACTEROPTIONLIST_SETEXCEPTEDFILTER_OFFSET UNITYSDK_OFFSET(0xAFC260)
#define UIFILTERSORTCHARACTEROPTIONLIST_RESETALL_OFFSET UNITYSDK_OFFSET(0xAFC4C0)

	inline static constexpr unsigned int UIFilterSortCharacterOptionList_TypeDefinitionIndex = 8163;

	class UIFilterSortCharacterOptionList : public Il2CppObject
	{
	public:
		Il2CppObject* filterTabList; // 0x20

		Il2CppObject* get_FilterTabs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTCHARACTEROPTIONLIST_GET_FILTERTABS_OFFSET))(nullptr);
		}

		::System::Void RestoreFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTCHARACTEROPTIONLIST_RESTOREFILTER_OFFSET))(nullptr);
		}

		::System::Void SaveFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTCHARACTEROPTIONLIST_SAVEFILTER_OFFSET))(nullptr);
		}

		::System::Void LoadAndSetTabs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTCHARACTEROPTIONLIST_LOADANDSETTABS_OFFSET))(nullptr);
		}

		::System::Boolean _SetExceptedFilter_b__3_0(IUICharacterFilterTab* arg)
		{
			return ((::System::Boolean(*)(IUICharacterFilterTab*, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTCHARACTEROPTIONLIST__SETEXCEPTEDFILTER_B__3_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTCHARACTEROPTIONLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetExceptedFilter(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTCHARACTEROPTIONLIST_SETEXCEPTEDFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void ResetAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTCHARACTEROPTIONLIST_RESETALL_OFFSET))(nullptr);
		}

	};

