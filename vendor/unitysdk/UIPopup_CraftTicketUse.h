#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
namespace UnityEngine { class GameObject; }

#define UIPOPUP_CRAFTTICKETUSE_INIT_OFFSET UNITYSDK_OFFSET(0x23A1230)
#define UIPOPUP_CRAFTTICKETUSE_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x23A1450)
#define UIPOPUP_CRAFTTICKETUSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x23A14E0)
#define UIPOPUP_CRAFTTICKETUSE_AWAKE_OFFSET UNITYSDK_OFFSET(0x23A14F0)
#define UIPOPUP_CRAFTTICKETUSE_ONCLICKIMMEDIATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x23A19F0)

	inline static constexpr unsigned int UIPopup_CraftTicketUse_TypeDefinitionIndex = 5187;

	class UIPopup_CraftTicketUse : public Il2CppObject
	{
	public:
		UILabel* messageLabel; // 0xD8
		UILabel* remainTicketLabel; // 0xE0
		UILabel* consumeCountLabel; // 0xE8
		MXButton* immediateCompleteBtn; // 0xF0
		MXButton* cancelBtn; // 0xF8
		MXButton* closeBtn; // 0x100
		MXButton* notEnoughConfirmBtn; // 0x108
		::UnityEngine::GameObject* confirmAndCancelBtn; // 0x110
		::UnityEngine::GameObject* confirmBtn; // 0x118
		::System::Action* confirm; // 0x120

		::System::Void Init(::System::String* str, ::System::Int64 arg, ::System::Int64 arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CRAFTTICKETUSE_INIT_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CRAFTTICKETUSE_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CRAFTTICKETUSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CRAFTTICKETUSE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickImmediateComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CRAFTTICKETUSE_ONCLICKIMMEDIATECOMPLETE_OFFSET))(nullptr);
		}

	};

