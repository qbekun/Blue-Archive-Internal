#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }

#define INTERACTIVEWORLDRAIDCOMMANDSETASSTARTLEVEL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x259D2B0)
#define INTERACTIVEWORLDRAIDCOMMANDSETASSTARTLEVEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x259D4E0)

	inline static constexpr unsigned int InteractiveWorldRaidCommandSetAsStartLevel_TypeDefinitionIndex = 299;

	class InteractiveWorldRaidCommandSetAsStartLevel : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* Execute(::System::Threading::CancellationToken* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDSETASSTARTLEVEL_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCOMMANDSETASSTARTLEVEL_.CTOR_OFFSET))(nullptr);
		}

	};

