#pragma once
#include "unitysdk.h"

#define INFINITETIMERQUEUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A51B60)
#define INFINITETIMERQUEUE_CREATETIMER_OFFSET UNITYSDK_OFFSET(0x9A53EC0)

	inline static constexpr unsigned int InfiniteTimerQueue_TypeDefinitionIndex = 29721;

	class InfiniteTimerQueue : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFINITETIMERQUEUE_.CTOR_OFFSET))(nullptr);
		}

		Timer* CreateTimer(Callback* arg, ::System::Object* arg)
		{
			return (return (Timer*(*)(Callback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INFINITETIMERQUEUE_CREATETIMER_OFFSET))(arg, arg, nullptr);
		}

	};

