#pragma once
#include "unitysdk.h"

#define SERVERWAITINGSTATE_SET_WAITINGNUMBER_OFFSET UNITYSDK_OFFSET(0xB71CE0)
#define SERVERWAITINGSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xB71CF0)
#define SERVERWAITINGSTATE_GET_WAITINGNUMBER_OFFSET UNITYSDK_OFFSET(0xB71D20)
#define SERVERWAITINGSTATE_CHECKRETRYAVAILABLE_OFFSET UNITYSDK_OFFSET(0xB71240)

	inline static constexpr unsigned int ServerWaitingState_TypeDefinitionIndex = 8469;

	class ServerWaitingState : public Il2CppObject
	{
	public:
		::System::Single RETRY_THRESHOLD_SEC; // 0x0
		::System::Single waitingStartSec; // 0x10
		::System::Int64 _WaitingNumber_k__BackingField; // 0x18

		::System::Void set_WaitingNumber(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SERVERWAITINGSTATE_SET_WAITINGNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SERVERWAITINGSTATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_WaitingNumber()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SERVERWAITINGSTATE_GET_WAITINGNUMBER_OFFSET))(nullptr);
		}

		::System::Boolean CheckRetryAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SERVERWAITINGSTATE_CHECKRETRYAVAILABLE_OFFSET))(nullptr);
		}

	};

