#pragma once
#include "unitysdk.h"

#define UIPOPUP_BIRTH_DOB_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0xC8AAB0)
#define UIPOPUP_BIRTH_DOB_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0xC8AE80)
#define UIPOPUP_BIRTH_DOB_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xC8AEA0)
#define UIPOPUP_BIRTH_DOB_AWAKE_OFFSET UNITYSDK_OFFSET(0xC8AFA0)
#define UIPOPUP_BIRTH_DOB_.CTOR_OFFSET UNITYSDK_OFFSET(0xC8B050)

	inline static constexpr unsigned int UIPopup_Birth_DOB_TypeDefinitionIndex = 9091;

	class UIPopup_Birth_DOB : public Il2CppObject
	{
	public:
		::System::String* dobStyleText; // 0x120
		::System::Action* endCheck; // 0x128

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BIRTH_DOB_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BIRTH_DOB_SETCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BIRTH_DOB_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BIRTH_DOB_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BIRTH_DOB_.CTOR_OFFSET))(nullptr);
		}

	};

