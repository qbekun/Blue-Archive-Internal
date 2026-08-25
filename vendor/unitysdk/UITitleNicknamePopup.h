#pragma once
#include "unitysdk.h"

class UIInput;
class MXButton;
class UILabel;

#define UITITLENICKNAMEPOPUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB73B10)
#define UITITLENICKNAMEPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xB73B90)
#define UITITLENICKNAMEPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB73CB0)
#define UITITLENICKNAMEPOPUP_ONCLICKCONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0xB73E60)
#define UITITLENICKNAMEPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xB741E0)
#define UITITLENICKNAMEPOPUP_CONFIRM_OFFSET UNITYSDK_OFFSET(0xB73E70)

	inline static constexpr unsigned int UITitleNicknamePopup_TypeDefinitionIndex = 8476;

	class UITitleNicknamePopup : public Il2CppObject
	{
	public:
		UIInput* nicknameInput; // 0x18
		MXButton* confirmButton; // 0x20
		UILabel* guideLabel; // 0x28

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLENICKNAMEPOPUP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLENICKNAMEPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLENICKNAMEPOPUP_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLENICKNAMEPOPUP_ONCLICKCONFIRMBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLENICKNAMEPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Confirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITITLENICKNAMEPOPUP_CONFIRM_OFFSET))(nullptr);
		}

	};

