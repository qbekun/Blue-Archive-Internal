#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }

#define UIPOPUP_CLIENTVERSION_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0x2764790)
#define UIPOPUP_CLIENTVERSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2764820)
#define UIPOPUP_CLIENTVERSION_AWAKE_OFFSET UNITYSDK_OFFSET(0x2764830)
#define UIPOPUP_CLIENTVERSION_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2764A40)

	inline static constexpr unsigned int UIPopup_ClientVersion_TypeDefinitionIndex = 7312;

	class UIPopup_ClientVersion : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UILabel* clientVersionLabel; // 0xE0
		::UnityEngine::GameObject* serverLabelRoot; // 0xE8
		UILabel* serverVersionLabel; // 0xF0
		UILabel* buildNameLabel; // 0xF8
		MXButton* okButton; // 0x100

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLIENTVERSION_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLIENTVERSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLIENTVERSION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CLIENTVERSION_ONOPENED_OFFSET))(arg, nullptr);
		}

	};

