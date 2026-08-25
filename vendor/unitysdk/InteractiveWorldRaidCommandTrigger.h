#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define INTERACTIVEWORLDRAIDCOMMANDTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x259EB10)
#define INTERACTIVEWORLDRAIDCOMMANDTRIGGER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x259EB20)

	inline static constexpr unsigned int InteractiveWorldRaidCommandTrigger_TypeDefinitionIndex = 306;

	class InteractiveWorldRaidCommandTrigger : public Il2CppObject
	{
	public:
		Il2CppObject* triggers; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDTRIGGER_.CTOR_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Execute(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDTRIGGER_EXECUTE_OFFSET))(arg, nullptr);
		}

	};

