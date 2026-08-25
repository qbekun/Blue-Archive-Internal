#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;

#define UIPOPUP_GEMSTATE_AWAKE_OFFSET UNITYSDK_OFFSET(0x27681D0)
#define UIPOPUP_GEMSTATE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x27683D0)
#define UIPOPUP_GEMSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2768580)

	inline static constexpr unsigned int UIPopup_GemState_TypeDefinitionIndex = 7320;

	class UIPopup_GemState : public Il2CppObject
	{
	public:
		UILabel* gemTotalLabel; // 0xD8
		UILabel* gemFreeLabel; // 0xE0
		UILabel* gemPaidLabel; // 0xE8
		MXButton* okButton; // 0xF0
		MXButton* backButton; // 0xF8

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEMSTATE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEMSTATE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GEMSTATE_.CTOR_OFFSET))(nullptr);
		}

	};

