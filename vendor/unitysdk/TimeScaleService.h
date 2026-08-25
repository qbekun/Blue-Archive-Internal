#pragma once
#include "unitysdk.h"

class TimeScaleHandler;

#define TIMESCALESERVICE_SETAUDIOTIMESCALENOCACHE_OFFSET UNITYSDK_OFFSET(0x1FDEBC0)
#define TIMESCALESERVICE_GET_AUDIOPITCH_OFFSET UNITYSDK_OFFSET(0x1FDEC20)
#define TIMESCALESERVICE_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1FDEC70)
#define TIMESCALESERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDEC80)
#define TIMESCALESERVICE_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1FDEDD0)
#define TIMESCALESERVICE_RESUME_OFFSET UNITYSDK_OFFSET(0x000000)
#define TIMESCALESERVICE_SET_OFFSET UNITYSDK_OFFSET(0x000000)
#define TIMESCALESERVICE_PAUSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TIMESCALESERVICE_GET_CACHEDTIMESCALE_OFFSET UNITYSDK_OFFSET(0x1FDEE20)

	inline static constexpr unsigned int TimeScaleService_TypeDefinitionIndex = 3059;

	class TimeScaleService : public Il2CppObject
	{
	public:
		::System::Int32 initialCapacity; // 0x0
		::System::Single timeScale; // 0x4
		::System::Single audioPitch; // 0x8
		Il2CppObject* container; // 0x10
		Il2CppObject* handlerPool; // 0x18

		::System::Void SetAudioTimeScaleNoCache(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TIMESCALESERVICE_SETAUDIOTIMESCALENOCACHE_OFFSET))(arg, nullptr);
		}

		::System::Single get_AudioPitch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESCALESERVICE_GET_AUDIOPITCH_OFFSET))(nullptr);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESCALESERVICE_GET_TIMESCALE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESCALESERVICE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESCALESERVICE_GET_ISPAUSED_OFFSET))(nullptr);
		}

		::System::Void Resume(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TIMESCALESERVICE_RESUME_OFFSET))(arg, nullptr);
		}

		::System::Void Set(Il2CppObject* arg, ::System::Single arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TIMESCALESERVICE_SET_OFFSET))(arg, arg2, nullptr);
		}

		TimeScaleHandler* Pause(Il2CppObject* arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((TimeScaleHandler*(*)(Il2CppObject*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TIMESCALESERVICE_PAUSE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single get_CachedTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESCALESERVICE_GET_CACHEDTIMESCALE_OFFSET))(nullptr);
		}

	};

