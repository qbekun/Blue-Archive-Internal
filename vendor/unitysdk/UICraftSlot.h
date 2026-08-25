#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
class UILabel;
namespace MX::GameLogic::DBModel { class CraftState; }
namespace UnityEngine { class Coroutine; }

#define UICRAFTSLOT_ONCLICKREWARD_OFFSET UNITYSDK_OFFSET(0x2396AB0)
#define UICRAFTSLOT_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x2396AC0)
#define UICRAFTSLOT_ONCLICKSLOT_OFFSET UNITYSDK_OFFSET(0x2396AD0)
#define UICRAFTSLOT_ONCLICKIMMEDIATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x2396AE0)
#define UICRAFTSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2396AF0)
#define UICRAFTSLOT_SETUI_OFFSET UNITYSDK_OFFSET(0x2396F50)
#define UICRAFTSLOT_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x23971F0)
#define UICRAFTSLOT_SET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x2397200)
#define UICRAFTSLOT_SETCOMPLETE_OFFSET UNITYSDK_OFFSET(0x2397260)
#define UICRAFTSLOT_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x2397400)
#define UICRAFTSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x23974F0)
#define UICRAFTSLOT_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0x2397500)
#define UICRAFTSLOT_CO_CHECKTIME_OFFSET UNITYSDK_OFFSET(0x2397180)

	inline static constexpr unsigned int UICraftSlot_TypeDefinitionIndex = 5172;

	class UICraftSlot : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* contentReady; // 0x18
		::UnityEngine::GameObject* contentMake; // 0x20
		MXButton* immediateButton; // 0x28
		MXButton* rewardButton; // 0x30
		MXButton* slotButton; // 0x38
		UILabel* remainTimes; // 0x40
		::MX::GameLogic::DBModel::CraftState* state; // 0x48
		::System::Int64 slotId; // 0x50
		::System::Boolean isComplete; // 0x58
		::UnityEngine::Coroutine* timeCoroutine; // 0x60
		::System::DateTime* timeSyncUsage; // 0x68
		::System::DateTime* endTime; // 0x70

		::System::Void OnClickReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSLOT_ONCLICKREWARD_OFFSET))(nullptr);
		}

		::System::DateTime* get_CurrentTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSLOT_GET_CURRENTTIME_OFFSET))(nullptr);
		}

		::System::Void OnClickSlot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSLOT_ONCLICKSLOT_OFFSET))(nullptr);
		}

		::System::Void OnClickImmediateComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSLOT_ONCLICKIMMEDIATECOMPLETE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetUI(::System::Boolean arg, ::System::DateTime* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSLOT_SETUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSLOT_GET_ISCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSLOT_SET_CURRENTTIME_OFFSET))(arg, nullptr);
		}

		::System::Void SetComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSLOT_SETCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void Initialized(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSLOT_INITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_SlotId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSLOT_GET_SLOTID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_CheckTime()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICRAFTSLOT_CO_CHECKTIME_OFFSET))(nullptr);
		}

	};

