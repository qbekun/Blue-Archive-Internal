#pragma once
#include "unitysdk.h"

#define MINIGAMETIMEMANAGER_WAITFORPLAYSCHEDULED_OFFSET UNITYSDK_OFFSET(0xD16FD0)
#define MINIGAMETIMEMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD17050)
#define MINIGAMETIMEMANAGER_UNSUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0xD171E0)
#define MINIGAMETIMEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD17330)
#define MINIGAMETIMEMANAGER_RESETTIME_OFFSET UNITYSDK_OFFSET(0xD17340)
#define MINIGAMETIMEMANAGER_GETCURRENTMUSICTIME_OFFSET UNITYSDK_OFFSET(0xD173E0)
#define MINIGAMETIMEMANAGER_PAUSE_OFFSET UNITYSDK_OFFSET(0xD17510)
#define MINIGAMETIMEMANAGER_RESUME_OFFSET UNITYSDK_OFFSET(0xD17600)

	inline static constexpr unsigned int MinigameTimeManager_TypeDefinitionIndex = 675;

	class MinigameTimeManager : public Il2CppObject
	{
	public:
		::System::Single Offset; // 0x10
		::System::DateTime* GameStartTime; // 0x18
		::System::Single MusicTimePosition; // 0x20
		::System::Single TimePassedSinceResume; // 0x24
		::System::Single TotalSeconds; // 0x28

		::System::Collections::IEnumerator* WaitForPlayScheduled()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMETIMEMANAGER_WAITFORPLAYSCHEDULED_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMETIMEMANAGER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void UnsubscribeEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMETIMEMANAGER_UNSUBSCRIBEEVENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMETIMEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ResetTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMETIMEMANAGER_RESETTIME_OFFSET))(nullptr);
		}

		::System::Single GetCurrentMusicTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMETIMEMANAGER_GETCURRENTMUSICTIME_OFFSET))(nullptr);
		}

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMETIMEMANAGER_PAUSE_OFFSET))(nullptr);
		}

		::System::Void Resume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMETIMEMANAGER_RESUME_OFFSET))(nullptr);
		}

	};

