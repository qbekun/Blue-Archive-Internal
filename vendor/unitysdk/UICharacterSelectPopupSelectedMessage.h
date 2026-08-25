#pragma once
#include "unitysdk.h"

#define UICHARACTERSELECTPOPUPSELECTEDMESSAGE_SET_SELECTEDCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x266D220)
#define UICHARACTERSELECTPOPUPSELECTEDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x266D230)
#define UICHARACTERSELECTPOPUPSELECTEDMESSAGE_GET_SELECTEDCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x266D260)

	inline static constexpr unsigned int UICharacterSelectPopupSelectedMessage_TypeDefinitionIndex = 6692;

	class UICharacterSelectPopupSelectedMessage : public ::TriInspector::TitleAttribute
	{
	public:
		Il2CppObject* _SelectedCharacterIds_k__BackingField; // 0x18

		::System::Void set_SelectedCharacterIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSELECTPOPUPSELECTEDMESSAGE_SET_SELECTEDCHARACTERIDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSELECTPOPUPSELECTEDMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SelectedCharacterIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERSELECTPOPUPSELECTEDMESSAGE_GET_SELECTEDCHARACTERIDS_OFFSET))(nullptr);
		}

	};

