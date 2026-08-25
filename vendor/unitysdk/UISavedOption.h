#pragma once
#include "unitysdk.h"

class UIPopupList;
class UIToggle;
class UIProgressBar;

#define UISAVEDOPTION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA35150)
#define UISAVEDOPTION_SAVESTATE_OFFSET UNITYSDK_OFFSET(0xA35530)
#define UISAVEDOPTION_GET_KEY_OFFSET UNITYSDK_OFFSET(0xA354D0)
#define UISAVEDOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA35620)
#define UISAVEDOPTION_SAVESELECTION_OFFSET UNITYSDK_OFFSET(0xA35630)
#define UISAVEDOPTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA356F0)
#define UISAVEDOPTION_SAVEPROGRESS_OFFSET UNITYSDK_OFFSET(0xA35F10)
#define UISAVEDOPTION_AWAKE_OFFSET UNITYSDK_OFFSET(0xA360A0)

	inline static constexpr unsigned int UISavedOption_TypeDefinitionIndex = 65;

	class UISavedOption : public Il2CppObject
	{
	public:
		::System::String* keyName; // 0x18
		UIPopupList* mList; // 0x20
		UIToggle* mCheck; // 0x28
		UIProgressBar* mSlider; // 0x30

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISAVEDOPTION_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SaveState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISAVEDOPTION_SAVESTATE_OFFSET))(nullptr);
		}

		::System::String* get_key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISAVEDOPTION_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISAVEDOPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SaveSelection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISAVEDOPTION_SAVESELECTION_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISAVEDOPTION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SaveProgress()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISAVEDOPTION_SAVEPROGRESS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISAVEDOPTION_AWAKE_OFFSET))(nullptr);
		}

	};

