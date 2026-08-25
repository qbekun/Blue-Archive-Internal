#pragma once
#include "unitysdk.h"

#define TIMER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A535D0)
#define TIMER_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x9A53600)
#define TIMER_GET_EXPIRATION_OFFSET UNITYSDK_OFFSET(0x9A53610)
#define TIMER_CANCEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define TIMER_GET_HASEXPIRED_OFFSET UNITYSDK_OFFSET(0x000000)
#define TIMER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A53620)

	inline static constexpr unsigned int Timer_TypeDefinitionIndex = 29718;

	class Timer : public Il2CppObject
	{
	public:
		::System::Int32 m_StartTimeMilliseconds; // 0x10
		::System::Int32 m_DurationMilliseconds; // 0x14

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TIMER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StartTime()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMER_GET_STARTTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_Expiration()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMER_GET_EXPIRATION_OFFSET))(nullptr);
		}

		::System::Boolean Cancel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMER_CANCEL_OFFSET))(nullptr);
		}

		::System::Boolean get_HasExpired()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMER_GET_HASEXPIRED_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMER_DISPOSE_OFFSET))(nullptr);
		}

	};

