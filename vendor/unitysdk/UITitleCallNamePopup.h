#pragma once
#include "unitysdk.h"

class UIInput;
class MXButton;
class UILabel;

#define UITITLECALLNAMEPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB734D0)
#define UITITLECALLNAMEPOPUP_CONFIRM_OFFSET UNITYSDK_OFFSET(0xB736B0)
#define UITITLECALLNAMEPOPUP_ONCLICKCONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0xB73990)
#define UITITLECALLNAMEPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xB739A0)
#define UITITLECALLNAMEPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xB73AC0)

	inline static constexpr unsigned int UITitleCallNamePopup_TypeDefinitionIndex = 8473;

	class UITitleCallNamePopup : public Il2CppObject
	{
	public:
		UIInput* callnameInput; // 0x18
		MXButton* confirmButton; // 0x20
		UILabel* noticeLabel; // 0x28

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLECALLNAMEPOPUP_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Confirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLECALLNAMEPOPUP_CONFIRM_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLECALLNAMEPOPUP_ONCLICKCONFIRMBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLECALLNAMEPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLECALLNAMEPOPUP_.CTOR_OFFSET))(nullptr);
		}

	};

