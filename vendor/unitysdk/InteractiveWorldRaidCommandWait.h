#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define INTERACTIVEWORLDRAIDCOMMANDWAIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x259ECF0)
#define INTERACTIVEWORLDRAIDCOMMANDWAIT_EXECUTE_OFFSET UNITYSDK_OFFSET(0x259ED00)

	inline static constexpr unsigned int InteractiveWorldRaidCommandWait_TypeDefinitionIndex = 308;

	class InteractiveWorldRaidCommandWait : public Il2CppObject
	{
	public:
		::System::Int32 waitTime; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDWAIT_.CTOR_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Execute(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDWAIT_EXECUTE_OFFSET))(arg, nullptr);
		}

	};

