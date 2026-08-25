#pragma once
#include "unitysdk.h"

class UILabel;
class MXToggle;
namespace UnityEngine { class Coroutine; }
namespace MX::SaveData { class ArenaOffenseAutoStartSaveData; }

#define UIPOPUP_ARENAPLAYWAIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2201FE0)
#define UIPOPUP_ARENAPLAYWAIT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2201FF0)
#define UIPOPUP_ARENAPLAYWAIT_ONCHANGEDTOGGLE_OFFSET UNITYSDK_OFFSET(0x2202140)
#define UIPOPUP_ARENAPLAYWAIT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2202270)
#define UIPOPUP_ARENAPLAYWAIT_REQUESTREADYTOSTART_OFFSET UNITYSDK_OFFSET(0x22021F0)
#define UIPOPUP_ARENAPLAYWAIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2202540)
#define UIPOPUP_ARENAPLAYWAIT_SETREADYTOSTART_OFFSET UNITYSDK_OFFSET(0x2202610)
#define UIPOPUP_ARENAPLAYWAIT_COUPDATE_OFFSET UNITYSDK_OFFSET(0x22024D0)

	inline static constexpr unsigned int UIPopup_ArenaPlaywait_TypeDefinitionIndex = 4299;

	class UIPopup_ArenaPlaywait : public Il2CppObject
	{
	public:
		::System::String* TIMER_EXPIRED_TEXT; // 0x0
		UILabel* timeLabel; // 0xD8
		MXToggle* toggle; // 0xE0
		::UnityEngine::Coroutine* timerCoroutine; // 0xE8
		::System::Action* onReadyToStart; // 0xF0
		::MX::SaveData::ArenaOffenseAutoStartSaveData* saveData; // 0xF8
		::System::Boolean isRequesting; // 0x100

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAPLAYWAIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAPLAYWAIT_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnChangedToggle(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAPLAYWAIT_ONCHANGEDTOGGLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAPLAYWAIT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void RequestReadyToStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAPLAYWAIT_REQUESTREADYTOSTART_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAPLAYWAIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetReadyToStart(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAPLAYWAIT_SETREADYTOSTART_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoUpdate()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAPLAYWAIT_COUPDATE_OFFSET))(nullptr);
		}

	};

