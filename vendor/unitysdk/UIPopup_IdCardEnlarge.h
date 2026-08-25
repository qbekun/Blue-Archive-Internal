#pragma once
#include "unitysdk.h"

class MXButton;

#define UIPOPUP_IDCARDENLARGE_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x2577FA0)
#define UIPOPUP_IDCARDENLARGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2577FD0)
#define UIPOPUP_IDCARDENLARGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25780F0)

	inline static constexpr unsigned int UIPopup_IdCardEnlarge_TypeDefinitionIndex = 6179;

	class UIPopup_IdCardEnlarge : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0x18

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARDENLARGE_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARDENLARGE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARDENLARGE_.CTOR_OFFSET))(nullptr);
		}

	};

