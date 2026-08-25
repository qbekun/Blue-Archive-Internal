#pragma once
#include "unitysdk.h"

#define TIMEOUTTRACKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x96C5500)
#define TIMEOUTTRACKER_GET_REMAININGMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x96C7540)
#define TIMEOUTTRACKER_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x96C5E70)

	inline static constexpr unsigned int TimeoutTracker_TypeDefinitionIndex = 33592;

	class TimeoutTracker : public Il2CppObject
	{
	public:
		::System::Int32 m_total; // 0x10
		::System::Int32 m_start; // 0x14

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TIMEOUTTRACKER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RemainingMilliseconds()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEOUTTRACKER_GET_REMAININGMILLISECONDS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsExpired()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEOUTTRACKER_GET_ISEXPIRED_OFFSET))(nullptr);
		}

	};

