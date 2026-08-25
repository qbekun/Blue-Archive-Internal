#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_WAITFORSECONDSREALTIME_GET_WAITTIME_OFFSET UNITYSDK_OFFSET(0xA236DE0)
#define UNITYENGINE_WAITFORSECONDSREALTIME_SET_WAITTIME_OFFSET UNITYSDK_OFFSET(0xA236DF0)
#define UNITYENGINE_WAITFORSECONDSREALTIME_GET_KEEPWAITING_OFFSET UNITYSDK_OFFSET(0xA236E00)
#define UNITYENGINE_WAITFORSECONDSREALTIME_.CTOR_OFFSET UNITYSDK_OFFSET(0xA236EE0)
#define UNITYENGINE_WAITFORSECONDSREALTIME_RESET_OFFSET UNITYSDK_OFFSET(0xA236F10)

namespace UnityEngine
{
	inline static constexpr unsigned int WaitForSecondsRealtime_TypeDefinitionIndex = 31185;

	class WaitForSecondsRealtime : public Il2CppObject
	{
	public:
		::System::Single _waitTime_k__BackingField; // 0x10
		::System::Single m_WaitUntilTime; // 0x14

		::System::Single get_waitTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITFORSECONDSREALTIME_GET_WAITTIME_OFFSET))(nullptr);
		}

		::System::Void set_waitTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITFORSECONDSREALTIME_SET_WAITTIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_keepWaiting()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITFORSECONDSREALTIME_GET_KEEPWAITING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITFORSECONDSREALTIME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITFORSECONDSREALTIME_RESET_OFFSET))(nullptr);
		}

	};
}

