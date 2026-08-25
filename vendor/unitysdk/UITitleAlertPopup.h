#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }

#define UITITLEALERTPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xB733E0)
#define UITITLEALERTPOPUP_SETCAUTION_OFFSET UNITYSDK_OFFSET(0xB733F0)
#define UITITLEALERTPOPUP_SET_OFFSET UNITYSDK_OFFSET(0xB73460)

	inline static constexpr unsigned int UITitleAlertPopup_TypeDefinitionIndex = 8472;

	class UITitleAlertPopup : public Il2CppObject
	{
	public:
		UILabel* titleLabel; // 0x18
		::UnityEngine::GameObject* messageRoot; // 0x20
		UILabel* messageLabel; // 0x28
		::UnityEngine::GameObject* messageCautionRoot; // 0x30
		UILabel* messageCautionLabel; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLEALERTPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCaution(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UITITLEALERTPOPUP_SETCAUTION_OFFSET))(str, str2, nullptr);
		}

		::System::Void Set(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UITITLEALERTPOPUP_SET_OFFSET))(str, str2, nullptr);
		}

	};

