#pragma once
#include "unitysdk.h"

class MXButton;
class UIInput;
class UILabel;
namespace FlatData { class ClanSearchOption; }

#define CLANSEARCHPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x233A690)
#define CLANSEARCHPOPUP_OPENCLANSEARCHPOPUP_OFFSET UNITYSDK_OFFSET(0x233A710)
#define CLANSEARCHPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x233A790)
#define CLANSEARCHPOPUP_ONCHANGESEARCHTOGGLE_OFFSET UNITYSDK_OFFSET(0x233ABD0)
#define CLANSEARCHPOPUP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x233ACC0)
#define CLANSEARCHPOPUP_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x233AD60)
#define CLANSEARCHPOPUP_ONCHANGESEARCHINPUT_OFFSET UNITYSDK_OFFSET(0x233ADB0)

	inline static constexpr unsigned int ClanSearchPopup_TypeDefinitionIndex = 4968;

	class ClanSearchPopup : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0x18
		MXButton* okButton; // 0x20
		UIInput* searchInput; // 0x28
		UILabel* searchInputPlaceholder; // 0x30
		::Il2CppArray<::System::Object*>* searchOptionToggle; // 0x38
		Il2CppObject* table; // 0x40
		Il2CppObject* callbackClanSearch; // 0x48
		::FlatData::ClanSearchOption* selectSearchOption; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSEARCHPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OpenClanSearchPopup(Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CLANSEARCHPOPUP_OPENCLANSEARCHPOPUP_OFFSET))(arg, str, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSEARCHPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnChangeSearchToggle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSEARCHPOPUP_ONCHANGESEARCHTOGGLE_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSEARCHPOPUP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSEARCHPOPUP_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void OnChangeSearchInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSEARCHPOPUP_ONCHANGESEARCHINPUT_OFFSET))(nullptr);
		}

	};

