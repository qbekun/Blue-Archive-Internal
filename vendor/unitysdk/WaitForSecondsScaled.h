#pragma once
#include "unitysdk.h"

#define WAITFORSECONDSSCALED_.CTOR_OFFSET UNITYSDK_OFFSET(0x2124710)
#define WAITFORSECONDSSCALED_GET_WAITTIME_OFFSET UNITYSDK_OFFSET(0x2124740)
#define WAITFORSECONDSSCALED_SET_WAITTIME_OFFSET UNITYSDK_OFFSET(0x2124750)
#define WAITFORSECONDSSCALED_GET_KEEPWAITING_OFFSET UNITYSDK_OFFSET(0x2124760)
#define WAITFORSECONDSSCALED_RESET_OFFSET UNITYSDK_OFFSET(0x21247E0)

	inline static constexpr unsigned int WaitForSecondsScaled_TypeDefinitionIndex = 3898;

	class WaitForSecondsScaled : public Il2CppObject
	{
	public:
		::System::Single m_WaitUntilTime; // 0x10
		::System::Single _waitTime_k__BackingField; // 0x14

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + WAITFORSECONDSSCALED_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_waitTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITFORSECONDSSCALED_GET_WAITTIME_OFFSET))(nullptr);
		}

		::System::Void set_waitTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + WAITFORSECONDSSCALED_SET_WAITTIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_keepWaiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITFORSECONDSSCALED_GET_KEEPWAITING_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITFORSECONDSSCALED_RESET_OFFSET))(nullptr);
		}

	};

