#pragma once
#include "unitysdk.h"

#define WAITFORSECONDSUNSCALED_.CTOR_OFFSET UNITYSDK_OFFSET(0x21247F0)
#define WAITFORSECONDSUNSCALED_GET_WAITTIME_OFFSET UNITYSDK_OFFSET(0x2124820)
#define WAITFORSECONDSUNSCALED_GET_KEEPWAITING_OFFSET UNITYSDK_OFFSET(0x2124830)
#define WAITFORSECONDSUNSCALED_RESET_OFFSET UNITYSDK_OFFSET(0x21248B0)
#define WAITFORSECONDSUNSCALED_SET_WAITTIME_OFFSET UNITYSDK_OFFSET(0x21248C0)

	inline static constexpr unsigned int WaitForSecondsUnscaled_TypeDefinitionIndex = 3899;

	class WaitForSecondsUnscaled : public Il2CppObject
	{
	public:
		::System::Single m_WaitUntilTime; // 0x10
		::System::Single _waitTime_k__BackingField; // 0x14

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + WAITFORSECONDSUNSCALED_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_waitTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITFORSECONDSUNSCALED_GET_WAITTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_keepWaiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITFORSECONDSUNSCALED_GET_KEEPWAITING_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITFORSECONDSUNSCALED_RESET_OFFSET))(nullptr);
		}

		::System::Void set_waitTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + WAITFORSECONDSUNSCALED_SET_WAITTIME_OFFSET))(arg, nullptr);
		}

	};

