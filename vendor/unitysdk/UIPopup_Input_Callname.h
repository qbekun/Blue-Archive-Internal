#pragma once
#include "unitysdk.h"

class UIInput;
class MXButton;
class UILabel;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIPOPUP_INPUT_CALLNAME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2782140)
#define UIPOPUP_INPUT_CALLNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x2782400)
#define UIPOPUP_INPUT_CALLNAME_ONCLICKCONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0x2782410)
#define UIPOPUP_INPUT_CALLNAME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2782860)
#define UIPOPUP_INPUT_CALLNAME_ONCLICKSUMIT_OFFSET UNITYSDK_OFFSET(0x27829E0)
#define UIPOPUP_INPUT_CALLNAME_AWAKE_OFFSET UNITYSDK_OFFSET(0x2782A30)
#define UIPOPUP_INPUT_CALLNAME_HANDLEACCOUNTCALLNAMERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2782D10)

	inline static constexpr unsigned int UIPopup_Input_Callname_TypeDefinitionIndex = 7385;

	class UIPopup_Input_Callname : public Il2CppObject
	{
	public:
		UIInput* input; // 0x18
		MXButton* confirmButton; // 0x20
		UILabel* inputLabel; // 0x28
		UILabel* noticeLabel; // 0x30

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_CALLNAME_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_CALLNAME_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_CALLNAME_ONCLICKCONFIRMBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_CALLNAME_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickSumit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_CALLNAME_ONCLICKSUMIT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_CALLNAME_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean HandleAccountCallnameResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_CALLNAME_HANDLEACCOUNTCALLNAMERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

	};

