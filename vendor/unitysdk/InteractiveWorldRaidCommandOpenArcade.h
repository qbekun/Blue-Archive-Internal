#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define INTERACTIVEWORLDRAIDCOMMANDOPENARCADE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2599FA0)
#define INTERACTIVEWORLDRAIDCOMMANDOPENARCADE_.CTOR_OFFSET UNITYSDK_OFFSET(0x259A100)

	inline static constexpr unsigned int InteractiveWorldRaidCommandOpenArcade_TypeDefinitionIndex = 285;

	class InteractiveWorldRaidCommandOpenArcade : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* Execute(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDOPENARCADE_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDOPENARCADE_.CTOR_OFFSET))(nullptr);
		}

	};

