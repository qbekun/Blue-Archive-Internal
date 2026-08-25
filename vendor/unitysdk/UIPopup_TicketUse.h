#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class MXButton;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define UIPOPUP_TICKETUSE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2780130)
#define UIPOPUP_TICKETUSE_SETTICKETICON_OFFSET UNITYSDK_OFFSET(0x2780630)
#define UIPOPUP_TICKETUSE_INITTYPE02_OFFSET UNITYSDK_OFFSET(0x2780860)
#define UIPOPUP_TICKETUSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2780D00)
#define UIPOPUP_TICKETUSE_ONCLICKUSE_OFFSET UNITYSDK_OFFSET(0x2780D10)
#define UIPOPUP_TICKETUSE_INITTYPE01_OFFSET UNITYSDK_OFFSET(0x2780DC0)
#define UIPOPUP_TICKETUSE_SETMESSAGES_OFFSET UNITYSDK_OFFSET(0x2780C20)
#define UIPOPUP_TICKETUSE_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x27812F0)
#define UIPOPUP_TICKETUSE_INITONETICKETTENUSETYPE_OFFSET UNITYSDK_OFFSET(0x2781380)
#define UIPOPUP_TICKETUSE_INITONETICKETTENGEMMIXUSETYPE_OFFSET UNITYSDK_OFFSET(0x27818F0)

	inline static constexpr unsigned int UIPopup_TicketUse_TypeDefinitionIndex = 7382;

	class UIPopup_TicketUse : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* type01; // 0xD8
		::UnityEngine::GameObject* type02; // 0xE0
		::UnityEngine::GameObject* typeMix; // 0xE8
		Il2CppObject* images; // 0xF0
		Il2CppObject* messageLabels; // 0xF8
		Il2CppObject* hasTicketLabel; // 0x100
		UILabel* consumeCountLabel; // 0x108
		UILabel* afterHasCountLabel; // 0x110
		UILabel* mixHasTicketLabel; // 0x118
		UILabel* mixAfterHasTicketCountLabel; // 0x120
		UILabel* mixConsumeGemCountLabel; // 0x128
		MXButton* useBtn; // 0x130
		MXButton* cancelBtn; // 0x138
		MXButton* closeBtn; // 0x140
		MXButton* notEnoughConfirmBtn; // 0x148
		::UnityEngine::GameObject* confirmAndCancelBtn; // 0x150
		::UnityEngine::GameObject* confirmBtn; // 0x158
		::System::Action* confirm; // 0x160

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TICKETUSE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetTicketIcon(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TICKETUSE_SETTICKETICON_OFFSET))(arg, nullptr);
		}

		::System::Void InitType02(::System::String* str, ::MX::GameLogic::Parcel::ParcelInfo* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::String*, ::MX::GameLogic::Parcel::ParcelInfo*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TICKETUSE_INITTYPE02_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TICKETUSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickUse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TICKETUSE_ONCLICKUSE_OFFSET))(nullptr);
		}

		::System::Void InitType01(::System::String* str, Il2CppObject* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TICKETUSE_INITTYPE01_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void SetMessages(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TICKETUSE_SETMESSAGES_OFFSET))(str, nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TICKETUSE_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void InitOneTicketTenUseType(::System::String* str, Il2CppObject* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TICKETUSE_INITONETICKETTENUSETYPE_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void InitOneTicketTenGemMixUseType(::System::String* str, Il2CppObject* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::Int64, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TICKETUSE_INITONETICKETTENGEMMIXUSETYPE_OFFSET))(str, arg, arg2, arg3, arg4, nullptr);
		}

	};

