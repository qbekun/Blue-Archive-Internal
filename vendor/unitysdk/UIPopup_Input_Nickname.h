#pragma once
#include "unitysdk.h"

class UIInput;
class MXButton;
class UILabel;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIPOPUP_INPUT_NICKNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x2783EA0)
#define UIPOPUP_INPUT_NICKNAME_ONCLICKCONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0x2783EB0)
#define UIPOPUP_INPUT_NICKNAME_HANDLEACCOUNTNICKNAMERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x27843C0)
#define UIPOPUP_INPUT_NICKNAME_AWAKE_OFFSET UNITYSDK_OFFSET(0x2784490)
#define UIPOPUP_INPUT_NICKNAME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2784640)
#define UIPOPUP_INPUT_NICKNAME_ONCLICKSUMIT_OFFSET UNITYSDK_OFFSET(0x2784A00)
#define UIPOPUP_INPUT_NICKNAME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2784A50)

	inline static constexpr unsigned int UIPopup_Input_Nickname_TypeDefinitionIndex = 7391;

	class UIPopup_Input_Nickname : public Il2CppObject
	{
	public:
		UIInput* input; // 0x18
		MXButton* confirmButton; // 0x20
		UILabel* inputLabel; // 0x28
		UILabel* guideLabel; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_NICKNAME_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_NICKNAME_ONCLICKCONFIRMBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean HandleAccountNicknameResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_NICKNAME_HANDLEACCOUNTNICKNAMERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_NICKNAME_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_NICKNAME_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickSumit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_NICKNAME_ONCLICKSUMIT_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_NICKNAME_ONDISABLE_OFFSET))(nullptr);
		}

	};

