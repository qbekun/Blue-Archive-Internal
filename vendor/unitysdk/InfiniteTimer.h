#pragma once
#include "unitysdk.h"

#define INFINITETIMER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A53F20)
#define INFINITETIMER_GET_HASEXPIRED_OFFSET UNITYSDK_OFFSET(0x9A54190)
#define INFINITETIMER_CANCEL_OFFSET UNITYSDK_OFFSET(0x9A541A0)

	inline static constexpr unsigned int InfiniteTimer_TypeDefinitionIndex = 29724;

	class InfiniteTimer : public Il2CppObject
	{
	public:
		::System::Int32 cancelled; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFINITETIMER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_HasExpired()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INFINITETIMER_GET_HASEXPIRED_OFFSET))(nullptr);
		}

		::System::Boolean Cancel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INFINITETIMER_CANCEL_OFFSET))(nullptr);
		}

	};

