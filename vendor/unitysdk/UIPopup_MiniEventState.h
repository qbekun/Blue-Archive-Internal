#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;

#define UIPOPUP_MINIEVENTSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x24B4E50)
#define UIPOPUP_MINIEVENTSTATE_AWAKE_OFFSET UNITYSDK_OFFSET(0x24B4E60)
#define UIPOPUP_MINIEVENTSTATE_SETDATA_OFFSET UNITYSDK_OFFSET(0x24B5060)

	inline static constexpr unsigned int UIPopup_MiniEventState_TypeDefinitionIndex = 5860;

	class UIPopup_MiniEventState : public Il2CppObject
	{
	public:
		Il2CppObject* miniItemIcons; // 0xD8
		UILabel* miniPossessionLabel; // 0xE0
		UILabel* miniAcquisitionLabel; // 0xE8
		MXButton* okButton; // 0xF0
		MXButton* backButton; // 0xF8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIEVENTSTATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIEVENTSTATE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str, ::System::String* str2, ::System::String* str3)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIEVENTSTATE_SETDATA_OFFSET))(str, str2, str3, nullptr);
		}

	};

