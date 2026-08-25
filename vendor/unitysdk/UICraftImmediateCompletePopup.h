#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;

#define UICRAFTIMMEDIATECOMPLETEPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2391D50)
#define UICRAFTIMMEDIATECOMPLETEPOPUP_INIT_OFFSET UNITYSDK_OFFSET(0x2391D60)
#define UICRAFTIMMEDIATECOMPLETEPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2391EB0)
#define UICRAFTIMMEDIATECOMPLETEPOPUP_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x2392280)
#define UICRAFTIMMEDIATECOMPLETEPOPUP_ONCLICKIMMEDIATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x23922B0)

	inline static constexpr unsigned int UICraftImmediateCompletePopup_TypeDefinitionIndex = 5154;

	class UICraftImmediateCompletePopup : public Il2CppObject
	{
	public:
		UILabel* RemainTicketLabel; // 0x18
		UILabel* ConsumeCountLabel; // 0x20
		MXButton* ImmediateCompleteBtn; // 0x28
		MXButton* CancelBtn; // 0x30
		MXButton* CloseBtn; // 0x38
		::System::Action* confirm; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTIMMEDIATECOMPLETEPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::System::String* str, ::System::Int64 arg, ::System::Int64 arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTIMMEDIATECOMPLETEPOPUP_INIT_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTIMMEDIATECOMPLETEPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTIMMEDIATECOMPLETEPOPUP_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void OnClickImmediateComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTIMMEDIATECOMPLETEPOPUP_ONCLICKIMMEDIATECOMPLETE_OFFSET))(nullptr);
		}

	};

