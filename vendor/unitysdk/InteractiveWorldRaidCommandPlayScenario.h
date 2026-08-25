#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define INTERACTIVEWORLDRAIDCOMMANDPLAYSCENARIO_.CTOR_OFFSET UNITYSDK_OFFSET(0x259C030)
#define INTERACTIVEWORLDRAIDCOMMANDPLAYSCENARIO_EXECUTE_OFFSET UNITYSDK_OFFSET(0x259C040)

	inline static constexpr unsigned int InteractiveWorldRaidCommandPlayScenario_TypeDefinitionIndex = 294;

	class InteractiveWorldRaidCommandPlayScenario : public Il2CppObject
	{
	public:
		::System::Int64 eventScenarioId; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDPLAYSCENARIO_.CTOR_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Execute(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDPLAYSCENARIO_EXECUTE_OFFSET))(arg, nullptr);
		}

	};

